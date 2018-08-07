#include <stdio.h>

int main() {

    //奖金
    float bonus;
    //单位
    int unit = 10000;

    //利润
    float profit;

    printf("您的纯利润是：\n");
    scanf("%f", &profit);

    if (profit <= 10*unit) {

        bonus = profit*10/100;

    } else if (profit > 10*unit && profit < 20*unit) {

        bonus = 10*unit*10/100 + (profit-10*unit)*7.5/100;

    } else if (profit >= 20*unit) {

        bonus = 10*unit*(10/100 + 7.5/100) + (profit-20*unit)*5/100;

    }

    printf("利润：%1f, 奖金：%1f\n", profit, bonus);

}