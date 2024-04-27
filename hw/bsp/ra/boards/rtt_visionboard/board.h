/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2023 Ha Thach (tinyusb.org)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * This file is part of the TinyUSB stack.
 */

#ifndef _BOARD_H_
#define _BOARD_H_

#ifdef __cplusplus
extern "C" {
#endif

#define LED1                  BSP_IO_PORT_01_PIN_02
#define LED_STATE_ON          0

#define SW1                   BSP_IO_PORT_09_PIN_07
#define BUTTON_STATE_ACTIVE   0

#define USB_CH_SEL            BSP_IO_PORT_10_PIN_13
#define USB_HS_SEL            1
#define USB_FS_SEL            0

static const ioport_pin_cfg_t board_pin_cfg[] = {
    { .pin = LED1, .pin_cfg = IOPORT_CFG_PORT_DIRECTION_OUTPUT | IOPORT_CFG_PORT_OUTPUT_HIGH },
    { .pin = SW1, .pin_cfg = IOPORT_CFG_PORT_DIRECTION_INPUT },

    // default Device High speed
    // { .pin = USB_CH_SEL, .pin_cfg = IOPORT_CFG_PORT_DIRECTION_OUTPUT | IOPORT_CFG_PORT_OUTPUT_HIGH },
    // default Device Full speed
    { .pin = USB_CH_SEL, .pin_cfg = IOPORT_CFG_PORT_DIRECTION_OUTPUT | IOPORT_CFG_PORT_OUTPUT_LOW },

    // USB FS
    { .pin = BSP_IO_PORT_04_PIN_07, .pin_cfg = IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_USB_FS | IOPORT_CFG_DRIVE_MID},
    { .pin = BSP_IO_PORT_08_PIN_14, .pin_cfg = IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_USB_FS },
    { .pin = BSP_IO_PORT_08_PIN_15, .pin_cfg = IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_USB_FS },

    // USB HS
    { .pin = BSP_IO_PORT_11_PIN_01, .pin_cfg = IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_USB_HS },

};

#ifdef __cplusplus
}
#endif

#endif
