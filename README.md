# High-performance global memory pool  ->  used

To integrate the global memory pool, include global.h in your file where it's needed. Initialize the memory pool preferably within the main.cpp function. <br>

**Here are some configurations for the memory pool, it is recommended to use 16 as the size of each memory block** <br>

#define BLOCK_SIZE 16 // Block size per allocation<br>
#define MEM_POOL_SIZE (1024 * 4) // Memory pool per block size<br>
Here are the operations performed on the memory pool. Refer to my demo for detailed implementation:<br>

**Create a memory pool:** set_mem_pool();<br>
**Destroy the memory pool:** destroy_mem_pool();<br>
**Reset the memory pool:** reset_mem_pool();<br>

For creating and managing additional structures, classes, or data, utilize memory allocation functions to request memory from the memory pool.<br>
Here are the recommended memory request functions:<br>

**1. Aligned Memory Request:** void * ngx_palloc(ngx_pool_t *pool, size_t size);<br>
**2. Unaligned Memory Request:** void * ngx_pnalloc(ngx_pool_t *pool, size_t size);<br>
**3. Aligned and Initialized Memory Request:**  void * ngx_pcalloc(ngx_pool_t *pool, size_t size);<br>

## Run the demo.
You just need to run cmake . , and then make <br>
