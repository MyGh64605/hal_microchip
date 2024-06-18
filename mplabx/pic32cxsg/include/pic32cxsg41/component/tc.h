/*
 * Component description for TC
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/* file generated from device description file (ATDF) version 2023-03-17T09:48:34Z */
#ifndef _PIC32CXSG41_TC_COMPONENT_H_
#define _PIC32CXSG41_TC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR TC                                           */
/* ************************************************************************** */

/* -------- TC_CTRLA : (TC Offset: 0x00) (R/W 32) Control A -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SWRST:1;          /*!< bit:      0  Software Reset                     */
    uint32_t ENABLE:1;         /*!< bit:      1  Enable                             */
    uint32_t MODE:2;           /*!< bit:  2.. 3  Timer Counter Mode                 */
    uint32_t PRESCSYNC:2;      /*!< bit:  4.. 5  Prescaler and Counter Synchronization */
    uint32_t RUNSTDBY:1;       /*!< bit:      6  Run during Standby                 */
    uint32_t ONDEMAND:1;       /*!< bit:      7  Clock On Demand                    */
    uint32_t PRESCALER:3;      /*!< bit:  8..10  Prescaler                          */
    uint32_t ALOCK:1;          /*!< bit:     11  Auto Lock                          */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t CAPTEN0:1;        /*!< bit:     16  Capture Channel 0 Enable           */
    uint32_t CAPTEN1:1;        /*!< bit:     17  Capture Channel 1 Enable           */
    uint32_t :2;               /*!< bit: 18..19  Reserved                           */
    uint32_t COPEN0:1;         /*!< bit:     20  Capture On Pin 0 Enable            */
    uint32_t COPEN1:1;         /*!< bit:     21  Capture On Pin 1 Enable            */
    uint32_t :2;               /*!< bit: 22..23  Reserved                           */
    uint32_t CAPTMODE0:2;      /*!< bit: 24..25  Capture Mode Channel 0             */
    uint32_t :1;               /*!< bit:     26  Reserved                           */
    uint32_t CAPTMODE1:2;      /*!< bit: 27..28  Capture mode Channel 1             */
    uint32_t :3;               /*!< bit: 29..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint32_t :16;              /*!< bit:  0..15  Reserved                           */
    uint32_t CAPTEN:2;         /*!< bit: 16..17  Capture Channel x Enable           */
    uint32_t :2;               /*!< bit: 18..19  Reserved                           */
    uint32_t COPEN:2;          /*!< bit: 20..21  Capture On Pin x Enable            */
    uint32_t :10;              /*!< bit: 22..31  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TC_CTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_CTRLA_RESETVALUE                   _UINT32_(0x00)                                       /*  (TC_CTRLA) Control A  Reset Value */

#define TC_CTRLA_SWRST_Pos                    _UINT32_(0)                                          /* (TC_CTRLA) Software Reset Position */
#define TC_CTRLA_SWRST_Msk                    (_UINT32_(0x1) << TC_CTRLA_SWRST_Pos)                /* (TC_CTRLA) Software Reset Mask */
#define TC_CTRLA_SWRST(value)                 (TC_CTRLA_SWRST_Msk & (_UINT32_(value) << TC_CTRLA_SWRST_Pos)) /* Assigment of value for SWRST in the TC_CTRLA register */
#define TC_CTRLA_ENABLE_Pos                   _UINT32_(1)                                          /* (TC_CTRLA) Enable Position */
#define TC_CTRLA_ENABLE_Msk                   (_UINT32_(0x1) << TC_CTRLA_ENABLE_Pos)               /* (TC_CTRLA) Enable Mask */
#define TC_CTRLA_ENABLE(value)                (TC_CTRLA_ENABLE_Msk & (_UINT32_(value) << TC_CTRLA_ENABLE_Pos)) /* Assigment of value for ENABLE in the TC_CTRLA register */
#define TC_CTRLA_MODE_Pos                     _UINT32_(2)                                          /* (TC_CTRLA) Timer Counter Mode Position */
#define TC_CTRLA_MODE_Msk                     (_UINT32_(0x3) << TC_CTRLA_MODE_Pos)                 /* (TC_CTRLA) Timer Counter Mode Mask */
#define TC_CTRLA_MODE(value)                  (TC_CTRLA_MODE_Msk & (_UINT32_(value) << TC_CTRLA_MODE_Pos)) /* Assigment of value for MODE in the TC_CTRLA register */
#define   TC_CTRLA_MODE_COUNT16_Val           _UINT32_(0x0)                                        /* (TC_CTRLA) Counter in 16-bit mode  */
#define   TC_CTRLA_MODE_COUNT8_Val            _UINT32_(0x1)                                        /* (TC_CTRLA) Counter in 8-bit mode  */
#define   TC_CTRLA_MODE_COUNT32_Val           _UINT32_(0x2)                                        /* (TC_CTRLA) Counter in 32-bit mode  */
#define TC_CTRLA_MODE_COUNT16                 (TC_CTRLA_MODE_COUNT16_Val << TC_CTRLA_MODE_Pos)     /* (TC_CTRLA) Counter in 16-bit mode Position  */
#define TC_CTRLA_MODE_COUNT8                  (TC_CTRLA_MODE_COUNT8_Val << TC_CTRLA_MODE_Pos)      /* (TC_CTRLA) Counter in 8-bit mode Position  */
#define TC_CTRLA_MODE_COUNT32                 (TC_CTRLA_MODE_COUNT32_Val << TC_CTRLA_MODE_Pos)     /* (TC_CTRLA) Counter in 32-bit mode Position  */
#define TC_CTRLA_PRESCSYNC_Pos                _UINT32_(4)                                          /* (TC_CTRLA) Prescaler and Counter Synchronization Position */
#define TC_CTRLA_PRESCSYNC_Msk                (_UINT32_(0x3) << TC_CTRLA_PRESCSYNC_Pos)            /* (TC_CTRLA) Prescaler and Counter Synchronization Mask */
#define TC_CTRLA_PRESCSYNC(value)             (TC_CTRLA_PRESCSYNC_Msk & (_UINT32_(value) << TC_CTRLA_PRESCSYNC_Pos)) /* Assigment of value for PRESCSYNC in the TC_CTRLA register */
#define   TC_CTRLA_PRESCSYNC_GCLK_Val         _UINT32_(0x0)                                        /* (TC_CTRLA) Reload or reset the counter on next generic clock  */
#define   TC_CTRLA_PRESCSYNC_PRESC_Val        _UINT32_(0x1)                                        /* (TC_CTRLA) Reload or reset the counter on next prescaler clock  */
#define   TC_CTRLA_PRESCSYNC_RESYNC_Val       _UINT32_(0x2)                                        /* (TC_CTRLA) Reload or reset the counter on next generic clock and reset the prescaler counter  */
#define TC_CTRLA_PRESCSYNC_GCLK               (TC_CTRLA_PRESCSYNC_GCLK_Val << TC_CTRLA_PRESCSYNC_Pos) /* (TC_CTRLA) Reload or reset the counter on next generic clock Position  */
#define TC_CTRLA_PRESCSYNC_PRESC              (TC_CTRLA_PRESCSYNC_PRESC_Val << TC_CTRLA_PRESCSYNC_Pos) /* (TC_CTRLA) Reload or reset the counter on next prescaler clock Position  */
#define TC_CTRLA_PRESCSYNC_RESYNC             (TC_CTRLA_PRESCSYNC_RESYNC_Val << TC_CTRLA_PRESCSYNC_Pos) /* (TC_CTRLA) Reload or reset the counter on next generic clock and reset the prescaler counter Position  */
#define TC_CTRLA_RUNSTDBY_Pos                 _UINT32_(6)                                          /* (TC_CTRLA) Run during Standby Position */
#define TC_CTRLA_RUNSTDBY_Msk                 (_UINT32_(0x1) << TC_CTRLA_RUNSTDBY_Pos)             /* (TC_CTRLA) Run during Standby Mask */
#define TC_CTRLA_RUNSTDBY(value)              (TC_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << TC_CTRLA_RUNSTDBY_Pos)) /* Assigment of value for RUNSTDBY in the TC_CTRLA register */
#define TC_CTRLA_ONDEMAND_Pos                 _UINT32_(7)                                          /* (TC_CTRLA) Clock On Demand Position */
#define TC_CTRLA_ONDEMAND_Msk                 (_UINT32_(0x1) << TC_CTRLA_ONDEMAND_Pos)             /* (TC_CTRLA) Clock On Demand Mask */
#define TC_CTRLA_ONDEMAND(value)              (TC_CTRLA_ONDEMAND_Msk & (_UINT32_(value) << TC_CTRLA_ONDEMAND_Pos)) /* Assigment of value for ONDEMAND in the TC_CTRLA register */
#define TC_CTRLA_PRESCALER_Pos                _UINT32_(8)                                          /* (TC_CTRLA) Prescaler Position */
#define TC_CTRLA_PRESCALER_Msk                (_UINT32_(0x7) << TC_CTRLA_PRESCALER_Pos)            /* (TC_CTRLA) Prescaler Mask */
#define TC_CTRLA_PRESCALER(value)             (TC_CTRLA_PRESCALER_Msk & (_UINT32_(value) << TC_CTRLA_PRESCALER_Pos)) /* Assigment of value for PRESCALER in the TC_CTRLA register */
#define   TC_CTRLA_PRESCALER_DIV1_Val         _UINT32_(0x0)                                        /* (TC_CTRLA) Prescaler: GCLK_TC  */
#define   TC_CTRLA_PRESCALER_DIV2_Val         _UINT32_(0x1)                                        /* (TC_CTRLA) Prescaler: GCLK_TC/2  */
#define   TC_CTRLA_PRESCALER_DIV4_Val         _UINT32_(0x2)                                        /* (TC_CTRLA) Prescaler: GCLK_TC/4  */
#define   TC_CTRLA_PRESCALER_DIV8_Val         _UINT32_(0x3)                                        /* (TC_CTRLA) Prescaler: GCLK_TC/8  */
#define   TC_CTRLA_PRESCALER_DIV16_Val        _UINT32_(0x4)                                        /* (TC_CTRLA) Prescaler: GCLK_TC/16  */
#define   TC_CTRLA_PRESCALER_DIV64_Val        _UINT32_(0x5)                                        /* (TC_CTRLA) Prescaler: GCLK_TC/64  */
#define   TC_CTRLA_PRESCALER_DIV256_Val       _UINT32_(0x6)                                        /* (TC_CTRLA) Prescaler: GCLK_TC/256  */
#define   TC_CTRLA_PRESCALER_DIV1024_Val      _UINT32_(0x7)                                        /* (TC_CTRLA) Prescaler: GCLK_TC/1024  */
#define TC_CTRLA_PRESCALER_DIV1               (TC_CTRLA_PRESCALER_DIV1_Val << TC_CTRLA_PRESCALER_Pos) /* (TC_CTRLA) Prescaler: GCLK_TC Position  */
#define TC_CTRLA_PRESCALER_DIV2               (TC_CTRLA_PRESCALER_DIV2_Val << TC_CTRLA_PRESCALER_Pos) /* (TC_CTRLA) Prescaler: GCLK_TC/2 Position  */
#define TC_CTRLA_PRESCALER_DIV4               (TC_CTRLA_PRESCALER_DIV4_Val << TC_CTRLA_PRESCALER_Pos) /* (TC_CTRLA) Prescaler: GCLK_TC/4 Position  */
#define TC_CTRLA_PRESCALER_DIV8               (TC_CTRLA_PRESCALER_DIV8_Val << TC_CTRLA_PRESCALER_Pos) /* (TC_CTRLA) Prescaler: GCLK_TC/8 Position  */
#define TC_CTRLA_PRESCALER_DIV16              (TC_CTRLA_PRESCALER_DIV16_Val << TC_CTRLA_PRESCALER_Pos) /* (TC_CTRLA) Prescaler: GCLK_TC/16 Position  */
#define TC_CTRLA_PRESCALER_DIV64              (TC_CTRLA_PRESCALER_DIV64_Val << TC_CTRLA_PRESCALER_Pos) /* (TC_CTRLA) Prescaler: GCLK_TC/64 Position  */
#define TC_CTRLA_PRESCALER_DIV256             (TC_CTRLA_PRESCALER_DIV256_Val << TC_CTRLA_PRESCALER_Pos) /* (TC_CTRLA) Prescaler: GCLK_TC/256 Position  */
#define TC_CTRLA_PRESCALER_DIV1024            (TC_CTRLA_PRESCALER_DIV1024_Val << TC_CTRLA_PRESCALER_Pos) /* (TC_CTRLA) Prescaler: GCLK_TC/1024 Position  */
#define TC_CTRLA_ALOCK_Pos                    _UINT32_(11)                                         /* (TC_CTRLA) Auto Lock Position */
#define TC_CTRLA_ALOCK_Msk                    (_UINT32_(0x1) << TC_CTRLA_ALOCK_Pos)                /* (TC_CTRLA) Auto Lock Mask */
#define TC_CTRLA_ALOCK(value)                 (TC_CTRLA_ALOCK_Msk & (_UINT32_(value) << TC_CTRLA_ALOCK_Pos)) /* Assigment of value for ALOCK in the TC_CTRLA register */
#define TC_CTRLA_CAPTEN0_Pos                  _UINT32_(16)                                         /* (TC_CTRLA) Capture Channel 0 Enable Position */
#define TC_CTRLA_CAPTEN0_Msk                  (_UINT32_(0x1) << TC_CTRLA_CAPTEN0_Pos)              /* (TC_CTRLA) Capture Channel 0 Enable Mask */
#define TC_CTRLA_CAPTEN0(value)               (TC_CTRLA_CAPTEN0_Msk & (_UINT32_(value) << TC_CTRLA_CAPTEN0_Pos)) /* Assigment of value for CAPTEN0 in the TC_CTRLA register */
#define TC_CTRLA_CAPTEN1_Pos                  _UINT32_(17)                                         /* (TC_CTRLA) Capture Channel 1 Enable Position */
#define TC_CTRLA_CAPTEN1_Msk                  (_UINT32_(0x1) << TC_CTRLA_CAPTEN1_Pos)              /* (TC_CTRLA) Capture Channel 1 Enable Mask */
#define TC_CTRLA_CAPTEN1(value)               (TC_CTRLA_CAPTEN1_Msk & (_UINT32_(value) << TC_CTRLA_CAPTEN1_Pos)) /* Assigment of value for CAPTEN1 in the TC_CTRLA register */
#define TC_CTRLA_COPEN0_Pos                   _UINT32_(20)                                         /* (TC_CTRLA) Capture On Pin 0 Enable Position */
#define TC_CTRLA_COPEN0_Msk                   (_UINT32_(0x1) << TC_CTRLA_COPEN0_Pos)               /* (TC_CTRLA) Capture On Pin 0 Enable Mask */
#define TC_CTRLA_COPEN0(value)                (TC_CTRLA_COPEN0_Msk & (_UINT32_(value) << TC_CTRLA_COPEN0_Pos)) /* Assigment of value for COPEN0 in the TC_CTRLA register */
#define TC_CTRLA_COPEN1_Pos                   _UINT32_(21)                                         /* (TC_CTRLA) Capture On Pin 1 Enable Position */
#define TC_CTRLA_COPEN1_Msk                   (_UINT32_(0x1) << TC_CTRLA_COPEN1_Pos)               /* (TC_CTRLA) Capture On Pin 1 Enable Mask */
#define TC_CTRLA_COPEN1(value)                (TC_CTRLA_COPEN1_Msk & (_UINT32_(value) << TC_CTRLA_COPEN1_Pos)) /* Assigment of value for COPEN1 in the TC_CTRLA register */
#define TC_CTRLA_CAPTMODE0_Pos                _UINT32_(24)                                         /* (TC_CTRLA) Capture Mode Channel 0 Position */
#define TC_CTRLA_CAPTMODE0_Msk                (_UINT32_(0x3) << TC_CTRLA_CAPTMODE0_Pos)            /* (TC_CTRLA) Capture Mode Channel 0 Mask */
#define TC_CTRLA_CAPTMODE0(value)             (TC_CTRLA_CAPTMODE0_Msk & (_UINT32_(value) << TC_CTRLA_CAPTMODE0_Pos)) /* Assigment of value for CAPTMODE0 in the TC_CTRLA register */
#define   TC_CTRLA_CAPTMODE0_DEFAULT_Val      _UINT32_(0x0)                                        /* (TC_CTRLA) Default capture  */
#define   TC_CTRLA_CAPTMODE0_CAPTMIN_Val      _UINT32_(0x1)                                        /* (TC_CTRLA) Minimum capture  */
#define   TC_CTRLA_CAPTMODE0_CAPTMAX_Val      _UINT32_(0x2)                                        /* (TC_CTRLA) Maximum capture  */
#define TC_CTRLA_CAPTMODE0_DEFAULT            (TC_CTRLA_CAPTMODE0_DEFAULT_Val << TC_CTRLA_CAPTMODE0_Pos) /* (TC_CTRLA) Default capture Position  */
#define TC_CTRLA_CAPTMODE0_CAPTMIN            (TC_CTRLA_CAPTMODE0_CAPTMIN_Val << TC_CTRLA_CAPTMODE0_Pos) /* (TC_CTRLA) Minimum capture Position  */
#define TC_CTRLA_CAPTMODE0_CAPTMAX            (TC_CTRLA_CAPTMODE0_CAPTMAX_Val << TC_CTRLA_CAPTMODE0_Pos) /* (TC_CTRLA) Maximum capture Position  */
#define TC_CTRLA_CAPTMODE1_Pos                _UINT32_(27)                                         /* (TC_CTRLA) Capture mode Channel 1 Position */
#define TC_CTRLA_CAPTMODE1_Msk                (_UINT32_(0x3) << TC_CTRLA_CAPTMODE1_Pos)            /* (TC_CTRLA) Capture mode Channel 1 Mask */
#define TC_CTRLA_CAPTMODE1(value)             (TC_CTRLA_CAPTMODE1_Msk & (_UINT32_(value) << TC_CTRLA_CAPTMODE1_Pos)) /* Assigment of value for CAPTMODE1 in the TC_CTRLA register */
#define   TC_CTRLA_CAPTMODE1_DEFAULT_Val      _UINT32_(0x0)                                        /* (TC_CTRLA) Default capture  */
#define   TC_CTRLA_CAPTMODE1_CAPTMIN_Val      _UINT32_(0x1)                                        /* (TC_CTRLA) Minimum capture  */
#define   TC_CTRLA_CAPTMODE1_CAPTMAX_Val      _UINT32_(0x2)                                        /* (TC_CTRLA) Maximum capture  */
#define TC_CTRLA_CAPTMODE1_DEFAULT            (TC_CTRLA_CAPTMODE1_DEFAULT_Val << TC_CTRLA_CAPTMODE1_Pos) /* (TC_CTRLA) Default capture Position  */
#define TC_CTRLA_CAPTMODE1_CAPTMIN            (TC_CTRLA_CAPTMODE1_CAPTMIN_Val << TC_CTRLA_CAPTMODE1_Pos) /* (TC_CTRLA) Minimum capture Position  */
#define TC_CTRLA_CAPTMODE1_CAPTMAX            (TC_CTRLA_CAPTMODE1_CAPTMAX_Val << TC_CTRLA_CAPTMODE1_Pos) /* (TC_CTRLA) Maximum capture Position  */
#define TC_CTRLA_Msk                          _UINT32_(0x1B330FFF)                                 /* (TC_CTRLA) Register Mask  */

