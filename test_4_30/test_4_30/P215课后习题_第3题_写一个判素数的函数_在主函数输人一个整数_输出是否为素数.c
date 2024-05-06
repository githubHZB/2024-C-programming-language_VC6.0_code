#define _CRT_SECURE_NO_WARNINGS // 禁用CRT安全警告，以允许使用某些可能不安全的C运行时函数
#include<stdio.h> // 包含标准输入输出函数的头文件
#include<stdbool.h> // 包含布尔类型的头文件

// 函数IsPrime: 判断一个整数是否为素数
// 参数: value - 需要判断的整数
// 返回值: 如果value是素数返回true, 否则返回false
bool IsPrime(int value)
{
    for (int i = 2; i < value / 2; ++i) // 遍历从2到value/2的所有数
    {
        if (value % i == 0) // 如果value能被i整除（即余数为0）
            return false; // 表明value不是素数，直接返回false
    }
    return true; // 如果for循环结束都没有找到能整除value的数，则value是素数，返回true
}

// 主函数
int main()
{
    int value; // 用于存储用户输入的待判断数值
    bool flag; // 用于存储IsPrime函数的返回结果，判断value是否为素数

    printf("请输入 value :>"); // 提示用户输入一个数值
    scanf("%d", &value); // 读取用户输入的整数到value变量中

    flag = IsPrime(value); // 调用IsPrime函数判断value是否为素数，并将结果存入flag

    if (flag) // 如果flag为true，即value是素数
        printf("%d 是素数.\n", value); // 输出value是素数的信息
    else
        printf("%d 不是素数.\n", value); // 否则输出value不是素数的信息

    return 0; // 程序正常结束，返回0
}