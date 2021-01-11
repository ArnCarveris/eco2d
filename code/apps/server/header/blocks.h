#pragma once
#include "system.h"

#define BLOCKS_ERROR_NONE       +0x0000
#define BLOCKS_ERROR_OUTOFMEM   -0x0001
#define BLOCKS_ERROR_NOTFOUND   -0x0002
#define BLOCKS_ERROR_INVALID    -0x0003

int32_t blocks_init(void);
int32_t blocks_destroy(void);

// persisting buffer
char *blocks_get_name(uint32_t id);
uint32_t blocks_get_flags(uint32_t id);