#define TC_CTRLA_CAPTEN_Pos                   _UINT32_(16)                                         /* (TC_CTRLA Position) Capture Channel x Enable */
#define TC_CTRLA_CAPTEN_Msk                   (_UINT32_(0x3) << TC_CTRLA_CAPTEN_Pos)               /* (TC_CTRLA Mask) CAPTEN */
#define TC_CTRLA_CAPTEN(value)                (TC_CTRLA_CAPTEN_Msk & (_UINT32_(value) << TC_CTRLA_CAPTEN_Pos)) 
#define TC_CTRLA_COPEN_Pos                    _UINT32_(20)                                         /* (TC_CTRLA Position) Capture On Pin x Enable */
#define TC_CTRLA_COPEN_Msk                    (_UINT32_(0x3) << TC_CTRLA_COPEN_Pos)                /* (TC_CTRLA Mask) COPEN */
#define TC_CTRLA_COPEN(value)                 (TC_CTRLA_COPEN_Msk & (_UINT32_(value) << TC_CTRLA_COPEN_Pos)) 

/* -------- TC_CTRLBCLR : (TC Offset: 0x04) (R/W 8) Control B Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DIR:1;            /*!< bit:      0  Counter Direction                  */
    uint8_t  LUPD:1;           /*!< bit:      1  Lock Update                        */
    uint8_t  ONESHOT:1;        /*!< bit:      2  One-Shot on Counter                */
    uint8_t  :2;               /*!< bit:  3.. 4  Reserved                           */
    uint8_t  CMD:3;            /*!< bit:  5.. 7  Command                            */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_CTRLBCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_CTRLBCLR_RESETVALUE                _UINT8_(0x00)                                        /*  (TC_CTRLBCLR) Control B Clear  Reset Value */

#define TC_CTRLBCLR_DIR_Pos                   _UINT8_(0)                                           /* (TC_CTRLBCLR) Counter Direction Position */
#define TC_CTRLBCLR_DIR_Msk                   (_UINT8_(0x1) << TC_CTRLBCLR_DIR_Pos)                /* (TC_CTRLBCLR) Counter Direction Mask */
#define TC_CTRLBCLR_DIR(value)                (TC_CTRLBCLR_DIR_Msk & (_UINT8_(value) << TC_CTRLBCLR_DIR_Pos)) /* Assigment of value for DIR in the TC_CTRLBCLR register */
#define TC_CTRLBCLR_LUPD_Pos                  _UINT8_(1)                                           /* (TC_CTRLBCLR) Lock Update Position */
#define TC_CTRLBCLR_LUPD_Msk                  (_UINT8_(0x1) << TC_CTRLBCLR_LUPD_Pos)               /* (TC_CTRLBCLR) Lock Update Mask */
#define TC_CTRLBCLR_LUPD(value)               (TC_CTRLBCLR_LUPD_Msk & (_UINT8_(value) << TC_CTRLBCLR_LUPD_Pos)) /* Assigment of value for LUPD in the TC_CTRLBCLR register */
#define TC_CTRLBCLR_ONESHOT_Pos               _UINT8_(2)                                           /* (TC_CTRLBCLR) One-Shot on Counter Position */
#define TC_CTRLBCLR_ONESHOT_Msk               (_UINT8_(0x1) << TC_CTRLBCLR_ONESHOT_Pos)            /* (TC_CTRLBCLR) One-Shot on Counter Mask */
#define TC_CTRLBCLR_ONESHOT(value)            (TC_CTRLBCLR_ONESHOT_Msk & (_UINT8_(value) << TC_CTRLBCLR_ONESHOT_Pos)) /* Assigment of value for ONESHOT in the TC_CTRLBCLR register */
#define TC_CTRLBCLR_CMD_Pos                   _UINT8_(5)                                           /* (TC_CTRLBCLR) Command Position */
#define TC_CTRLBCLR_CMD_Msk                   (_UINT8_(0x7) << TC_CTRLBCLR_CMD_Pos)                /* (TC_CTRLBCLR) Command Mask */
#define TC_CTRLBCLR_CMD(value)                (TC_CTRLBCLR_CMD_Msk & (_UINT8_(value) << TC_CTRLBCLR_CMD_Pos)) /* Assigment of value for CMD in the TC_CTRLBCLR register */
#define   TC_CTRLBCLR_CMD_NONE_Val            _UINT8_(0x0)                                         /* (TC_CTRLBCLR) No action  */
#define   TC_CTRLBCLR_CMD_RETRIGGER_Val       _UINT8_(0x1)                                         /* (TC_CTRLBCLR) Force a start, restart or retrigger  */
#define   TC_CTRLBCLR_CMD_STOP_Val            _UINT8_(0x2)                                         /* (TC_CTRLBCLR) Force a stop  */
#define   TC_CTRLBCLR_CMD_UPDATE_Val          _UINT8_(0x3)                                         /* (TC_CTRLBCLR) Force update of double-buffered register  */
#define   TC_CTRLBCLR_CMD_READSYNC_Val        _UINT8_(0x4)                                         /* (TC_CTRLBCLR) Force a read synchronization of COUNT  */
#define TC_CTRLBCLR_CMD_NONE                  (TC_CTRLBCLR_CMD_NONE_Val << TC_CTRLBCLR_CMD_Pos)    /* (TC_CTRLBCLR) No action Position  */
#define TC_CTRLBCLR_CMD_RETRIGGER             (TC_CTRLBCLR_CMD_RETRIGGER_Val << TC_CTRLBCLR_CMD_Pos) /* (TC_CTRLBCLR) Force a start, restart or retrigger Position  */
#define TC_CTRLBCLR_CMD_STOP                  (TC_CTRLBCLR_CMD_STOP_Val << TC_CTRLBCLR_CMD_Pos)    /* (TC_CTRLBCLR) Force a stop Position  */
#define TC_CTRLBCLR_CMD_UPDATE                (TC_CTRLBCLR_CMD_UPDATE_Val << TC_CTRLBCLR_CMD_Pos)  /* (TC_CTRLBCLR) Force update of double-buffered register Position  */
#define TC_CTRLBCLR_CMD_READSYNC              (TC_CTRLBCLR_CMD_READSYNC_Val << TC_CTRLBCLR_CMD_Pos) /* (TC_CTRLBCLR) Force a read synchronization of COUNT Position  */
#define TC_CTRLBCLR_Msk                       _UINT8_(0xE7)                                        /* (TC_CTRLBCLR) Register Mask  */


