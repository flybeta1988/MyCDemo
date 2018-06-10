#include <stdio.h>

int main (void) {

    int a; //实际变量的声明
    int *p; //指针变量的声明
    p = &a; //在指针变量中存储 var 的地址

    //在指针变量中存储 a 的地址
    printf("a 变量的内存地址是： %x\n", (unsigned int)(long)&a);

    //在指针变量中存储的地址
    printf("Address stored in ip variable: %x\n", (unsigned int)(long)p);

    //使用指针访问值
    printf("Value of *ip variable: %d\n", *p);

    return 0;
}

