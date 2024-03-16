#include<stdio.h>  // 引入标准输入输出库

int main()  // 主函数入口
{
    int c1, c2;  // 定义两个整型变量c1和c2，用于存储用户输入的字符

    // 提示用户输入两个字符
    printf("请输入两个字符c1,c2:");
    
    // 使用getchar函数读取用户输入的第一个字符，并赋值给变量c1
    c1 = getchar(); 

    // 再次调用getchar函数读取用户输入的第二个字符，并赋值给变量c2
    c2 = getchar();

    // 打印提示信息，告知用户接下来将使用putchar函数输出字符
    printf("用putchar语句输出结果为:");
    
    // 使用putchar函数输出变量c1存储的字符
    putchar(c1);
    
    // 使用putchar函数输出变量c2存储的字符
    putchar(c2); 

    // 打印换行符，用于分隔输出结果
    printf("\n");
    
    // 打印提示信息，告知用户接下来将使用printf函数输出字符
    printf("用printf语句输出结果为:");
    
    // 使用printf函数输出变量c1和c2存储的字符，格式化字符串"%c %c\n"表示输出两个字符，中间有空格，然后换行
    printf("%c %c\n", c1, c2); 
    
    return 0;  // 程序执行成功，返回0
}