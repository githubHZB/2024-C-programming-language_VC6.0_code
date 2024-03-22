// 引入标准输入输出头文件stdio.h
#include<stdio.h>

// 定义主函数main
int main()
{
    // 定义一个字符变量grade，用于存储用户输入的成绩等级
    char grade;

    // 提示用户输入成绩等级，并通过scanf接收单个字符存入grade
    printf("请输入你的成绩");
    scanf("%c", &grade);

    // 使用switch语句根据输入的grade进行成绩范围的判断和输出
    switch (grade)
    {
    // 如果输入的是 'A'，输出对应的成绩范围
    case 'A':printf("90~100\n");break;

    // 如果输入的是 'B'，输出对应的成绩范围
    case 'B':printf("80~89\n");break;
       
	// 如果输入的是 'C'，输出对应的成绩范围
    case 'C':printf("70~79\n");break;

    // 如果输入的是 'D'，输出对应的成绩范围
    case 'D':printf("60~69\n");
       
   // 如果输入的是 'E'，输出对应的成绩范围
    case 'E':printf("<60\n");
      
  // 若输入的不是以上字符，则输出错误信息
    default:printf("enter data error!\n");
    }

    // 主函数返回0，表示程序执行成功
    return 0;
}

// 注：该程序假设用户会输入'A'、'B'、'C'、'D'或'E'来代表不同的成绩等级，其他字符视为无效输入。

