#include <stdio.h>
#include <stdlib.h>

typedef struct stu {
    long int id;
    char name[0x8];
}stu;

typedef struct teacher {
    long int id;
    void (*setgar)();
}tea;

void setgrade () {
    printf("Set Done!!!\n");
}

int main () {
    tea *ptr_1 = (tea*)malloc(sizeof(tea));
    ptr_1->setgar = setgrade;
    free(ptr_1);
    stu *ptr_2 = (stu*)malloc(sizeof(stu));
    read(0, ptr_2->name, 0x8);
    ptr_1->setgar();
    return 0;
}
