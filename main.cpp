#include "global.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>



int main(int argc, char **argv) {
    int i = 0, k = 0;
    int use_free = 0;

    if (argc >= 2) {
        use_free = 1;
        printf("use malloc/free\n");
    } else {
        printf("use mempool.\n");
    }

    set_mem_pool();

    char* ptr = reinterpret_cast<char*>(ngx_palloc(mem_pool, BLOCK_SIZE));
    
    if (!ptr) {
        fprintf(stderr, "ngx_palloc failed.\n");
        return 1;
    }

    strcpy(ptr, "Hello, World!");

    printf("ptr value: %s\n", ptr);

    size_t ptr_size = strlen(ptr); // 获取字符串长度，不包括结尾的 '\0'
    printf("ptr size: %zu bytes\n", ptr_size);

    destroy_mem_pool();
   
    return 0;
}
