#include <stdio.h>

int main() 

{ 

    /* 定义需要计算的日期 */

    int date = 0;

    int year = 2008;

    int month = 8;

    int day = 8;

    switch(month)

    {

        case 12:date+=30;

        case 11:date+=31;

        case 10:date+=30;

        case 9:date+=31;

        case 8:date+=31;

        case 7:date+=30;

        case 6:date+=31;

        case 5:date+=30;

        case 4:date+=31;

        case 3:

        if((year%4==0&&year%100!=0)||year%400==0)

        {

            date+=29;

        }

        else

        {

            date+=28;

        }
        case 2:

        date+=31;

        case 1:

        date+=day;

        printf("%d年%d月%d日是该年的第%d天",year,month,day,date);

        break;

        default:

        printf("error");

        break;

    }

    return 0;

}