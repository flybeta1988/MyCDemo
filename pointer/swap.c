#include <stdio.h>

void swap (int *a, int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main () {
    int a = 1;
    int b = 2;

    printf("a, b: %d, %d\n", a, b);
    swap(&a, &b);
    printf("a, b: %d, %d\n", a, b);
}
