#ifndef __REF_SPI_H__
#define __REF_SPI_H__

#include "ref_paddr.h"

#define SPI_REGS(i)	((void *)(SPI0_OFFSET + (i) * SPI0_SIZE))

#define SPI_ERNIE_BUS 0

#endif