#include <stdlib.h>

int main () {
    void *ptr_1 = malloc(0x40);
    void *ptr_2 = malloc(0x40);
    free(ptr_1);
    free(ptr_2);
    free(ptr_1);
    void *ptr = malloc(0x40);
    read(0, ptr, 0x40);
    return 0;
}
