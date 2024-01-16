#ifndef __REF_I2C_H__
#define __REF_I2C_H__

#include "ref_types.h"
#include "ref_paddr.h"

#define I2C_REGS(i)     ((void *)((i) ? I2C1_OFFSET : I2C0_OFFSET))


#endif