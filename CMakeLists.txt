add_subdirectory_ifdef(CONFIG_HAS_MEC_HAL mec)
add_subdirectory_ifdef(CONFIG_HAS_MPFS_HAL mpfs)
zephyr_include_directories_ifdef(CONFIG_MPLABX include)
add_subdirectory(mplabx)
add_subdirectory_ifdef(CONFIG_HAS_MEC5_HAL mec5)
