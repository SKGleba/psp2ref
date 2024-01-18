#ifndef __REF_UART_H__
#define __REF_UART_H__

#include "types.h"
#include "paddr.h"

#define UART_REGS(i)			((void *)(UART0_OFFSET + (i) * UART0_SIZE))

enum UART_BAUD_TO_CLKGEN {
    UART_BAUD_115200 = 0x1001A,
    UART_BAUD_38400 = 0x1004E,
};

#endif