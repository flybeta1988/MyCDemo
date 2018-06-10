//指向指针的指针变量
#include <stdio.h>

int main () {
    int a;
    int *p;
    int **q;

    a = 100;
    p = &a;
    q = &p;

    printf("%d\n", a);
    printf("%d\n", *p);
    printf("0x%x\n", *q);
}
