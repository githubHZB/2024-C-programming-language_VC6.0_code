#include <stdio.h> //标准输入输出库

int main() //定义主函数 
{   //函数开始
    int num1, num2, sum, difference, product, quotient, remainder;  //定义变量num1,num2及它们的和，差，积，商和余数

    // 提示用户输入两个整数
    printf("请输入第一个整数: ");
    scanf("%d", &num1);//输入num1这个变量名
    printf("请输入第二个整数: ");
    scanf("%d", &num2);//输入num2这个变量名

    // 计算和、差、积、商和余数
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2; // 注意：整数除法会得到整数商，小数部分会被舍去
    remainder = num1 % num2; // 余数

    // 输出结果
    printf("两个整数的和是: %d\n", sum);
    printf("两个整数的差是: %d\n", difference);
    printf("两个整数的积是: %d\n", product);
    printf("两个整数的商是: %d\n", quotient);
    printf("两个整数的余数是: %d\n", remainder);

    return 0;  //函数返回值为0
}     //函数结束

