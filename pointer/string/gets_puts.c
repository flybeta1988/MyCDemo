#include <stdio.h>
#include <string.h>

void main() {

    char a[80] = {'\0'}, b[80] = {'\0'}, *p = a, *q = b;
    printf("Input 2 strings: \n");

    gets(p);
    gets(q);

    printf("The 2 strings are:\n");
    puts(p);
    puts(q);
}