/* -------- TC_CTRLBSET : (TC Offset: 0x05) (R/W 8) Control B Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DIR:1;            /*!< bit:      0  Counter Direction                  */
    uint8_t  LUPD:1;           /*!< bit:      1  Lock Update                        */
    uint8_t  ONESHOT:1;        /*!< bit:      2  One-Shot on Counter                */
    uint8_t  :2;               /*!< bit:  3.. 4  Reserved                           */
    uint8_t  CMD:3;            /*!< bit:  5.. 7  Command                            */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_CTRLBSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_CTRLBSET_RESETVALUE                _UINT8_(0x00)                                        /*  (TC_CTRLBSET) Control B Set  Reset Value */

#define TC_CTRLBSET_DIR_Pos                   _UINT8_(0)                                           /* (TC_CTRLBSET) Counter Direction Position */
#define TC_CTRLBSET_DIR_Msk                   (_UINT8_(0x1) << TC_CTRLBSET_DIR_Pos)                /* (TC_CTRLBSET) Counter Direction Mask */
#define TC_CTRLBSET_DIR(value)                (TC_CTRLBSET_DIR_Msk & (_UINT8_(value) << TC_CTRLBSET_DIR_Pos)) /* Assigment of value for DIR in the TC_CTRLBSET register */
#define TC_CTRLBSET_LUPD_Pos                  _UINT8_(1)                                           /* (TC_CTRLBSET) Lock Update Position */
#define TC_CTRLBSET_LUPD_Msk                  (_UINT8_(0x1) << TC_CTRLBSET_LUPD_Pos)               /* (TC_CTRLBSET) Lock Update Mask */
#define TC_CTRLBSET_LUPD(value)               (TC_CTRLBSET_LUPD_Msk & (_UINT8_(value) << TC_CTRLBSET_LUPD_Pos)) /* Assigment of value for LUPD in the TC_CTRLBSET register */
#define TC_CTRLBSET_ONESHOT_Pos               _UINT8_(2)                                           /* (TC_CTRLBSET) One-Shot on Counter Position */
#define TC_CTRLBSET_ONESHOT_Msk               (_UINT8_(0x1) << TC_CTRLBSET_ONESHOT_Pos)            /* (TC_CTRLBSET) One-Shot on Counter Mask */
#define TC_CTRLBSET_ONESHOT(value)            (TC_CTRLBSET_ONESHOT_Msk & (_UINT8_(value) << TC_CTRLBSET_ONESHOT_Pos)) /* Assigment of value for ONESHOT in the TC_CTRLBSET register */
#define TC_CTRLBSET_CMD_Pos                   _UINT8_(5)                                           /* (TC_CTRLBSET) Command Position */
#define TC_CTRLBSET_CMD_Msk                   (_UINT8_(0x7) << TC_CTRLBSET_CMD_Pos)                /* (TC_CTRLBSET) Command Mask */
#define TC_CTRLBSET_CMD(value)                (TC_CTRLBSET_CMD_Msk & (_UINT8_(value) << TC_CTRLBSET_CMD_Pos)) /* Assigment of value for CMD in the TC_CTRLBSET register */
#define   TC_CTRLBSET_CMD_NONE_Val            _UINT8_(0x0)                                         /* (TC_CTRLBSET) No action  */
#define   TC_CTRLBSET_CMD_RETRIGGER_Val       _UINT8_(0x1)                                         /* (TC_CTRLBSET) Force a start, restart or retrigger  */
#define   TC_CTRLBSET_CMD_STOP_Val            _UINT8_(0x2)                                         /* (TC_CTRLBSET) Force a stop  */
#define   TC_CTRLBSET_CMD_UPDATE_Val          _UINT8_(0x3)                                         /* (TC_CTRLBSET) Force update of double-buffered register  */
#define   TC_CTRLBSET_CMD_READSYNC_Val        _UINT8_(0x4)                                         /* (TC_CTRLBSET) Force a read synchronization of COUNT  */
#define TC_CTRLBSET_CMD_NONE                  (TC_CTRLBSET_CMD_NONE_Val << TC_CTRLBSET_CMD_Pos)    /* (TC_CTRLBSET) No action Position  */
#define TC_CTRLBSET_CMD_RETRIGGER             (TC_CTRLBSET_CMD_RETRIGGER_Val << TC_CTRLBSET_CMD_Pos) /* (TC_CTRLBSET) Force a start, restart or retrigger Position  */
#define TC_CTRLBSET_CMD_STOP                  (TC_CTRLBSET_CMD_STOP_Val << TC_CTRLBSET_CMD_Pos)    /* (TC_CTRLBSET) Force a stop Position  */
#define TC_CTRLBSET_CMD_UPDATE                (TC_CTRLBSET_CMD_UPDATE_Val << TC_CTRLBSET_CMD_Pos)  /* (TC_CTRLBSET) Force update of double-buffered register Position  */
#define TC_CTRLBSET_CMD_READSYNC              (TC_CTRLBSET_CMD_READSYNC_Val << TC_CTRLBSET_CMD_Pos) /* (TC_CTRLBSET) Force a read synchronization of COUNT Position  */
#define TC_CTRLBSET_Msk                       _UINT8_(0xE7)                                        /* (TC_CTRLBSET) Register Mask  */


/* -------- TC_EVCTRL : (TC Offset: 0x06) (R/W 16) Event Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t EVACT:3;          /*!< bit:  0.. 2  Event Action                       */
    uint16_t :1;               /*!< bit:      3  Reserved                           */
    uint16_t TCINV:1;          /*!< bit:      4  TC Event Input Polarity            */
    uint16_t TCEI:1;           /*!< bit:      5  TC Event Enable                    */
    uint16_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint16_t OVFEO:1;          /*!< bit:      8  Event Output Enable                */
    uint16_t :3;               /*!< bit:  9..11  Reserved                           */
    uint16_t MCEO0:1;          /*!< bit:     12  MC Event Output Enable 0           */
    uint16_t MCEO1:1;          /*!< bit:     13  MC Event Output Enable 1           */
    uint16_t :2;               /*!< bit: 14..15  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint16_t :12;              /*!< bit:  0..11  Reserved                           */
    uint16_t MCEO:2;           /*!< bit: 12..13  MC Event Output Enable x           */
    uint16_t :2;               /*!< bit: 14..15  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} TC_EVCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_EVCTRL_RESETVALUE                  _UINT16_(0x00)                                       /*  (TC_EVCTRL) Event Control  Reset Value */

#define TC_EVCTRL_EVACT_Pos                   _UINT16_(0)                                          /* (TC_EVCTRL) Event Action Position */
#define TC_EVCTRL_EVACT_Msk                   (_UINT16_(0x7) << TC_EVCTRL_EVACT_Pos)               /* (TC_EVCTRL) Event Action Mask */
#define TC_EVCTRL_EVACT(value)                (TC_EVCTRL_EVACT_Msk & (_UINT16_(value) << TC_EVCTRL_EVACT_Pos)) /* Assigment of value for EVACT in the TC_EVCTRL register */
#define   TC_EVCTRL_EVACT_OFF_Val             _UINT16_(0x0)                                        /* (TC_EVCTRL) Event action disabled  */
#define   TC_EVCTRL_EVACT_RETRIGGER_Val       _UINT16_(0x1)                                        /* (TC_EVCTRL) Start, restart or retrigger TC on event  */
#define   TC_EVCTRL_EVACT_COUNT_Val           _UINT16_(0x2)                                        /* (TC_EVCTRL) Count on event  */
#define   TC_EVCTRL_EVACT_START_Val           _UINT16_(0x3)                                        /* (TC_EVCTRL) Start TC on event  */
#define   TC_EVCTRL_EVACT_STAMP_Val           _UINT16_(0x4)                                        /* (TC_EVCTRL) Time stamp capture  */
#define   TC_EVCTRL_EVACT_PPW_Val             _UINT16_(0x5)                                        /* (TC_EVCTRL) Period catured in CC0, pulse width in CC1  */
#define   TC_EVCTRL_EVACT_PWP_Val             _UINT16_(0x6)                                        /* (TC_EVCTRL) Period catured in CC1, pulse width in CC0  */
#define   TC_EVCTRL_EVACT_PW_Val              _UINT16_(0x7)                                        /* (TC_EVCTRL) Pulse width capture  */
#define TC_EVCTRL_EVACT_OFF                   (TC_EVCTRL_EVACT_OFF_Val << TC_EVCTRL_EVACT_Pos)     /* (TC_EVCTRL) Event action disabled Position  */
#define TC_EVCTRL_EVACT_RETRIGGER             (TC_EVCTRL_EVACT_RETRIGGER_Val << TC_EVCTRL_EVACT_Pos) /* (TC_EVCTRL) Start, restart or retrigger TC on event Position  */
#define TC_EVCTRL_EVACT_COUNT                 (TC_EVCTRL_EVACT_COUNT_Val << TC_EVCTRL_EVACT_Pos)   /* (TC_EVCTRL) Count on event Position  */
#define TC_EVCTRL_EVACT_START                 (TC_EVCTRL_EVACT_START_Val << TC_EVCTRL_EVACT_Pos)   /* (TC_EVCTRL) Start TC on event Position  */
#define TC_EVCTRL_EVACT_STAMP                 (TC_EVCTRL_EVACT_STAMP_Val << TC_EVCTRL_EVACT_Pos)   /* (TC_EVCTRL) Time stamp capture Position  */
#define TC_EVCTRL_EVACT_PPW                   (TC_EVCTRL_EVACT_PPW_Val << TC_EVCTRL_EVACT_Pos)     /* (TC_EVCTRL) Period catured in CC0, pulse width in CC1 Position  */
#define TC_EVCTRL_EVACT_PWP                   (TC_EVCTRL_EVACT_PWP_Val << TC_EVCTRL_EVACT_Pos)     /* (TC_EVCTRL) Period catured in CC1, pulse width in CC0 Position  */
#define TC_EVCTRL_EVACT_PW                    (TC_EVCTRL_EVACT_PW_Val << TC_EVCTRL_EVACT_Pos)      /* (TC_EVCTRL) Pulse width capture Position  */
#define TC_EVCTRL_TCINV_Pos                   _UINT16_(4)                                          /* (TC_EVCTRL) TC Event Input Polarity Position */
#define TC_EVCTRL_TCINV_Msk                   (_UINT16_(0x1) << TC_EVCTRL_TCINV_Pos)               /* (TC_EVCTRL) TC Event Input Polarity Mask */
#define TC_EVCTRL_TCINV(value)                (TC_EVCTRL_TCINV_Msk & (_UINT16_(value) << TC_EVCTRL_TCINV_Pos)) /* Assigment of value for TCINV in the TC_EVCTRL register */
#define TC_EVCTRL_TCEI_Pos                    _UINT16_(5)                                          /* (TC_EVCTRL) TC Event Enable Position */
#define TC_EVCTRL_TCEI_Msk                    (_UINT16_(0x1) << TC_EVCTRL_TCEI_Pos)                /* (TC_EVCTRL) TC Event Enable Mask */
#define TC_EVCTRL_TCEI(value)                 (TC_EVCTRL_TCEI_Msk & (_UINT16_(value) << TC_EVCTRL_TCEI_Pos)) /* Assigment of value for TCEI in the TC_EVCTRL register */
#define TC_EVCTRL_OVFEO_Pos                   _UINT16_(8)                                          /* (TC_EVCTRL) Event Output Enable Position */
#define TC_EVCTRL_OVFEO_Msk                   (_UINT16_(0x1) << TC_EVCTRL_OVFEO_Pos)               /* (TC_EVCTRL) Event Output Enable Mask */
#define TC_EVCTRL_OVFEO(value)                (TC_EVCTRL_OVFEO_Msk & (_UINT16_(value) << TC_EVCTRL_OVFEO_Pos)) /* Assigment of value for OVFEO in the TC_EVCTRL register */
#define TC_EVCTRL_MCEO0_Pos                   _UINT16_(12)                                         /* (TC_EVCTRL) MC Event Output Enable 0 Position */
#define TC_EVCTRL_MCEO0_Msk                   (_UINT16_(0x1) << TC_EVCTRL_MCEO0_Pos)               /* (TC_EVCTRL) MC Event Output Enable 0 Mask */
#define TC_EVCTRL_MCEO0(value)                (TC_EVCTRL_MCEO0_Msk & (_UINT16_(value) << TC_EVCTRL_MCEO0_Pos)) /* Assigment of value for MCEO0 in the TC_EVCTRL register */
#define TC_EVCTRL_MCEO1_Pos                   _UINT16_(13)                                         /* (TC_EVCTRL) MC Event Output Enable 1 Position */
#define TC_EVCTRL_MCEO1_Msk                   (_UINT16_(0x1) << TC_EVCTRL_MCEO1_Pos)               /* (TC_EVCTRL) MC Event Output Enable 1 Mask */
#define TC_EVCTRL_MCEO1(value)                (TC_EVCTRL_MCEO1_Msk & (_UINT16_(value) << TC_EVCTRL_MCEO1_Pos)) /* Assigment of value for MCEO1 in the TC_EVCTRL register */
#define TC_EVCTRL_Msk                         _UINT16_(0x3137)                                     /* (TC_EVCTRL) Register Mask  */

