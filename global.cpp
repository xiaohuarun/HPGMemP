#include "global.h"

ngx_pool_t* mem_pool =nullptr;

void set_mem_pool(){
    if (mem_pool == nullptr) {
        mem_pool = ngx_create_pool(MEM_POOL_SIZE);
         if (mem_pool == nullptr) {
            throw std::runtime_error("Failed to create mem_pool");
        }
    }
    return;
}
void destroy_mem_pool(){
    if (mem_pool != nullptr) {
        ngx_destroy_pool(mem_pool);
        mem_pool = nullptr;
    }
    
    return;
}

void reset_mem_pool(){
    if (mem_pool != nullptr) {
        ngx_reset_pool(mem_pool);
        mem_pool = nullptr;
    }

    return ;
}