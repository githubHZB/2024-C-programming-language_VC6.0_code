#define _CRT_SECURE_NO_WARNINGS // 避免使用scanf函数时的编译器安全警告

#include<stdio.h> // 包含标准输入输出库

int main()
{
    int n=0; // 定义变量n，用于存储菱形的大小
	int i=0;
    int j=0;
    scanf("%d", &n); // 从用户那里读取一个整数，作为菱形的大小

    // 打印菱形的上半部分
    for (i = 0; i < n; i++) // 外层循环控制行数
    {
        // 打印每行前面的空格
        for (j = 0; j < n - 1 - i; j++) // 内层循环打印空格
        {
            printf(" ");
        }
        // 打印每行的星号
        for (j = 0; j < 2 * i + 1; j++) // 内层循环打印星号
        {
            printf("*");
        }
        printf("\n"); // 换行，准备打印下一行
    }

    // 打印菱形的下半部分
    for (i = 0; i < n; i++) // 外层循环控制行数
    {
        // 打印每行前面的空格
        for (j = 0; j <= i; j++) // 内层循环打印空格
        {
            printf(" ");
        }
        // 打印每行的星号
        for (j = 0; j < 2 * (n - 1 - i) - 1; j++) // 内层循环打印星号
        {
            printf("*");
        }
        printf("\n"); // 换行，准备打印下一行
    }

    return 0; // 程序结束
}