#define TC_EVCTRL_MCEO_Pos                    _UINT16_(12)                                         /* (TC_EVCTRL Position) MC Event Output Enable x */
#define TC_EVCTRL_MCEO_Msk                    (_UINT16_(0x3) << TC_EVCTRL_MCEO_Pos)                /* (TC_EVCTRL Mask) MCEO */
#define TC_EVCTRL_MCEO(value)                 (TC_EVCTRL_MCEO_Msk & (_UINT16_(value) << TC_EVCTRL_MCEO_Pos)) 

/* -------- TC_INTENCLR : (TC Offset: 0x08) (R/W 8) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  OVF:1;            /*!< bit:      0  OVF Interrupt Disable              */
    uint8_t  ERR:1;            /*!< bit:      1  ERR Interrupt Disable              */
    uint8_t  :2;               /*!< bit:  2.. 3  Reserved                           */
    uint8_t  MC0:1;            /*!< bit:      4  MC Interrupt Disable 0             */
    uint8_t  MC1:1;            /*!< bit:      5  MC Interrupt Disable 1             */
    uint8_t  :2;               /*!< bit:  6.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint8_t  :4;               /*!< bit:  0.. 3  Reserved                           */
    uint8_t  MC:2;             /*!< bit:  4.. 5  MC Interrupt Disable x             */
    uint8_t  :2;               /*!< bit:  6.. 7  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_INTENCLR_RESETVALUE                _UINT8_(0x00)                                        /*  (TC_INTENCLR) Interrupt Enable Clear  Reset Value */

#define TC_INTENCLR_OVF_Pos                   _UINT8_(0)                                           /* (TC_INTENCLR) OVF Interrupt Disable Position */
#define TC_INTENCLR_OVF_Msk                   (_UINT8_(0x1) << TC_INTENCLR_OVF_Pos)                /* (TC_INTENCLR) OVF Interrupt Disable Mask */
#define TC_INTENCLR_OVF(value)                (TC_INTENCLR_OVF_Msk & (_UINT8_(value) << TC_INTENCLR_OVF_Pos)) /* Assigment of value for OVF in the TC_INTENCLR register */
#define TC_INTENCLR_ERR_Pos                   _UINT8_(1)                                           /* (TC_INTENCLR) ERR Interrupt Disable Position */
#define TC_INTENCLR_ERR_Msk                   (_UINT8_(0x1) << TC_INTENCLR_ERR_Pos)                /* (TC_INTENCLR) ERR Interrupt Disable Mask */
#define TC_INTENCLR_ERR(value)                (TC_INTENCLR_ERR_Msk & (_UINT8_(value) << TC_INTENCLR_ERR_Pos)) /* Assigment of value for ERR in the TC_INTENCLR register */
#define TC_INTENCLR_MC0_Pos                   _UINT8_(4)                                           /* (TC_INTENCLR) MC Interrupt Disable 0 Position */
#define TC_INTENCLR_MC0_Msk                   (_UINT8_(0x1) << TC_INTENCLR_MC0_Pos)                /* (TC_INTENCLR) MC Interrupt Disable 0 Mask */
#define TC_INTENCLR_MC0(value)                (TC_INTENCLR_MC0_Msk & (_UINT8_(value) << TC_INTENCLR_MC0_Pos)) /* Assigment of value for MC0 in the TC_INTENCLR register */
#define TC_INTENCLR_MC1_Pos                   _UINT8_(5)                                           /* (TC_INTENCLR) MC Interrupt Disable 1 Position */
#define TC_INTENCLR_MC1_Msk                   (_UINT8_(0x1) << TC_INTENCLR_MC1_Pos)                /* (TC_INTENCLR) MC Interrupt Disable 1 Mask */
#define TC_INTENCLR_MC1(value)                (TC_INTENCLR_MC1_Msk & (_UINT8_(value) << TC_INTENCLR_MC1_Pos)) /* Assigment of value for MC1 in the TC_INTENCLR register */
#define TC_INTENCLR_Msk                       _UINT8_(0x33)                                        /* (TC_INTENCLR) Register Mask  */

#define TC_INTENCLR_MC_Pos                    _UINT8_(4)                                           /* (TC_INTENCLR Position) MC Interrupt Disable x */
#define TC_INTENCLR_MC_Msk                    (_UINT8_(0x3) << TC_INTENCLR_MC_Pos)                 /* (TC_INTENCLR Mask) MC */
#define TC_INTENCLR_MC(value)                 (TC_INTENCLR_MC_Msk & (_UINT8_(value) << TC_INTENCLR_MC_Pos)) 

/* -------- TC_INTENSET : (TC Offset: 0x09) (R/W 8) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  OVF:1;            /*!< bit:      0  OVF Interrupt Enable               */
    uint8_t  ERR:1;            /*!< bit:      1  ERR Interrupt Enable               */
    uint8_t  :2;               /*!< bit:  2.. 3  Reserved                           */
    uint8_t  MC0:1;            /*!< bit:      4  MC Interrupt Enable 0              */
    uint8_t  MC1:1;            /*!< bit:      5  MC Interrupt Enable 1              */
    uint8_t  :2;               /*!< bit:  6.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint8_t  :4;               /*!< bit:  0.. 3  Reserved                           */
    uint8_t  MC:2;             /*!< bit:  4.. 5  MC Interrupt Enable x              */
    uint8_t  :2;               /*!< bit:  6.. 7  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_INTENSET_RESETVALUE                _UINT8_(0x00)                                        /*  (TC_INTENSET) Interrupt Enable Set  Reset Value */

#define TC_INTENSET_OVF_Pos                   _UINT8_(0)                                           /* (TC_INTENSET) OVF Interrupt Enable Position */
#define TC_INTENSET_OVF_Msk                   (_UINT8_(0x1) << TC_INTENSET_OVF_Pos)                /* (TC_INTENSET) OVF Interrupt Enable Mask */
#define TC_INTENSET_OVF(value)                (TC_INTENSET_OVF_Msk & (_UINT8_(value) << TC_INTENSET_OVF_Pos)) /* Assigment of value for OVF in the TC_INTENSET register */
#define TC_INTENSET_ERR_Pos                   _UINT8_(1)                                           /* (TC_INTENSET) ERR Interrupt Enable Position */
#define TC_INTENSET_ERR_Msk                   (_UINT8_(0x1) << TC_INTENSET_ERR_Pos)                /* (TC_INTENSET) ERR Interrupt Enable Mask */
#define TC_INTENSET_ERR(value)                (TC_INTENSET_ERR_Msk & (_UINT8_(value) << TC_INTENSET_ERR_Pos)) /* Assigment of value for ERR in the TC_INTENSET register */
#define TC_INTENSET_MC0_Pos                   _UINT8_(4)                                           /* (TC_INTENSET) MC Interrupt Enable 0 Position */
#define TC_INTENSET_MC0_Msk                   (_UINT8_(0x1) << TC_INTENSET_MC0_Pos)                /* (TC_INTENSET) MC Interrupt Enable 0 Mask */
#define TC_INTENSET_MC0(value)                (TC_INTENSET_MC0_Msk & (_UINT8_(value) << TC_INTENSET_MC0_Pos)) /* Assigment of value for MC0 in the TC_INTENSET register */
#define TC_INTENSET_MC1_Pos                   _UINT8_(5)                                           /* (TC_INTENSET) MC Interrupt Enable 1 Position */
#define TC_INTENSET_MC1_Msk                   (_UINT8_(0x1) << TC_INTENSET_MC1_Pos)                /* (TC_INTENSET) MC Interrupt Enable 1 Mask */
#define TC_INTENSET_MC1(value)                (TC_INTENSET_MC1_Msk & (_UINT8_(value) << TC_INTENSET_MC1_Pos)) /* Assigment of value for MC1 in the TC_INTENSET register */
#define TC_INTENSET_Msk                       _UINT8_(0x33)                                        /* (TC_INTENSET) Register Mask  */

#define TC_INTENSET_MC_Pos                    _UINT8_(4)                                           /* (TC_INTENSET Position) MC Interrupt Enable x */
#define TC_INTENSET_MC_Msk                    (_UINT8_(0x3) << TC_INTENSET_MC_Pos)                 /* (TC_INTENSET Mask) MC */
#define TC_INTENSET_MC(value)                 (TC_INTENSET_MC_Msk & (_UINT8_(value) << TC_INTENSET_MC_Pos)) 

/* -------- TC_INTFLAG : (TC Offset: 0x0A) (R/W 8) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t  OVF:1;            /*!< bit:      0  OVF Interrupt Flag                 */
    __I uint8_t  ERR:1;            /*!< bit:      1  ERR Interrupt Flag                 */
    __I uint8_t  :2;               /*!< bit:  2.. 3  Reserved                           */
    __I uint8_t  MC0:1;            /*!< bit:      4  MC Interrupt Flag 0                */
    __I uint8_t  MC1:1;            /*!< bit:      5  MC Interrupt Flag 1                */
    __I uint8_t  :2;               /*!< bit:  6.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    __I uint8_t  :4;               /*!< bit:  0.. 3  Reserved                           */
    __I uint8_t  MC:2;             /*!< bit:  4.. 5  MC Interrupt Flag x                */
    __I uint8_t  :2;               /*!< bit:  6.. 7  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_INTFLAG_RESETVALUE                 _UINT8_(0x00)                                        /*  (TC_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define TC_INTFLAG_OVF_Pos                    _UINT8_(0)                                           /* (TC_INTFLAG) OVF Interrupt Flag Position */
#define TC_INTFLAG_OVF_Msk                    (_UINT8_(0x1) << TC_INTFLAG_OVF_Pos)                 /* (TC_INTFLAG) OVF Interrupt Flag Mask */
#define TC_INTFLAG_OVF(value)                 (TC_INTFLAG_OVF_Msk & (_UINT8_(value) << TC_INTFLAG_OVF_Pos)) /* Assigment of value for OVF in the TC_INTFLAG register */
#define TC_INTFLAG_ERR_Pos                    _UINT8_(1)                                           /* (TC_INTFLAG) ERR Interrupt Flag Position */
#define TC_INTFLAG_ERR_Msk                    (_UINT8_(0x1) << TC_INTFLAG_ERR_Pos)                 /* (TC_INTFLAG) ERR Interrupt Flag Mask */
#define TC_INTFLAG_ERR(value)                 (TC_INTFLAG_ERR_Msk & (_UINT8_(value) << TC_INTFLAG_ERR_Pos)) /* Assigment of value for ERR in the TC_INTFLAG register */
#define TC_INTFLAG_MC0_Pos                    _UINT8_(4)                                           /* (TC_INTFLAG) MC Interrupt Flag 0 Position */
#define TC_INTFLAG_MC0_Msk                    (_UINT8_(0x1) << TC_INTFLAG_MC0_Pos)                 /* (TC_INTFLAG) MC Interrupt Flag 0 Mask */
#define TC_INTFLAG_MC0(value)                 (TC_INTFLAG_MC0_Msk & (_UINT8_(value) << TC_INTFLAG_MC0_Pos)) /* Assigment of value for MC0 in the TC_INTFLAG register */
#define TC_INTFLAG_MC1_Pos                    _UINT8_(5)                                           /* (TC_INTFLAG) MC Interrupt Flag 1 Position */
#define TC_INTFLAG_MC1_Msk                    (_UINT8_(0x1) << TC_INTFLAG_MC1_Pos)                 /* (TC_INTFLAG) MC Interrupt Flag 1 Mask */
#define TC_INTFLAG_MC1(value)                 (TC_INTFLAG_MC1_Msk & (_UINT8_(value) << TC_INTFLAG_MC1_Pos)) /* Assigment of value for MC1 in the TC_INTFLAG register */
#define TC_INTFLAG_Msk                        _UINT8_(0x33)                                        /* (TC_INTFLAG) Register Mask  */

#define TC_INTFLAG_MC_Pos                     _UINT8_(4)                                           /* (TC_INTFLAG Position) MC Interrupt Flag x */
#define TC_INTFLAG_MC_Msk                     (_UINT8_(0x3) << TC_INTFLAG_MC_Pos)                  /* (TC_INTFLAG Mask) MC */
#define TC_INTFLAG_MC(value)                  (TC_INTFLAG_MC_Msk & (_UINT8_(value) << TC_INTFLAG_MC_Pos)) 

