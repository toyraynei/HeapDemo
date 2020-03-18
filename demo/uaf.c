#include <stdio.h>
#include <stdlib.h>

typedef struct stu {
    long int id;
    char name[0x8];
}stu;

int main () {
    stu *ptr_1 = (stu*)malloc(sizeof(stu));
    stu *ptr_2 = (stu*)malloc(sizeof(stu));
    free(ptr_1);
    free(ptr_2);
    printf("stu's name is %ld\n", ptr_2->id);
    return 0;
}
