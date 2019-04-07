#include <stdio.h>

int min, max;

void get_min_max(int num[], int n) {

    int *p, *num_end;
    min = max = *num;
    num_end = num + n;

    for (p = num + 1; p < num_end; p++ ) {
        if (*p < min) {
            min = *p;
        } else if (*p > max) {
            max = *p;
        }
    }
}

void main()
{
    int i, n = 5, number[n];

    printf("enter %d int numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &number[i]);
    }

    get_min_max(number, n);

    printf("min:%d max:%d \n\n", min, max);
}



