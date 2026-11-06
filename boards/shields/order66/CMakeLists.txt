# Copyright (c) 2026 The ZMK Contributors
# SPDX-License-Identifier: MIT

if(CONFIG_ZMK_DISPLAY)
  zephyr_library_include_directories(${CMAKE_SOURCE_DIR}/include)
  zephyr_library_sources(widgets/order66_custom_status_screen.c)
  zephyr_library_sources(widgets/order66_bolt.c)
  zephyr_library_sources(widgets/order66_util.c)
  zephyr_library_sources(widgets/order66_status.c)
endif()
