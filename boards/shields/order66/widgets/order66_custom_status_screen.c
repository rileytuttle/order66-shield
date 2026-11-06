/*
 *
 * Copyright (c) 2026 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 * Vendored from zmk/app/boards/shields/nice_view/custom_status_screen.c. The
 * upstream file gates everything on CONFIG_NICE_VIEW_WIDGET_STATUS, which we
 * keep off (see order66.conf) so nice_view's own copy of these files doesn't
 * also get built -- our copy doesn't need that guard, it's the only one that
 * ever compiles.
 */

#include "order66_status.h"

static struct zmk_widget_status status_widget;

lv_obj_t *zmk_display_status_screen() {
    lv_obj_t *screen = lv_obj_create(NULL);

    zmk_widget_status_init(&status_widget, screen);
    lv_obj_align(zmk_widget_status_obj(&status_widget), LV_ALIGN_TOP_LEFT, 0, 0);

    return screen;
}
