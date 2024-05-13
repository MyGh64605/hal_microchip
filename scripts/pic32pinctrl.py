# Copyright (c) 2024 Microchip
# SPDX-License-Identifier: Apache-2.0

"""
Utility to autogenerate pinctrl definitions.

Usage::
    python3 pic32pinctrl.py [-i /path/to/configs] [-o /path/to/include]
"""

import argparse
from collections import OrderedDict
from pathlib import Path
import re

from natsort import natsorted
import yaml


REPO_ROOT = Path(__file__).absolute().parents[1]
"""Repository root."""

HEADER = """/*
 * Autogenerated file
 *
 * SPDX-License-Identifier: Apache-2.0
 */
"""
"""Header for the generated files."""

EXCEPTION = """
/*
 * WARNING: this variant has package exception.
 *
 *   Read datasheet topics related to I/O Multiplexing and Considerations or
 *   Peripheral Signal Multiplexing on I/O Lines for more information.
 */
"""


def get_header_fname(serie, variant, revision):
    """Get header file name.

    Args:
        family: Microchip PIC32 family.
        serie: Series.
        variant: Variant information.

    Returns:
        Header file name.
    """

    sufix = ""
    if revision:
        sufix = f"X{revision}"

    return f"pic32{serie}{variant}{sufix}-pinctrl.h"


def get_port_pin(pin_name):
    """Obtain port and pin number from a pin name

    Args:
        pin_name: Pin name, e.g. PA0

    Returns:
        Port and pin, e.g. A, 0.
    """

    m = re.match(r"P([A-Z])(\d+)", pin_name.upper())
    if not m:
        raise ValueError(f"Unexpected pin name: {pin_name}")

    return m.group(1), str(int(m.group(2)))


def write_gpio_function(f, port, pin_num, fmap, function):
    f.write(f"\n/* p{port.lower()}{pin_num}_{function.lower()} */\n")
    define = f"#define P{port.upper()}{pin_num.upper()}_{function.upper()}"
    define_val = f"{fmap}({port.lower()}, {pin_num}, {function.lower()}, " \
                 f"{function.lower()})"
    f.write(f"{define} \\\n\t{define_val}\n")


def write_wakeup_function(f, port, pin_num, pinmux, periph,
                          signal, fmap, function):
    f.write(f"\n/* p{port.lower()}{pin_num}{pinmux}_{periph}_{signal} "
            f"*/\n")
    define = f"#define P{port.upper()}{pin_num.upper()}" \
             f"{pinmux.upper()}_{periph.upper()}_{signal.upper()}"
    define_val = f"{fmap}({port.lower()}, {pin_num}, " \
                 f"{signal.lower()}, {function.lower()})"
    f.write(f"{define} \\\n\t{define_val}\n")


def write_periph_function(f, port, pin_num, pinmux, periph,
                          signal, fmap, function):
    f.write(f"\n/* p{port.lower()}{pin_num}{pinmux}_{periph}_{signal} "
            f"*/\n")
    define = f"#define P{port.upper()}{pin_num.upper()}" \
             f"{pinmux.upper()}_{periph.upper()}_{signal.upper()}"
    define_val = f"{fmap}({port.lower()}, {pin_num}, " \
                 f"{pinmux.lower()}, {function.lower()})"
    f.write(f"{define} \\\n\t{define_val}\n")


def generate_microchip_pic32_header(outdir, family, fmap, serie,
                              variant, pin_cfgs, revision):
    """Generate Microchip PIC32 header with pin configurations.

    Args:
        outdir: Output base directory.
        family: Microchip PIC32 family.
        fmap: Function to map pinctrl.
        series: MCU Series.
        variant: Variant information.
        pin_cfgs: Pin configurations.
    """

    ofname = outdir / get_header_fname(serie, variant["pincode"], revision)
    with open(ofname, "w") as f:
        f.write(HEADER)
        f.write(f'\n{"#include <dt-bindings/pinctrl/microchip_pic32_pinctrl.h>"}\n')

        if len(variant) > 2:
            if variant["exception"]:
                f.write(EXCEPTION)

        for port, pin_num, pinmux, periph, signal, function in pin_cfgs:
            if function in ["gpio", "lpm"]:
                write_gpio_function(f, port, pin_num, fmap, function)
                continue

            if function in ["wakeup"]:
                write_wakeup_function(f, port, pin_num, pinmux, periph,
                                      signal, fmap, function)
                continue

            write_periph_function(f, port, pin_num, pinmux, periph,
                                  signal, fmap, function)


