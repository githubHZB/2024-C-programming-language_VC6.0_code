#include<stdio.h> // 引入标准输入输出头文件

int main() // 定义主函数main
{
    char c; // 定义变量c用于存储输入的单个字符  

    // 定义变量并初始化，统计各类字符的数量：
    // eng_char：记录英文字母（包括大写和小写）的个数，初始值为0
    int eng_char = 0;
    // space_char：记录空格字符的个数，初始值为0
    int space_char = 0;
    // digit_char：记录数字字符的个数，初始值为0
    int digit_char = 0;
    // other_char：记录除字母、空格和数字以外的其他字符的个数，初始值为0
    int other_char = 0;

    // 提示用户输入一行字符
    printf("请输入一行字符：");

    // 使用while循环逐个读取用户输入的字符，直到遇到换行符('\n')
    while ((c = getchar()) != '\n')
    {
        // 判断当前字符c是否为小写或大写字母，若是则增加英文字母计数
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        {
            eng_char++;
        }
        // 判断当前字符c是否为空格，若是则增加空格字符计数
        else if (c == ' ')
        {
            space_char++;
        }
        // 判断当前字符c是否为数字，若是则增加数字字符计数
        else if (c >= '0' && c <= '9')
        {
            digit_char++;
        }
        // 若当前字符既不是字母、空格也不是数字，则视为其他字符并增加其计数
        else
        {
            other_char++;
        }
    }

    // 输出统计结果
    printf(" 英文字母数量:%d\n空格数量:%d\n数字数量:%d\n其他字符数量:%d\n",
           eng_char, space_char, digit_char, other_char);

    // 主函数返回0，表示程序正常结束
    return 0;
}

