
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//http://www.runoob.com/cprogramming/c-return-arrays-from-function.html

int *get_random()
{
    int i;
    static int r[10]; //C不支持在函数外返回局部变量的地址，除非定义局部变量为 static 变量

    srand((unsigned)time(NULL)); //[可选]设置种子

    for (i = 0; i < 10; ++i) {
        r[i] = rand();
        printf("r[%d] = %d\n", i, r[i]);
    }

    return r;
}

void main() {
    int i, *p;
    p = get_random();

    for (i = 0; i < 10; i++) {
        printf("*p[%d]: %d\n", i, *(p + i));
    }
}

