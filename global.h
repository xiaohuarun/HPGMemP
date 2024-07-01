#ifndef GLOBAL_H
#define GLOBAL_H
extern "C" {
#include "mem_core.h"
}
#include <stdexcept>

#define BLOCK_SIZE  16   // 每次分配内存块大小
#define MEM_POOL_SIZE (1024 * 4) // 内存池每块大小

extern ngx_pool_t* mem_pool;

void set_mem_pool();
void destroy_mem_pool();
#endif // GLOBAL_H