/* -------- TC_STATUS : (TC Offset: 0x0B) (R/W 8) Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  STOP:1;           /*!< bit:      0  Stop Status Flag                   */
    uint8_t  SLAVE:1;          /*!< bit:      1  Slave Status Flag                  */
    uint8_t  :1;               /*!< bit:      2  Reserved                           */
    uint8_t  PERBUFV:1;        /*!< bit:      3  Synchronization Busy Status        */
    uint8_t  CCBUFV0:1;        /*!< bit:      4  Compare channel buffer 0 valid     */
    uint8_t  CCBUFV1:1;        /*!< bit:      5  Compare channel buffer 1 valid     */
    uint8_t  :2;               /*!< bit:  6.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint8_t  :4;               /*!< bit:  0.. 3  Reserved                           */
    uint8_t  CCBUFV:2;         /*!< bit:  4.. 5  Compare channel buffer x valid     */
    uint8_t  :2;               /*!< bit:  6.. 7  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_STATUS_RESETVALUE                  _UINT8_(0x01)                                        /*  (TC_STATUS) Status  Reset Value */

#define TC_STATUS_STOP_Pos                    _UINT8_(0)                                           /* (TC_STATUS) Stop Status Flag Position */
#define TC_STATUS_STOP_Msk                    (_UINT8_(0x1) << TC_STATUS_STOP_Pos)                 /* (TC_STATUS) Stop Status Flag Mask */
#define TC_STATUS_STOP(value)                 (TC_STATUS_STOP_Msk & (_UINT8_(value) << TC_STATUS_STOP_Pos)) /* Assigment of value for STOP in the TC_STATUS register */
#define TC_STATUS_SLAVE_Pos                   _UINT8_(1)                                           /* (TC_STATUS) Slave Status Flag Position */
#define TC_STATUS_SLAVE_Msk                   (_UINT8_(0x1) << TC_STATUS_SLAVE_Pos)                /* (TC_STATUS) Slave Status Flag Mask */
#define TC_STATUS_SLAVE(value)                (TC_STATUS_SLAVE_Msk & (_UINT8_(value) << TC_STATUS_SLAVE_Pos)) /* Assigment of value for SLAVE in the TC_STATUS register */
#define TC_STATUS_PERBUFV_Pos                 _UINT8_(3)                                           /* (TC_STATUS) Synchronization Busy Status Position */
#define TC_STATUS_PERBUFV_Msk                 (_UINT8_(0x1) << TC_STATUS_PERBUFV_Pos)              /* (TC_STATUS) Synchronization Busy Status Mask */
#define TC_STATUS_PERBUFV(value)              (TC_STATUS_PERBUFV_Msk & (_UINT8_(value) << TC_STATUS_PERBUFV_Pos)) /* Assigment of value for PERBUFV in the TC_STATUS register */
#define TC_STATUS_CCBUFV0_Pos                 _UINT8_(4)                                           /* (TC_STATUS) Compare channel buffer 0 valid Position */
#define TC_STATUS_CCBUFV0_Msk                 (_UINT8_(0x1) << TC_STATUS_CCBUFV0_Pos)              /* (TC_STATUS) Compare channel buffer 0 valid Mask */
#define TC_STATUS_CCBUFV0(value)              (TC_STATUS_CCBUFV0_Msk & (_UINT8_(value) << TC_STATUS_CCBUFV0_Pos)) /* Assigment of value for CCBUFV0 in the TC_STATUS register */
#define TC_STATUS_CCBUFV1_Pos                 _UINT8_(5)                                           /* (TC_STATUS) Compare channel buffer 1 valid Position */
#define TC_STATUS_CCBUFV1_Msk                 (_UINT8_(0x1) << TC_STATUS_CCBUFV1_Pos)              /* (TC_STATUS) Compare channel buffer 1 valid Mask */
#define TC_STATUS_CCBUFV1(value)              (TC_STATUS_CCBUFV1_Msk & (_UINT8_(value) << TC_STATUS_CCBUFV1_Pos)) /* Assigment of value for CCBUFV1 in the TC_STATUS register */
#define TC_STATUS_Msk                         _UINT8_(0x3B)                                        /* (TC_STATUS) Register Mask  */

#define TC_STATUS_CCBUFV_Pos                  _UINT8_(4)                                           /* (TC_STATUS Position) Compare channel buffer x valid */
#define TC_STATUS_CCBUFV_Msk                  (_UINT8_(0x3) << TC_STATUS_CCBUFV_Pos)               /* (TC_STATUS Mask) CCBUFV */
#define TC_STATUS_CCBUFV(value)               (TC_STATUS_CCBUFV_Msk & (_UINT8_(value) << TC_STATUS_CCBUFV_Pos)) 

/* -------- TC_WAVE : (TC Offset: 0x0C) (R/W 8) Waveform Generation Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  WAVEGEN:2;        /*!< bit:  0.. 1  Waveform Generation Mode           */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_WAVE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_WAVE_RESETVALUE                    _UINT8_(0x00)                                        /*  (TC_WAVE) Waveform Generation Control  Reset Value */

#define TC_WAVE_WAVEGEN_Pos                   _UINT8_(0)                                           /* (TC_WAVE) Waveform Generation Mode Position */
#define TC_WAVE_WAVEGEN_Msk                   (_UINT8_(0x3) << TC_WAVE_WAVEGEN_Pos)                /* (TC_WAVE) Waveform Generation Mode Mask */
#define TC_WAVE_WAVEGEN(value)                (TC_WAVE_WAVEGEN_Msk & (_UINT8_(value) << TC_WAVE_WAVEGEN_Pos)) /* Assigment of value for WAVEGEN in the TC_WAVE register */
#define   TC_WAVE_WAVEGEN_NFRQ_Val            _UINT8_(0x0)                                         /* (TC_WAVE) Normal frequency  */
#define   TC_WAVE_WAVEGEN_MFRQ_Val            _UINT8_(0x1)                                         /* (TC_WAVE) Match frequency  */
#define   TC_WAVE_WAVEGEN_NPWM_Val            _UINT8_(0x2)                                         /* (TC_WAVE) Normal PWM  */
#define   TC_WAVE_WAVEGEN_MPWM_Val            _UINT8_(0x3)                                         /* (TC_WAVE) Match PWM  */
#define TC_WAVE_WAVEGEN_NFRQ                  (TC_WAVE_WAVEGEN_NFRQ_Val << TC_WAVE_WAVEGEN_Pos)    /* (TC_WAVE) Normal frequency Position  */
#define TC_WAVE_WAVEGEN_MFRQ                  (TC_WAVE_WAVEGEN_MFRQ_Val << TC_WAVE_WAVEGEN_Pos)    /* (TC_WAVE) Match frequency Position  */
#define TC_WAVE_WAVEGEN_NPWM                  (TC_WAVE_WAVEGEN_NPWM_Val << TC_WAVE_WAVEGEN_Pos)    /* (TC_WAVE) Normal PWM Position  */
#define TC_WAVE_WAVEGEN_MPWM                  (TC_WAVE_WAVEGEN_MPWM_Val << TC_WAVE_WAVEGEN_Pos)    /* (TC_WAVE) Match PWM Position  */
#define TC_WAVE_Msk                           _UINT8_(0x03)                                        /* (TC_WAVE) Register Mask  */


/* -------- TC_DRVCTRL : (TC Offset: 0x0D) (R/W 8) Control C -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  INVEN0:1;         /*!< bit:      0  Output Waveform Invert Enable 0    */
    uint8_t  INVEN1:1;         /*!< bit:      1  Output Waveform Invert Enable 1    */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint8_t  INVEN:2;          /*!< bit:  0.. 1  Output Waveform Invert Enable x    */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_DRVCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_DRVCTRL_RESETVALUE                 _UINT8_(0x00)                                        /*  (TC_DRVCTRL) Control C  Reset Value */

#define TC_DRVCTRL_INVEN0_Pos                 _UINT8_(0)                                           /* (TC_DRVCTRL) Output Waveform Invert Enable 0 Position */
#define TC_DRVCTRL_INVEN0_Msk                 (_UINT8_(0x1) << TC_DRVCTRL_INVEN0_Pos)              /* (TC_DRVCTRL) Output Waveform Invert Enable 0 Mask */
#define TC_DRVCTRL_INVEN0(value)              (TC_DRVCTRL_INVEN0_Msk & (_UINT8_(value) << TC_DRVCTRL_INVEN0_Pos)) /* Assigment of value for INVEN0 in the TC_DRVCTRL register */
#define TC_DRVCTRL_INVEN1_Pos                 _UINT8_(1)                                           /* (TC_DRVCTRL) Output Waveform Invert Enable 1 Position */
#define TC_DRVCTRL_INVEN1_Msk                 (_UINT8_(0x1) << TC_DRVCTRL_INVEN1_Pos)              /* (TC_DRVCTRL) Output Waveform Invert Enable 1 Mask */
#define TC_DRVCTRL_INVEN1(value)              (TC_DRVCTRL_INVEN1_Msk & (_UINT8_(value) << TC_DRVCTRL_INVEN1_Pos)) /* Assigment of value for INVEN1 in the TC_DRVCTRL register */
#define TC_DRVCTRL_Msk                        _UINT8_(0x03)                                        /* (TC_DRVCTRL) Register Mask  */

#define TC_DRVCTRL_INVEN_Pos                  _UINT8_(0)                                           /* (TC_DRVCTRL Position) Output Waveform Invert Enable x */
#define TC_DRVCTRL_INVEN_Msk                  (_UINT8_(0x3) << TC_DRVCTRL_INVEN_Pos)               /* (TC_DRVCTRL Mask) INVEN */
#define TC_DRVCTRL_INVEN(value)               (TC_DRVCTRL_INVEN_Msk & (_UINT8_(value) << TC_DRVCTRL_INVEN_Pos)) 

/* -------- TC_DBGCTRL : (TC Offset: 0x0F) (R/W 8) Debug Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DBGRUN:1;         /*!< bit:      0  Run During Debug                   */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_DBGCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_DBGCTRL_RESETVALUE                 _UINT8_(0x00)                                        /*  (TC_DBGCTRL) Debug Control  Reset Value */

#define TC_DBGCTRL_DBGRUN_Pos                 _UINT8_(0)                                           /* (TC_DBGCTRL) Run During Debug Position */
#define TC_DBGCTRL_DBGRUN_Msk                 (_UINT8_(0x1) << TC_DBGCTRL_DBGRUN_Pos)              /* (TC_DBGCTRL) Run During Debug Mask */
#define TC_DBGCTRL_DBGRUN(value)              (TC_DBGCTRL_DBGRUN_Msk & (_UINT8_(value) << TC_DBGCTRL_DBGRUN_Pos)) /* Assigment of value for DBGRUN in the TC_DBGCTRL register */
#define TC_DBGCTRL_Msk                        _UINT8_(0x01)                                        /* (TC_DBGCTRL) Register Mask  */


/* -------- TC_SYNCBUSY : (TC Offset: 0x10) ( R/ 32) Synchronization Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SWRST:1;          /*!< bit:      0  swrst                              */
    uint32_t ENABLE:1;         /*!< bit:      1  enable                             */
    uint32_t CTRLB:1;          /*!< bit:      2  CTRLB                              */
    uint32_t STATUS:1;         /*!< bit:      3  STATUS                             */
    uint32_t COUNT:1;          /*!< bit:      4  Counter                            */
    uint32_t PER:1;            /*!< bit:      5  Period                             */
    uint32_t CC0:1;            /*!< bit:      6  Compare Channel 0                  */
    uint32_t CC1:1;            /*!< bit:      7  Compare Channel 1                  */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint32_t :6;               /*!< bit:  0.. 5  Reserved                           */
    uint32_t CC:2;             /*!< bit:  6.. 7  Compare Channel x                  */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TC_SYNCBUSY_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_SYNCBUSY_RESETVALUE                _UINT32_(0x00)                                       /*  (TC_SYNCBUSY) Synchronization Status  Reset Value */

