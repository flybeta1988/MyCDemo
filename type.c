#include <stdio.h>

struct test {
    int a;
    int b;
    int c;
};

int main (void) {

    int a[10];
    int *p;
    struct test var;

    printf("int : %ld\n", sizeof(int));
    printf("short : %ld\n", sizeof(short));
    printf("long : %ld\n", sizeof(long));
    printf("unsigned int : %ld\n", sizeof(unsigned));
    printf("char : %ld\n", sizeof(char));
    printf("float : %ld\n", sizeof(float));
    printf("double : %ld\n", sizeof(double));
    printf("long double : %ld\n", sizeof(long double));
    printf("long long : %ld\n", sizeof(long long));

    printf("array : %ld\n", sizeof(a));
    printf("point : %ld\n", sizeof(p));
    printf("struct : %ld\n", sizeof(var));
}

