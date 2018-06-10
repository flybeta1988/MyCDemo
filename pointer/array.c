#include <stdio.h>

const int MAX = 5;

int main (void) {

    int a[5] = {10, 20, 30, 40, 50}; //数组初始化
    int (*p)[MAX]; //数组指针
    int *ptr;
    p = &a;
    ptr = (int *)(p + 1); //将数组的指针转换为整型的指针
    printf("the result is %d \n", *(ptr-3));

    //printf("the array a size: %ld \n", sizeof(a));
}
