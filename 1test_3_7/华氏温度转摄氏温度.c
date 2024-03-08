#include<stdio.h>    //编译预处理指令

int main()           //定义函数
{   //函数开始
	doubel f= 0.0;     //华氏温度
	doubel c= 0.0;     //摄氏温度
	printf("请输入华氏温度:>") //输出
	scanf("%if" , &f);  //输入
	c=(f-32)*5.0/9;  //利用公式计算C值
	printf("c=%if \n",c);
	return 0;      //函数返回值为0
}   //函数结束
	