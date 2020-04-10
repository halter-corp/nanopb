#include <stdlib.h>

void* malloc_with_check(size_t size);
void free_with_check(void *mem);
void* realloc_with_check(void *ptr, size_t size);
size_t get_alloc_count();
