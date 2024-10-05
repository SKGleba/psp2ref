#ifndef __REF_REGBUS_H__
#define __REF_REGBUS_H__

#include "types.h"
#include "paddr.h"

#define REGBUS_REG(i) (REGBUS_OFFSET + (i * sizeof(uint32_t)))

enum REGBUS_REGS {
    REGBUS_AGX_SRAM_ACL = 1, // set bits to allow device access to Allegrex SRAM
};

enum REGBUS_AGX_SRAM_ACL_DEV {
    REGBUS_AGX_SRAM_ACL_DEV_F00D = 0b100,
    REGBUS_AGX_SRAM_ACL_DEV_ARM = 0b1000
};

#endif