def build_microchip_pic32_gpio_sets(pin_cfgs, pin):
    """Build Microchip PIC32 pin configurations sets.

    Args:
        pins: Pins description.

    Returns:
        Dictionary with pins configuration.
    """

    port, pin_num = get_port_pin(pin)
    new_item = (port, pin_num, "a", "gpio", "gpio", "gpio")

    if new_item not in pin_cfgs:
        pin_cfgs.append(new_item)


def build_microchip_pic32_sets(pin_cfgs, pin, pin_lst, serie, variant, function):
    """Build Microchip PIC32 pin configurations sets.

    Args:
        serie: MCU Serie.
        variant: Variant information.
        pins: Pins description.

    Returns:
        Dictionary with pins configuration.
    """

    if len(pin_lst[0]) > 0:
        for pinmux, periph, signal, *excludes in pin_lst:
            if len(excludes) > 0:
                if serie in excludes[0]:
                    continue
                if variant["pincode"] in excludes[0]:
                    continue

            port, pin_num = get_port_pin(pin)

            pin_cfgs.append((port, pin_num, pinmux, periph, signal, function))


def build_microchip_pic32_pin_cfgs(serie, variant, pins):
    """Build Microchip PIC32 pin configurations.

    Args:
        serie: MCU Serie.
        variant: Variant information.
        pins: Pins description.

    Returns:
        Dictionary with pins configuration.
    """

    pin_cfgs = []

    pins = OrderedDict(natsorted(pins.items(), key=lambda kv: kv[0]))

    for pin, pin_cfg in pins.items():
        if variant["pincode"] not in pin_cfg["pincodes"]:
            continue

        build_microchip_pic32_gpio_sets(pin_cfgs, pin)

        if "periph" in pin_cfg.keys():
            build_microchip_pic32_sets(pin_cfgs, pin, pin_cfg["periph"],
                                 serie, variant, "periph")
        if "extra" in pin_cfg.keys():
            build_microchip_pic32_sets(pin_cfgs, pin, pin_cfg["extra"],
                                 serie, variant, "extra")
        if "system" in pin_cfg.keys():
            build_microchip_pic32_sets(pin_cfgs, pin, pin_cfg["system"],
                                 serie, variant, "system")
        if "lpm" in pin_cfg.keys():
            build_microchip_pic32_sets(pin_cfgs, pin, pin_cfg["lpm"],
                                 serie, variant, "lpm")
        if "wakeup" in pin_cfg.keys():
            build_microchip_pic32_sets(pin_cfgs, pin, pin_cfg["wakeup"],
                                 serie, variant, "wakeup")

    return pin_cfgs


def main(indir, outdir) -> None:
    """Entry point.

    Args:
        indir: Directory with pin configuration files.
        outdir: Output directory
    """

    if outdir.exists():
        for entry in outdir.glob("pic32*-pinctrl.h"):
            entry.unlink()
    else:
        outdir.mkdir()

    for entry in indir.iterdir():
        if not entry.is_file() or entry.suffix not in (".yml", ".yaml"):
            continue

        config = yaml.load(open(entry), Loader=yaml.Loader)

        model = config["model"]
        family = config["family"]
        fmap = config["map"]
        series = config["series"]
        variants = config["variants"]
        has_rev = "revisions" in config.keys()
        pins = config["pins"]

        if model == "microchip,pic32":
            for serie in series:
                for variant in [v for v in variants if serie in v["series"]]:
                    pin_cfgs = build_microchip_pic32_pin_cfgs(serie, variant, pins)
                    rev = config["revisions"].get(serie) if has_rev else None
                    generate_microchip_pic32_header(outdir, family, fmap, serie,
                                              variant, pin_cfgs, rev)
        else:
            raise ValueError(f"Unexpected model: {model}")


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "-i",
        "--indir",
        type=Path,
        default=REPO_ROOT / "pinconfigs",
        help="Directory with pin configuration files",
    )
    parser.add_argument(
        "-o",
        "--outdir",
        type=Path,
        default=REPO_ROOT / "include" / "dt-bindings" / "pinctrl",
        help="Output directory",
    )
    args = parser.parse_args()

    main(args.indir, args.outdir)