#define TC_SYNCBUSY_SWRST_Pos                 _UINT32_(0)                                          /* (TC_SYNCBUSY) swrst Position */
#define TC_SYNCBUSY_SWRST_Msk                 (_UINT32_(0x1) << TC_SYNCBUSY_SWRST_Pos)             /* (TC_SYNCBUSY) swrst Mask */
#define TC_SYNCBUSY_SWRST(value)              (TC_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << TC_SYNCBUSY_SWRST_Pos)) /* Assigment of value for SWRST in the TC_SYNCBUSY register */
#define TC_SYNCBUSY_ENABLE_Pos                _UINT32_(1)                                          /* (TC_SYNCBUSY) enable Position */
#define TC_SYNCBUSY_ENABLE_Msk                (_UINT32_(0x1) << TC_SYNCBUSY_ENABLE_Pos)            /* (TC_SYNCBUSY) enable Mask */
#define TC_SYNCBUSY_ENABLE(value)             (TC_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << TC_SYNCBUSY_ENABLE_Pos)) /* Assigment of value for ENABLE in the TC_SYNCBUSY register */
#define TC_SYNCBUSY_CTRLB_Pos                 _UINT32_(2)                                          /* (TC_SYNCBUSY) CTRLB Position */
#define TC_SYNCBUSY_CTRLB_Msk                 (_UINT32_(0x1) << TC_SYNCBUSY_CTRLB_Pos)             /* (TC_SYNCBUSY) CTRLB Mask */
#define TC_SYNCBUSY_CTRLB(value)              (TC_SYNCBUSY_CTRLB_Msk & (_UINT32_(value) << TC_SYNCBUSY_CTRLB_Pos)) /* Assigment of value for CTRLB in the TC_SYNCBUSY register */
#define TC_SYNCBUSY_STATUS_Pos                _UINT32_(3)                                          /* (TC_SYNCBUSY) STATUS Position */
#define TC_SYNCBUSY_STATUS_Msk                (_UINT32_(0x1) << TC_SYNCBUSY_STATUS_Pos)            /* (TC_SYNCBUSY) STATUS Mask */
#define TC_SYNCBUSY_STATUS(value)             (TC_SYNCBUSY_STATUS_Msk & (_UINT32_(value) << TC_SYNCBUSY_STATUS_Pos)) /* Assigment of value for STATUS in the TC_SYNCBUSY register */
#define TC_SYNCBUSY_COUNT_Pos                 _UINT32_(4)                                          /* (TC_SYNCBUSY) Counter Position */
#define TC_SYNCBUSY_COUNT_Msk                 (_UINT32_(0x1) << TC_SYNCBUSY_COUNT_Pos)             /* (TC_SYNCBUSY) Counter Mask */
#define TC_SYNCBUSY_COUNT(value)              (TC_SYNCBUSY_COUNT_Msk & (_UINT32_(value) << TC_SYNCBUSY_COUNT_Pos)) /* Assigment of value for COUNT in the TC_SYNCBUSY register */
#define TC_SYNCBUSY_PER_Pos                   _UINT32_(5)                                          /* (TC_SYNCBUSY) Period Position */
#define TC_SYNCBUSY_PER_Msk                   (_UINT32_(0x1) << TC_SYNCBUSY_PER_Pos)               /* (TC_SYNCBUSY) Period Mask */
#define TC_SYNCBUSY_PER(value)                (TC_SYNCBUSY_PER_Msk & (_UINT32_(value) << TC_SYNCBUSY_PER_Pos)) /* Assigment of value for PER in the TC_SYNCBUSY register */
#define TC_SYNCBUSY_CC0_Pos                   _UINT32_(6)                                          /* (TC_SYNCBUSY) Compare Channel 0 Position */
#define TC_SYNCBUSY_CC0_Msk                   (_UINT32_(0x1) << TC_SYNCBUSY_CC0_Pos)               /* (TC_SYNCBUSY) Compare Channel 0 Mask */
#define TC_SYNCBUSY_CC0(value)                (TC_SYNCBUSY_CC0_Msk & (_UINT32_(value) << TC_SYNCBUSY_CC0_Pos)) /* Assigment of value for CC0 in the TC_SYNCBUSY register */
#define TC_SYNCBUSY_CC1_Pos                   _UINT32_(7)                                          /* (TC_SYNCBUSY) Compare Channel 1 Position */
#define TC_SYNCBUSY_CC1_Msk                   (_UINT32_(0x1) << TC_SYNCBUSY_CC1_Pos)               /* (TC_SYNCBUSY) Compare Channel 1 Mask */
#define TC_SYNCBUSY_CC1(value)                (TC_SYNCBUSY_CC1_Msk & (_UINT32_(value) << TC_SYNCBUSY_CC1_Pos)) /* Assigment of value for CC1 in the TC_SYNCBUSY register */
#define TC_SYNCBUSY_Msk                       _UINT32_(0x000000FF)                                 /* (TC_SYNCBUSY) Register Mask  */

#define TC_SYNCBUSY_CC_Pos                    _UINT32_(6)                                          /* (TC_SYNCBUSY Position) Compare Channel x */
#define TC_SYNCBUSY_CC_Msk                    (_UINT32_(0x3) << TC_SYNCBUSY_CC_Pos)                /* (TC_SYNCBUSY Mask) CC */
#define TC_SYNCBUSY_CC(value)                 (TC_SYNCBUSY_CC_Msk & (_UINT32_(value) << TC_SYNCBUSY_CC_Pos)) 

/* -------- TC_COUNT8_COUNT : (TC Offset: 0x14) (R/W 8) COUNT8 Count -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  COUNT:8;          /*!< bit:  0.. 7  Counter Value                      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_COUNT8_COUNT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_COUNT8_COUNT_RESETVALUE            _UINT8_(0x00)                                        /*  (TC_COUNT8_COUNT) COUNT8 Count  Reset Value */

#define TC_COUNT8_COUNT_COUNT_Pos             _UINT8_(0)                                           /* (TC_COUNT8_COUNT) Counter Value Position */
#define TC_COUNT8_COUNT_COUNT_Msk             (_UINT8_(0xFF) << TC_COUNT8_COUNT_COUNT_Pos)         /* (TC_COUNT8_COUNT) Counter Value Mask */
#define TC_COUNT8_COUNT_COUNT(value)          (TC_COUNT8_COUNT_COUNT_Msk & (_UINT8_(value) << TC_COUNT8_COUNT_COUNT_Pos)) /* Assigment of value for COUNT in the TC_COUNT8_COUNT register */
#define TC_COUNT8_COUNT_Msk                   _UINT8_(0xFF)                                        /* (TC_COUNT8_COUNT) Register Mask  */


/* -------- TC_COUNT16_COUNT : (TC Offset: 0x14) (R/W 16) COUNT16 Count -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t COUNT:16;         /*!< bit:  0..15  Counter Value                      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} TC_COUNT16_COUNT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_COUNT16_COUNT_RESETVALUE           _UINT16_(0x00)                                       /*  (TC_COUNT16_COUNT) COUNT16 Count  Reset Value */

#define TC_COUNT16_COUNT_COUNT_Pos            _UINT16_(0)                                          /* (TC_COUNT16_COUNT) Counter Value Position */
#define TC_COUNT16_COUNT_COUNT_Msk            (_UINT16_(0xFFFF) << TC_COUNT16_COUNT_COUNT_Pos)     /* (TC_COUNT16_COUNT) Counter Value Mask */
#define TC_COUNT16_COUNT_COUNT(value)         (TC_COUNT16_COUNT_COUNT_Msk & (_UINT16_(value) << TC_COUNT16_COUNT_COUNT_Pos)) /* Assigment of value for COUNT in the TC_COUNT16_COUNT register */
#define TC_COUNT16_COUNT_Msk                  _UINT16_(0xFFFF)                                     /* (TC_COUNT16_COUNT) Register Mask  */


/* -------- TC_COUNT32_COUNT : (TC Offset: 0x14) (R/W 32) COUNT32 Count -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t COUNT:32;         /*!< bit:  0..31  Counter Value                      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TC_COUNT32_COUNT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_COUNT32_COUNT_RESETVALUE           _UINT32_(0x00)                                       /*  (TC_COUNT32_COUNT) COUNT32 Count  Reset Value */

#define TC_COUNT32_COUNT_COUNT_Pos            _UINT32_(0)                                          /* (TC_COUNT32_COUNT) Counter Value Position */
#define TC_COUNT32_COUNT_COUNT_Msk            (_UINT32_(0xFFFFFFFF) << TC_COUNT32_COUNT_COUNT_Pos) /* (TC_COUNT32_COUNT) Counter Value Mask */
#define TC_COUNT32_COUNT_COUNT(value)         (TC_COUNT32_COUNT_COUNT_Msk & (_UINT32_(value) << TC_COUNT32_COUNT_COUNT_Pos)) /* Assigment of value for COUNT in the TC_COUNT32_COUNT register */
#define TC_COUNT32_COUNT_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (TC_COUNT32_COUNT) Register Mask  */


/* -------- TC_COUNT8_PER : (TC Offset: 0x1B) (R/W 8) COUNT8 Period -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  PER:8;            /*!< bit:  0.. 7  Period Value                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_COUNT8_PER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_COUNT8_PER_RESETVALUE              _UINT8_(0xFF)                                        /*  (TC_COUNT8_PER) COUNT8 Period  Reset Value */

#define TC_COUNT8_PER_PER_Pos                 _UINT8_(0)                                           /* (TC_COUNT8_PER) Period Value Position */
#define TC_COUNT8_PER_PER_Msk                 (_UINT8_(0xFF) << TC_COUNT8_PER_PER_Pos)             /* (TC_COUNT8_PER) Period Value Mask */
#define TC_COUNT8_PER_PER(value)              (TC_COUNT8_PER_PER_Msk & (_UINT8_(value) << TC_COUNT8_PER_PER_Pos)) /* Assigment of value for PER in the TC_COUNT8_PER register */
#define TC_COUNT8_PER_Msk                     _UINT8_(0xFF)                                        /* (TC_COUNT8_PER) Register Mask  */


/* -------- TC_COUNT8_CC : (TC Offset: 0x1C) (R/W 8) COUNT8 Compare and Capture -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  CC:8;             /*!< bit:  0.. 7  Counter/Compare Value              */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_COUNT8_CC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_COUNT8_CC_RESETVALUE               _UINT8_(0x00)                                        /*  (TC_COUNT8_CC) COUNT8 Compare and Capture  Reset Value */

#define TC_COUNT8_CC_CC_Pos                   _UINT8_(0)                                           /* (TC_COUNT8_CC) Counter/Compare Value Position */
#define TC_COUNT8_CC_CC_Msk                   (_UINT8_(0xFF) << TC_COUNT8_CC_CC_Pos)               /* (TC_COUNT8_CC) Counter/Compare Value Mask */
#define TC_COUNT8_CC_CC(value)                (TC_COUNT8_CC_CC_Msk & (_UINT8_(value) << TC_COUNT8_CC_CC_Pos)) /* Assigment of value for CC in the TC_COUNT8_CC register */
#define TC_COUNT8_CC_Msk                      _UINT8_(0xFF)                                        /* (TC_COUNT8_CC) Register Mask  */


/* -------- TC_COUNT16_CC : (TC Offset: 0x1C) (R/W 16) COUNT16 Compare and Capture -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t CC:16;            /*!< bit:  0..15  Counter/Compare Value              */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} TC_COUNT16_CC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_COUNT16_CC_RESETVALUE              _UINT16_(0x00)                                       /*  (TC_COUNT16_CC) COUNT16 Compare and Capture  Reset Value */

#define TC_COUNT16_CC_CC_Pos                  _UINT16_(0)                                          /* (TC_COUNT16_CC) Counter/Compare Value Position */
#define TC_COUNT16_CC_CC_Msk                  (_UINT16_(0xFFFF) << TC_COUNT16_CC_CC_Pos)           /* (TC_COUNT16_CC) Counter/Compare Value Mask */
#define TC_COUNT16_CC_CC(value)               (TC_COUNT16_CC_CC_Msk & (_UINT16_(value) << TC_COUNT16_CC_CC_Pos)) /* Assigment of value for CC in the TC_COUNT16_CC register */
#define TC_COUNT16_CC_Msk                     _UINT16_(0xFFFF)                                     /* (TC_COUNT16_CC) Register Mask  */


/* -------- TC_COUNT32_CC : (TC Offset: 0x1C) (R/W 32) COUNT32 Compare and Capture -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CC:32;            /*!< bit:  0..31  Counter/Compare Value              */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TC_COUNT32_CC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_COUNT32_CC_RESETVALUE              _UINT32_(0x00)                                       /*  (TC_COUNT32_CC) COUNT32 Compare and Capture  Reset Value */

#define TC_COUNT32_CC_CC_Pos                  _UINT32_(0)                                          /* (TC_COUNT32_CC) Counter/Compare Value Position */
#define TC_COUNT32_CC_CC_Msk                  (_UINT32_(0xFFFFFFFF) << TC_COUNT32_CC_CC_Pos)       /* (TC_COUNT32_CC) Counter/Compare Value Mask */
#define TC_COUNT32_CC_CC(value)               (TC_COUNT32_CC_CC_Msk & (_UINT32_(value) << TC_COUNT32_CC_CC_Pos)) /* Assigment of value for CC in the TC_COUNT32_CC register */
#define TC_COUNT32_CC_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (TC_COUNT32_CC) Register Mask  */


