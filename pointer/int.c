#include <stdio.h>

void f1 (int *x, int *y) {
    *x += 2 * *y;
}

void f2 (int *x, int *y) {
    *x += *y;
    *x += *y;
}

int main (void) {
    int a = 3;
    int *x = &a;
    int *y = &a;

    f1(x, y);

    printf("%d \n", a);
}

