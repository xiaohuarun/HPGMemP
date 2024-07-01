# High-performance global memory pool
## used
To integrate the global memory pool, include global.h in your file where it's needed. Initialize the memory pool preferably within the main.cpp function. 

**Here are some configurations for the memory pool, it is recommended to use 16 as the size of each memory block**

#define BLOCK_SIZE 16 // Block size per allocation
#define MEM_POOL_SIZE (1024 * 4) // Memory pool per block size
Here are the operations performed on the memory pool. Refer to my demo for detailed implementation:

**Create a memory pool:** set_mem_pool();
**Destroy the memory pool:** destroy_mem_pool();
**Reset the memory pool:** reset_mem_pool();

For creating and managing additional structures, classes, or data, utilize memory allocation functions to request memory from the memory pool.
Here are the recommended memory request functions:

**1. Aligned Memory Request:** void * ngx_palloc(ngx_pool_t *pool, size_t size);
**2. Unaligned Memory Request:** void * ngx_pnalloc(ngx_pool_t *pool, size_t size);
**3. Aligned and Initialized Memory Request:**  void * ngx_pcalloc(ngx_pool_t *pool, size_t size);