/* -------- TC_COUNT8_PERBUF : (TC Offset: 0x2F) (R/W 8) COUNT8 Period Buffer -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  PERBUF:8;         /*!< bit:  0.. 7  Period Buffer Value                */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_COUNT8_PERBUF_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_COUNT8_PERBUF_RESETVALUE           _UINT8_(0xFF)                                        /*  (TC_COUNT8_PERBUF) COUNT8 Period Buffer  Reset Value */

#define TC_COUNT8_PERBUF_PERBUF_Pos           _UINT8_(0)                                           /* (TC_COUNT8_PERBUF) Period Buffer Value Position */
#define TC_COUNT8_PERBUF_PERBUF_Msk           (_UINT8_(0xFF) << TC_COUNT8_PERBUF_PERBUF_Pos)       /* (TC_COUNT8_PERBUF) Period Buffer Value Mask */
#define TC_COUNT8_PERBUF_PERBUF(value)        (TC_COUNT8_PERBUF_PERBUF_Msk & (_UINT8_(value) << TC_COUNT8_PERBUF_PERBUF_Pos)) /* Assigment of value for PERBUF in the TC_COUNT8_PERBUF register */
#define TC_COUNT8_PERBUF_Msk                  _UINT8_(0xFF)                                        /* (TC_COUNT8_PERBUF) Register Mask  */


/* -------- TC_COUNT8_CCBUF : (TC Offset: 0x30) (R/W 8) COUNT8 Compare and Capture Buffer -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  CCBUF:8;          /*!< bit:  0.. 7  Counter/Compare Buffer Value       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TC_COUNT8_CCBUF_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_COUNT8_CCBUF_RESETVALUE            _UINT8_(0x00)                                        /*  (TC_COUNT8_CCBUF) COUNT8 Compare and Capture Buffer  Reset Value */

#define TC_COUNT8_CCBUF_CCBUF_Pos             _UINT8_(0)                                           /* (TC_COUNT8_CCBUF) Counter/Compare Buffer Value Position */
#define TC_COUNT8_CCBUF_CCBUF_Msk             (_UINT8_(0xFF) << TC_COUNT8_CCBUF_CCBUF_Pos)         /* (TC_COUNT8_CCBUF) Counter/Compare Buffer Value Mask */
#define TC_COUNT8_CCBUF_CCBUF(value)          (TC_COUNT8_CCBUF_CCBUF_Msk & (_UINT8_(value) << TC_COUNT8_CCBUF_CCBUF_Pos)) /* Assigment of value for CCBUF in the TC_COUNT8_CCBUF register */
#define TC_COUNT8_CCBUF_Msk                   _UINT8_(0xFF)                                        /* (TC_COUNT8_CCBUF) Register Mask  */


/* -------- TC_COUNT16_CCBUF : (TC Offset: 0x30) (R/W 16) COUNT16 Compare and Capture Buffer -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t CCBUF:16;         /*!< bit:  0..15  Counter/Compare Buffer Value       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} TC_COUNT16_CCBUF_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_COUNT16_CCBUF_RESETVALUE           _UINT16_(0x00)                                       /*  (TC_COUNT16_CCBUF) COUNT16 Compare and Capture Buffer  Reset Value */

#define TC_COUNT16_CCBUF_CCBUF_Pos            _UINT16_(0)                                          /* (TC_COUNT16_CCBUF) Counter/Compare Buffer Value Position */
#define TC_COUNT16_CCBUF_CCBUF_Msk            (_UINT16_(0xFFFF) << TC_COUNT16_CCBUF_CCBUF_Pos)     /* (TC_COUNT16_CCBUF) Counter/Compare Buffer Value Mask */
#define TC_COUNT16_CCBUF_CCBUF(value)         (TC_COUNT16_CCBUF_CCBUF_Msk & (_UINT16_(value) << TC_COUNT16_CCBUF_CCBUF_Pos)) /* Assigment of value for CCBUF in the TC_COUNT16_CCBUF register */
#define TC_COUNT16_CCBUF_Msk                  _UINT16_(0xFFFF)                                     /* (TC_COUNT16_CCBUF) Register Mask  */


/* -------- TC_COUNT32_CCBUF : (TC Offset: 0x30) (R/W 32) COUNT32 Compare and Capture Buffer -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CCBUF:32;         /*!< bit:  0..31  Counter/Compare Buffer Value       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TC_COUNT32_CCBUF_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TC_COUNT32_CCBUF_RESETVALUE           _UINT32_(0x00)                                       /*  (TC_COUNT32_CCBUF) COUNT32 Compare and Capture Buffer  Reset Value */

#define TC_COUNT32_CCBUF_CCBUF_Pos            _UINT32_(0)                                          /* (TC_COUNT32_CCBUF) Counter/Compare Buffer Value Position */
#define TC_COUNT32_CCBUF_CCBUF_Msk            (_UINT32_(0xFFFFFFFF) << TC_COUNT32_CCBUF_CCBUF_Pos) /* (TC_COUNT32_CCBUF) Counter/Compare Buffer Value Mask */
#define TC_COUNT32_CCBUF_CCBUF(value)         (TC_COUNT32_CCBUF_CCBUF_Msk & (_UINT32_(value) << TC_COUNT32_CCBUF_CCBUF_Pos)) /* Assigment of value for CCBUF in the TC_COUNT32_CCBUF register */
#define TC_COUNT32_CCBUF_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (TC_COUNT32_CCBUF) Register Mask  */

/** \brief TC_COUNT8 hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct { /* 8-bit Counter Mode */
  __IO TC_CTRLA_Type             CTRLA;       /**< \brief Offset: 0x00 (R/W 32) Control A */
  __IO TC_CTRLBCLR_Type          CTRLBCLR;    /**< \brief Offset: 0x04 (R/W  8) Control B Clear */
  __IO TC_CTRLBSET_Type          CTRLBSET;    /**< \brief Offset: 0x05 (R/W  8) Control B Set */
  __IO TC_EVCTRL_Type            EVCTRL;      /**< \brief Offset: 0x06 (R/W 16) Event Control */
  __IO TC_INTENCLR_Type          INTENCLR;    /**< \brief Offset: 0x08 (R/W  8) Interrupt Enable Clear */
  __IO TC_INTENSET_Type          INTENSET;    /**< \brief Offset: 0x09 (R/W  8) Interrupt Enable Set */
  __IO TC_INTFLAG_Type           INTFLAG;     /**< \brief Offset: 0x0A (R/W  8) Interrupt Flag Status and Clear */
  __IO TC_STATUS_Type            STATUS;      /**< \brief Offset: 0x0B (R/W  8) Status */
  __IO TC_WAVE_Type              WAVE;        /**< \brief Offset: 0x0C (R/W  8) Waveform Generation Control */
  __IO TC_DRVCTRL_Type           DRVCTRL;     /**< \brief Offset: 0x0D (R/W  8) Control C */
       RoReg8                    Reserved1[0x1];
  __IO TC_DBGCTRL_Type           DBGCTRL;     /**< \brief Offset: 0x0F (R/W  8) Debug Control */
  __I  TC_SYNCBUSY_Type          SYNCBUSY;    /**< \brief Offset: 0x10 (R/  32) Synchronization Status */
  __IO TC_COUNT8_COUNT_Type      COUNT;       /**< \brief Offset: 0x14 (R/W  8) COUNT8 Count */
       RoReg8                    Reserved2[0x6];
  __IO TC_COUNT8_PER_Type        PER;         /**< \brief Offset: 0x1B (R/W  8) COUNT8 Period */
  __IO TC_COUNT8_CC_Type         CC[2];       /**< \brief Offset: 0x1C (R/W  8) COUNT8 Compare and Capture */
       RoReg8                    Reserved3[0x11];
  __IO TC_COUNT8_PERBUF_Type     PERBUF;      /**< \brief Offset: 0x2F (R/W  8) COUNT8 Period Buffer */
  __IO TC_COUNT8_CCBUF_Type      CCBUF[2];    /**< \brief Offset: 0x30 (R/W  8) COUNT8 Compare and Capture Buffer */
} TcCount8;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief TC_COUNT16 hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct { /* 16-bit Counter Mode */
  __IO TC_CTRLA_Type             CTRLA;       /**< \brief Offset: 0x00 (R/W 32) Control A */
  __IO TC_CTRLBCLR_Type          CTRLBCLR;    /**< \brief Offset: 0x04 (R/W  8) Control B Clear */
  __IO TC_CTRLBSET_Type          CTRLBSET;    /**< \brief Offset: 0x05 (R/W  8) Control B Set */
  __IO TC_EVCTRL_Type            EVCTRL;      /**< \brief Offset: 0x06 (R/W 16) Event Control */
  __IO TC_INTENCLR_Type          INTENCLR;    /**< \brief Offset: 0x08 (R/W  8) Interrupt Enable Clear */
  __IO TC_INTENSET_Type          INTENSET;    /**< \brief Offset: 0x09 (R/W  8) Interrupt Enable Set */
  __IO TC_INTFLAG_Type           INTFLAG;     /**< \brief Offset: 0x0A (R/W  8) Interrupt Flag Status and Clear */
  __IO TC_STATUS_Type            STATUS;      /**< \brief Offset: 0x0B (R/W  8) Status */
  __IO TC_WAVE_Type              WAVE;        /**< \brief Offset: 0x0C (R/W  8) Waveform Generation Control */
  __IO TC_DRVCTRL_Type           DRVCTRL;     /**< \brief Offset: 0x0D (R/W  8) Control C */
       RoReg8                    Reserved1[0x1];
  __IO TC_DBGCTRL_Type           DBGCTRL;     /**< \brief Offset: 0x0F (R/W  8) Debug Control */
  __I  TC_SYNCBUSY_Type          SYNCBUSY;    /**< \brief Offset: 0x10 (R/  32) Synchronization Status */
  __IO TC_COUNT16_COUNT_Type     COUNT;       /**< \brief Offset: 0x14 (R/W 16) COUNT16 Count */
       RoReg8                    Reserved2[0x6];
  __IO TC_COUNT16_CC_Type        CC[2];       /**< \brief Offset: 0x1C (R/W 16) COUNT16 Compare and Capture */
       RoReg8                    Reserved3[0x10];
  __IO TC_COUNT16_CCBUF_Type     CCBUF[2];    /**< \brief Offset: 0x30 (R/W 16) COUNT16 Compare and Capture Buffer */
} TcCount16;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief TC_COUNT32 hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct { /* 32-bit Counter Mode */
  __IO TC_CTRLA_Type             CTRLA;       /**< \brief Offset: 0x00 (R/W 32) Control A */
  __IO TC_CTRLBCLR_Type          CTRLBCLR;    /**< \brief Offset: 0x04 (R/W  8) Control B Clear */
  __IO TC_CTRLBSET_Type          CTRLBSET;    /**< \brief Offset: 0x05 (R/W  8) Control B Set */
  __IO TC_EVCTRL_Type            EVCTRL;      /**< \brief Offset: 0x06 (R/W 16) Event Control */
  __IO TC_INTENCLR_Type          INTENCLR;    /**< \brief Offset: 0x08 (R/W  8) Interrupt Enable Clear */
  __IO TC_INTENSET_Type          INTENSET;    /**< \brief Offset: 0x09 (R/W  8) Interrupt Enable Set */
  __IO TC_INTFLAG_Type           INTFLAG;     /**< \brief Offset: 0x0A (R/W  8) Interrupt Flag Status and Clear */
  __IO TC_STATUS_Type            STATUS;      /**< \brief Offset: 0x0B (R/W  8) Status */
  __IO TC_WAVE_Type              WAVE;        /**< \brief Offset: 0x0C (R/W  8) Waveform Generation Control */
  __IO TC_DRVCTRL_Type           DRVCTRL;     /**< \brief Offset: 0x0D (R/W  8) Control C */
       RoReg8                    Reserved1[0x1];
  __IO TC_DBGCTRL_Type           DBGCTRL;     /**< \brief Offset: 0x0F (R/W  8) Debug Control */
  __I  TC_SYNCBUSY_Type          SYNCBUSY;    /**< \brief Offset: 0x10 (R/  32) Synchronization Status */
  __IO TC_COUNT32_COUNT_Type     COUNT;       /**< \brief Offset: 0x14 (R/W 32) COUNT32 Count */
       RoReg8                    Reserved2[0x4];
  __IO TC_COUNT32_CC_Type        CC[2];       /**< \brief Offset: 0x1C (R/W 32) COUNT32 Compare and Capture */
       RoReg8                    Reserved3[0xC];
  __IO TC_COUNT32_CCBUF_Type     CCBUF[2];    /**< \brief Offset: 0x30 (R/W 32) COUNT32 Compare and Capture Buffer */
} TcCount32;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
       TcCount8                  COUNT8;      /**< \brief Offset: 0x00 8-bit Counter Mode */
       TcCount16                 COUNT16;     /**< \brief Offset: 0x00 16-bit Counter Mode */
       TcCount32                 COUNT32;     /**< \brief Offset: 0x00 32-bit Counter Mode */
} Tc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */



