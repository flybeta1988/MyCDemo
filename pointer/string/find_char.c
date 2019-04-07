#include <stdio.h>

void main () {
    int find(char *str, char ch);
    int result;
    char c, s[20] = "china";

    printf("\n which char do you wang to find:");
    scanf("%c", &c);

    printf("\n");
    result = find(s, c);
    printf("address which char has been found is: %d\n", result);
}

int find (char *str, char ch) {
    int i = 1;
    while (*str != '\0') {
        if (*str == ch) {
            return i;
        } else {
            i++;
            str++;
        }
    }
}