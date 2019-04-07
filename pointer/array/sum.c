#include <stdio.h>

void main()
{
    int a[10] = {0}, sum = 0, *p;
    printf("Input scores:");

    //数组名可以表示数组的首地址 p=&a[0]
    //C语言规定：数组名a代表数组的首地址（a[0]的地址），a+1、a+2、...、a+9分别代表a[1]、a[2]、...、a[9]的地址
    for (p = a; p < a + 10; p++) {
        scanf("%d", p);
    }

    for (p = a; p < a + 10; p++) {
        printf("%4d", *p);
        sum = sum + *p;
    }

    printf("\n sum = %d \n", sum);
}