/** \brief TC register offsets definitions */
#define TC_CTRLA_REG_OFST              _UINT32_(0x00)      /* (TC_CTRLA) Control A Offset */
#define TC_CTRLBCLR_REG_OFST           _UINT32_(0x04)      /* (TC_CTRLBCLR) Control B Clear Offset */
#define TC_CTRLBSET_REG_OFST           _UINT32_(0x05)      /* (TC_CTRLBSET) Control B Set Offset */
#define TC_EVCTRL_REG_OFST             _UINT32_(0x06)      /* (TC_EVCTRL) Event Control Offset */
#define TC_INTENCLR_REG_OFST           _UINT32_(0x08)      /* (TC_INTENCLR) Interrupt Enable Clear Offset */
#define TC_INTENSET_REG_OFST           _UINT32_(0x09)      /* (TC_INTENSET) Interrupt Enable Set Offset */
#define TC_INTFLAG_REG_OFST            _UINT32_(0x0A)      /* (TC_INTFLAG) Interrupt Flag Status and Clear Offset */
#define TC_STATUS_REG_OFST             _UINT32_(0x0B)      /* (TC_STATUS) Status Offset */
#define TC_WAVE_REG_OFST               _UINT32_(0x0C)      /* (TC_WAVE) Waveform Generation Control Offset */
#define TC_DRVCTRL_REG_OFST            _UINT32_(0x0D)      /* (TC_DRVCTRL) Control C Offset */
#define TC_DBGCTRL_REG_OFST            _UINT32_(0x0F)      /* (TC_DBGCTRL) Debug Control Offset */
#define TC_SYNCBUSY_REG_OFST           _UINT32_(0x10)      /* (TC_SYNCBUSY) Synchronization Status Offset */
#define TC_COUNT8_COUNT_REG_OFST       _UINT32_(0x14)      /* (TC_COUNT8_COUNT) COUNT8 Count Offset */
#define TC_COUNT16_COUNT_REG_OFST      _UINT32_(0x14)      /* (TC_COUNT16_COUNT) COUNT16 Count Offset */
#define TC_COUNT32_COUNT_REG_OFST      _UINT32_(0x14)      /* (TC_COUNT32_COUNT) COUNT32 Count Offset */
#define TC_COUNT8_PER_REG_OFST         _UINT32_(0x1B)      /* (TC_COUNT8_PER) COUNT8 Period Offset */
#define TC_COUNT8_CC_REG_OFST          _UINT32_(0x1C)      /* (TC_COUNT8_CC) COUNT8 Compare and Capture Offset */
#define TC_COUNT8_CC0_REG_OFST         _UINT32_(0x1C)      /* (TC_COUNT8_CC0) COUNT8 Compare and Capture Offset */
#define TC_COUNT8_CC1_REG_OFST         _UINT32_(0x1D)      /* (TC_COUNT8_CC1) COUNT8 Compare and Capture Offset */
#define TC_COUNT16_CC_REG_OFST         _UINT32_(0x1C)      /* (TC_COUNT16_CC) COUNT16 Compare and Capture Offset */
#define TC_COUNT16_CC0_REG_OFST        _UINT32_(0x1C)      /* (TC_COUNT16_CC0) COUNT16 Compare and Capture Offset */
#define TC_COUNT16_CC1_REG_OFST        _UINT32_(0x1E)      /* (TC_COUNT16_CC1) COUNT16 Compare and Capture Offset */
#define TC_COUNT32_CC_REG_OFST         _UINT32_(0x1C)      /* (TC_COUNT32_CC) COUNT32 Compare and Capture Offset */
#define TC_COUNT32_CC0_REG_OFST        _UINT32_(0x1C)      /* (TC_COUNT32_CC0) COUNT32 Compare and Capture Offset */
#define TC_COUNT32_CC1_REG_OFST        _UINT32_(0x20)      /* (TC_COUNT32_CC1) COUNT32 Compare and Capture Offset */
#define TC_COUNT8_PERBUF_REG_OFST      _UINT32_(0x2F)      /* (TC_COUNT8_PERBUF) COUNT8 Period Buffer Offset */
#define TC_COUNT8_CCBUF_REG_OFST       _UINT32_(0x30)      /* (TC_COUNT8_CCBUF) COUNT8 Compare and Capture Buffer Offset */
#define TC_COUNT8_CCBUF0_REG_OFST      _UINT32_(0x30)      /* (TC_COUNT8_CCBUF0) COUNT8 Compare and Capture Buffer Offset */
#define TC_COUNT8_CCBUF1_REG_OFST      _UINT32_(0x31)      /* (TC_COUNT8_CCBUF1) COUNT8 Compare and Capture Buffer Offset */
#define TC_COUNT16_CCBUF_REG_OFST      _UINT32_(0x30)      /* (TC_COUNT16_CCBUF) COUNT16 Compare and Capture Buffer Offset */
#define TC_COUNT16_CCBUF0_REG_OFST     _UINT32_(0x30)      /* (TC_COUNT16_CCBUF0) COUNT16 Compare and Capture Buffer Offset */
#define TC_COUNT16_CCBUF1_REG_OFST     _UINT32_(0x32)      /* (TC_COUNT16_CCBUF1) COUNT16 Compare and Capture Buffer Offset */
#define TC_COUNT32_CCBUF_REG_OFST      _UINT32_(0x30)      /* (TC_COUNT32_CCBUF) COUNT32 Compare and Capture Buffer Offset */
#define TC_COUNT32_CCBUF0_REG_OFST     _UINT32_(0x30)      /* (TC_COUNT32_CCBUF0) COUNT32 Compare and Capture Buffer Offset */
#define TC_COUNT32_CCBUF1_REG_OFST     _UINT32_(0x34)      /* (TC_COUNT32_CCBUF1) COUNT32 Compare and Capture Buffer Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief TC register API structure */
typedef struct
{  /* Basic Timer Counter */
  __IO  uint32_t                       TC_CTRLA;           /**< Offset: 0x00 (R/W  32) Control A */
  __IO  uint8_t                        TC_CTRLBCLR;        /**< Offset: 0x04 (R/W  8) Control B Clear */
  __IO  uint8_t                        TC_CTRLBSET;        /**< Offset: 0x05 (R/W  8) Control B Set */
  __IO  uint16_t                       TC_EVCTRL;          /**< Offset: 0x06 (R/W  16) Event Control */
  __IO  uint8_t                        TC_INTENCLR;        /**< Offset: 0x08 (R/W  8) Interrupt Enable Clear */
  __IO  uint8_t                        TC_INTENSET;        /**< Offset: 0x09 (R/W  8) Interrupt Enable Set */
  __IO  uint8_t                        TC_INTFLAG;         /**< Offset: 0x0A (R/W  8) Interrupt Flag Status and Clear */
  __IO  uint8_t                        TC_STATUS;          /**< Offset: 0x0B (R/W  8) Status */
  __IO  uint8_t                        TC_WAVE;            /**< Offset: 0x0C (R/W  8) Waveform Generation Control */
  __IO  uint8_t                        TC_DRVCTRL;         /**< Offset: 0x0D (R/W  8) Control C */
  __I   uint8_t                        Reserved1[0x01];
  __IO  uint8_t                        TC_DBGCTRL;         /**< Offset: 0x0F (R/W  8) Debug Control */
  __I   uint32_t                       TC_SYNCBUSY;        /**< Offset: 0x10 (R/   32) Synchronization Status */
  __IO  uint8_t                        TC_COUNT;           /**< Offset: 0x14 (R/W  8) COUNT8 Count */
  __I   uint8_t                        Reserved2[0x06];
  __IO  uint8_t                        TC_PER;             /**< Offset: 0x1B (R/W  8) COUNT8 Period */
  __IO  uint8_t                        TC_CC[2];           /**< Offset: 0x1C (R/W  8) COUNT8 Compare and Capture */
  __I   uint8_t                        Reserved3[0x11];
  __IO  uint8_t                        TC_PERBUF;          /**< Offset: 0x2F (R/W  8) COUNT8 Period Buffer */
  __IO  uint8_t                        TC_CCBUF[2];        /**< Offset: 0x30 (R/W  8) COUNT8 Compare and Capture Buffer */
} tc_count8_registers_t;

/** \brief TC register API structure */
typedef struct
{  /* Basic Timer Counter */
  __IO  uint32_t                       TC_CTRLA;           /**< Offset: 0x00 (R/W  32) Control A */
  __IO  uint8_t                        TC_CTRLBCLR;        /**< Offset: 0x04 (R/W  8) Control B Clear */
  __IO  uint8_t                        TC_CTRLBSET;        /**< Offset: 0x05 (R/W  8) Control B Set */
  __IO  uint16_t                       TC_EVCTRL;          /**< Offset: 0x06 (R/W  16) Event Control */
  __IO  uint8_t                        TC_INTENCLR;        /**< Offset: 0x08 (R/W  8) Interrupt Enable Clear */
  __IO  uint8_t                        TC_INTENSET;        /**< Offset: 0x09 (R/W  8) Interrupt Enable Set */
  __IO  uint8_t                        TC_INTFLAG;         /**< Offset: 0x0A (R/W  8) Interrupt Flag Status and Clear */
  __IO  uint8_t                        TC_STATUS;          /**< Offset: 0x0B (R/W  8) Status */
  __IO  uint8_t                        TC_WAVE;            /**< Offset: 0x0C (R/W  8) Waveform Generation Control */
  __IO  uint8_t                        TC_DRVCTRL;         /**< Offset: 0x0D (R/W  8) Control C */
  __I   uint8_t                        Reserved1[0x01];
  __IO  uint8_t                        TC_DBGCTRL;         /**< Offset: 0x0F (R/W  8) Debug Control */
  __I   uint32_t                       TC_SYNCBUSY;        /**< Offset: 0x10 (R/   32) Synchronization Status */
  __IO  uint16_t                       TC_COUNT;           /**< Offset: 0x14 (R/W  16) COUNT16 Count */
  __I   uint8_t                        Reserved2[0x06];
  __IO  uint16_t                       TC_CC[2];           /**< Offset: 0x1C (R/W  16) COUNT16 Compare and Capture */
  __I   uint8_t                        Reserved3[0x10];
  __IO  uint16_t                       TC_CCBUF[2];        /**< Offset: 0x30 (R/W  16) COUNT16 Compare and Capture Buffer */
} tc_count16_registers_t;

/** \brief TC register API structure */
typedef struct
{  /* Basic Timer Counter */
  __IO  uint32_t                       TC_CTRLA;           /**< Offset: 0x00 (R/W  32) Control A */
  __IO  uint8_t                        TC_CTRLBCLR;        /**< Offset: 0x04 (R/W  8) Control B Clear */
  __IO  uint8_t                        TC_CTRLBSET;        /**< Offset: 0x05 (R/W  8) Control B Set */
  __IO  uint16_t                       TC_EVCTRL;          /**< Offset: 0x06 (R/W  16) Event Control */
  __IO  uint8_t                        TC_INTENCLR;        /**< Offset: 0x08 (R/W  8) Interrupt Enable Clear */
  __IO  uint8_t                        TC_INTENSET;        /**< Offset: 0x09 (R/W  8) Interrupt Enable Set */
  __IO  uint8_t                        TC_INTFLAG;         /**< Offset: 0x0A (R/W  8) Interrupt Flag Status and Clear */
  __IO  uint8_t                        TC_STATUS;          /**< Offset: 0x0B (R/W  8) Status */
  __IO  uint8_t                        TC_WAVE;            /**< Offset: 0x0C (R/W  8) Waveform Generation Control */
  __IO  uint8_t                        TC_DRVCTRL;         /**< Offset: 0x0D (R/W  8) Control C */
  __I   uint8_t                        Reserved1[0x01];
  __IO  uint8_t                        TC_DBGCTRL;         /**< Offset: 0x0F (R/W  8) Debug Control */
  __I   uint32_t                       TC_SYNCBUSY;        /**< Offset: 0x10 (R/   32) Synchronization Status */
  __IO  uint32_t                       TC_COUNT;           /**< Offset: 0x14 (R/W  32) COUNT32 Count */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       TC_CC[2];           /**< Offset: 0x1C (R/W  32) COUNT32 Compare and Capture */
  __I   uint8_t                        Reserved3[0x0C];
  __IO  uint32_t                       TC_CCBUF[2];        /**< Offset: 0x30 (R/W  32) COUNT32 Compare and Capture Buffer */
} tc_count32_registers_t;

/** \brief TC hardware registers */
typedef union
{  /* Basic Timer Counter */
       tc_count8_registers_t          COUNT8;         /**< 8-bit Counter Mode */
       tc_count16_registers_t         COUNT16;        /**< 16-bit Counter Mode */
       tc_count32_registers_t         COUNT32;        /**< 32-bit Counter Mode */
} tc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXSG41_TC_COMPONENT_H_ */
