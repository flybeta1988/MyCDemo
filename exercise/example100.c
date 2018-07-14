#include <stdio.h>
#include <stdlib.h>

#define LEN 2

typedef struct {
    int id;
    int c;
    char name[32];
} Student;

int main()
{
    FILE *fp;
    //const int LEN = 2;
    Student student[LEN];
    int i = 0;
    printf("请输入5个学生的信息：学号、姓名、C成绩");

    for (int i = 0; i < LEN; ++i) {
        scanf("%d %s %d\n", &(student[i].id), student[i].name, &(student[i].c));
    }

    fp = fopen("student.txt", "w");
    if (NULL == fp) {
        printf("error: cannot open file! \n");
        exit(0);
    }

    for (int i = 0; i < LEN; i++) {
        fprintf(fp, "%d %s %d\n", student[i].id, student[i].name, student[i].c);
    }

    fclose(fp);
    return 0;
}