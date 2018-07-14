#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[100];
    char *description;

    strcpy(name, "易水寒");

    description = malloc(200 * sizeof(char));
    if (NULL == description) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcpy(description, name);
        strcat(description, " a DPS student in class 10th");
    }

    printf("Name is: %s\n", name);
    printf("Description is: %s\n", description);

    free(description);
}