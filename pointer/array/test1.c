#include <stdio.h>

void main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};
    int *p = a;

    printf("%d\n", *p);
    printf("%d,%d\n", *(p+2), *(a+2));
    printf("%d,%d\n", a[2], p[2]);

    *p = 8;
    printf("%d\n", *p);

    p++;
    printf("%d\n", *p);
}