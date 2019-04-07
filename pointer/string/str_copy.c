#include <stdio.h>

void main()
{
    //在C语言中，字符串实际上是使用 null 字符 '\0' 终止的一维字符数组
    //char a[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    //依据数组初始化规则，您可以把上面的语句写成以下语句
    char a[] = "Hello", b[10];
    int i;
    for (i = 0; *(a + i) != '\0'; i++) {
        *(b + i) = *(a + i);
    }
    *(b + i) = '\0';

    printf("string a is :%s\n", a);
    printf("string b is :%s\n", b);

    for (i = 0; b[i] != '\0'; i++) {
        printf("%c", *(b + i));
    }
    printf("\n");
}