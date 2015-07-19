/*
 * Copyright (C) 2015 Gan Quan <coin2028@hotmail.com>
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 *
 */

#ifndef _DRIVERS_SERIAL_UART_H
#define _DRIVERS_SERIAL_UART_H

#include <config.h>
#include <sys/types.h>

#ifdef UART16550
#include <drivers/serial/uart16550.h>
#endif

#ifdef UART_XILINX
#include <drivers/serial/uart-xilinx.h>
#endif

void uart_spin_puts(const char *str);
ssize_t uart_spin_printf(const char *fmt, ...);

#endif