#include <stdio.h>

const int MAX = 5;
int main (void) {

    int a[] = {1, 2, 3, 4, 5}; //数组初始化
    int i, *p[MAX]; //指针数组

    printf("the array a size: %ld \n", sizeof(a));

    for (i = 0; i < 5; i++) {
        p[i] = &a[i];
    }

    for (i = 0; i < 5; i++) {
        printf("a[%d] value: %d \n", i, *p[i]);
    }
}
