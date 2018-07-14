#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mysql.h>  //我的机器上该文件在/usr/include/mysql下

//https://blog.csdn.net/alexdream/article/details/2213201
//gcc ./db/mysql.c -I /usr/include/mysql -L /usr/lib/mysql -l mysqlclient -lz -lm
//定义数据库操作的宏，也可以不定义留着后面直接写进代码
#define SELECT_QUERY "select name from user where id = %d"

int main(int argc, char *argv[])
{
    MYSQL mysql,*sock; //定义数据库连接的句柄，它被用于几乎所有的MySQL函数
    MYSQL_RES *res; //查询结果集，结构类型
    MYSQL_FIELD *fd; //包含字段信息的结构
    MYSQL_ROW row; //存放一行查询结果的字符串数组
    char qbuf[160]; //存放查询sql语句字符串
    char sql[100];

    if (argc != 2) {
        fprintf(stderr,"usage : mysql_select <userid> \n\n");
        exit(1);
    }

    mysql_init(&mysql);
    if (!(sock = mysql_real_connect(&mysql, "localhost", "root", "123456", "test", 0, NULL, 0))) {
        fprintf(stderr,"Couldn't connect to engine!\n%s\n\n",mysql_error(&mysql));
        perror("");
        exit(1);
    }

    //strcpy(sql, "SELECT * FROM org_course ORDER BY id DESC LIMIT 1");
    sprintf(qbuf, SELECT_QUERY, atoi(argv[1]));
    if (mysql_query(sock, qbuf)) {
        fprintf(stderr,"Query failed (%s)\n",mysql_error(sock));
        exit(1);
    }

    if (!(res = mysql_store_result(sock))) {
        fprintf(stderr,"Couldn't get result from %s\n", mysql_error(sock));
        exit(1);
    }

    printf("number of fields returned: %d\n", mysql_num_fields(res));

    while (row = mysql_fetch_row(res)) {
        printf("The userid #%d 's user name is: %s\n", atoi(argv[1]),(((row[0]==NULL)&&(!strlen(row[0]))) ? "NULL" : row[0])) ;
        puts( "query ok !\n" ) ;
    }

    mysql_free_result(res);
    mysql_close(sock);
    exit(0);
    return 0; //为了兼容大部分的编译器加入此行
}