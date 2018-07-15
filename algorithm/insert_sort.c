#include <stdio.h>
#include <string.h>

void print_r(int array[]) {
    const int MAX = 10;
    char str[MAX];
    for (int i = 0; i < MAX; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void insert_sort(int array[], int length) {
    int i, j;
    for (int i = 1; i < length; ++i) {
        int temp;
        j = i;
        temp = array[j];
        while (j > 0) {
            if (temp < array[j-1]) {
                array[j] = array[j-1];
                printf("if true, i: %d, j: %d, array[%d]: %d\n", i, j, j, array[j]);
                j--;
            } else {
                printf("if false, i: %d, j: %d, array[%d]: %d\n", i, j, j, array[j]);
                break;
            }
        }
        array[j] = temp;
        printf("loop %d result: ", i);
        print_r(array);
        printf("for i: %d, array[%d]: %d, array[%d]: %d \n\n", i, i, array[i], j, array[j]);
    }
}

int main()
{
    int arr1[] = {8, 3, 4, 2, 5, 7, 1, 9, 6, 0};
    printf("\n");
    printf("init data: ");
    print_r(arr1);
    printf("\n");
    insert_sort(arr1, 10);
}