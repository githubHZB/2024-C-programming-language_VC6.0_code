#define  _CRT_SECURE_NO_WARNINGS                 //scanf为非安全函数，加入一个红定义，防止编译器警告
#include<stdio.h>                                //这是一个编译预处理指令
int main()                                       //定义主函数
{                                                //函数开始
	int a,b,c,max;                               //程序的声明部分，定义a,b,c,max为整型变量
	printf("please input a,b,c:\n");             //输出提示信息
	scanf("%d%d%d",&a,&b,&c);                    //读取用户输入的三个整数
    max=a;                                       //将a的值赋给max
	if(max<b)                                    //如果b大于max
	max=b;                                       //将b的值赋给max
	if(max<c)                                    //如果c大于max
    max=c;                                       //将c的值赋给max
	printf("The Iargest numder is %d\n", max);   //输出三个数中的最大数
	return 0;                                    //函数返回值为0
}                                                //函数结束

