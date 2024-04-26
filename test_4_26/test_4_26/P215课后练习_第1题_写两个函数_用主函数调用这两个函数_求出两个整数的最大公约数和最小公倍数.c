// 禁止编译器显示关于使用不安全的C运行时函数的警告
#define  _CRT_SECURE_NO_WARNINGS

// 引入标准输入输出库
#include<stdio.h>

// 定义计算两个正整数最大公约数的函数gcd
int gcd(int m, int n);

// 定义计算两个正整数最小公倍数的函数lcd
int lcd(int m, int n);

// 主函数入口
void main()
{
	// 定义并初始化两个整数变量a和b
	int a, b;

	// 提示用户输入两个正整数，并通过scanf读取输入值
	printf("输入两个正整数:");
	scanf("%d%d", &a, &b);

	// 调用gcd函数计算a和b的最大公约数，并将结果打印
	printf("%d 和 %d 最大公约数是%d\n", a, b, gcd(a, b));

	// 调用lcd函数计算a和b的最小公倍数，并将结果打印
	printf("最小公倍数是:%d\n", lcd(a, b));
}

// 计算两个正整数m和n的最大公约数（Greatest Common Divisor, GCD）
// 使用辗转相除法（欧几里得算法）
int gcd(int m, int n)
{
	// 交换m和n，确保m始终大于等于n
	int t;
	if (m < n)
	{
		t = m;
		m = n;
		n = t;
	}

	// 循环执行以下操作，直至n为0：
	// 将m除以n的余数赋值给t，然后更新m为n，n为t
	while (n != 0)
	{
		t = m % n;
		m = n;
		n = t;
	}

	// 当n为0时，m即为最大公约数，返回结果
	return m;
}

// 计算两个正整数m和n的最小公倍数（Least Common Multiple, LCM）
// 根据公式：m * n = gcd(m, n) * lcm(m, n)
int lcd(int m, int n)
{
	// 先调用gcd函数求出m和n的最大公约数
	int t = gcd(m, n);

	// 根据公式计算最小公倍数，并返回结果
	t = m * n / t;
	return t;
}


/*
预处理指令与头文件包含

#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//这两行代码位于程序开头，对程序的全局行为产生影响。
  第一行使用预处理指令 #define 定义宏 _CRT_SECURE_NO_WARNINGS，其目的是禁用针对不安全的C运行时函数（如某些版本的 scanf）的安全警告。
  这样做的原因在于，虽然这些警告有助于提高代码安全性，但在本例中，我们明确知道所使用的 scanf 语句是安全的，因此选择关闭警告以避免编译器报错。

//第二行通过 #include<stdio.h> 引入 stdio.h 头文件，该头文件包含了标准输入输出（I/O）相关的函数声明，如 printf 和 scanf。
  这样，在后续代码中可以直接使用这些函数而无需显式声明。


  
 函数声明

int gcd(int m, int n);
int lcd(int m, int n);

//这两行代码声明了两个函数：gcd 和 lcd，分别用于计算两个整数的最大公约数和最小公倍数。
  函数声明指定了函数的返回类型、函数名以及参数列表。
  在这里，两个函数都返回一个整数（int），接受两个整数参数（int m, int n）。
  函数声明使得在主函数 main 中可以调用这两个函数，即使它们的实现（函数体）出现在 main 函数之后。



 主函数main

 void main()
{
	int a, b;
	printf("输入两个正整数:");
	scanf("%d%d", &a, &b);
	printf("%d 和 %d 最大公约数是%d\n", a, b, gcd(a, b));
	printf("最小公倍数是:%d\n", lcd(a, b));
}

//主函数 main 是程序的执行起点。此段代码执行以下操作：

  定义并初始化两个整数变量 a 和 b，用于存储用户输入的两个正整数。

  使用 printf 输出提示信息，告知用户需要输入两个正整数。

  使用 scanf 从标准输入（通常是键盘）读取两个整数，并将它们分别存入变量 a 和 b。"%d%d" 是格式字符串，表示期望输入两个整数。

  调用已声明的 gcd 函数，传入 a 和 b 作为参数，获取它们的最大公约数。将结果与原始数值一起打印出来。

  调用已声明的 lcd 函数，同样传入 a 和 b，获取它们的最小公倍数。将结果打印出来。



 gcd函数

int gcd(int m, int n)
{
	int t;
	if (m < n)
	{
		t = m;
		m = n;
		n = t;
	}
	while (n != 0)
	{
		t = m % n;
		m = n;
		n = t;
	}
	return m;
}

//gcd 函数实现了计算两个整数 m 和 n 的最大公约数的算法——辗转相除法（欧几里得算法）。具体步骤如下：

  定义一个临时变量 t，用于交换数值或存储余数。

  检查 m 是否小于 n，如果是，则交换它们的值，确保 m 不小于 n。

  使用 while 循环进行迭代，条件为 n != 0。在循环内部：
  计算 m 除以 n 的余数，并将结果赋值给 t。
  将 n 的值赋给 m，即将 m 更新为当前的除数。
  将 t 的值赋给 n，即将 n 更新为当前的余数。
  当 n 变为0时，循环结束。此时 m 保存的就是 m 和 n 的最大公约数，返回 m 作为函数结果。



lcd函数

int lcd(int m, int n)
{
	int t;
	t = gcd(m, n);
	t = m * n / t;
	return t;
}

//lcd 函数计算两个整数 m 和 n 的最小公倍数，利用已知公式 m * n = gcd(m, n) * lcm(m, n)：

  定义临时变量 t。
 
  调用已声明的 gcd 函数，传入 m 和 n，计算它们的最大公约数，并将结果保存在 t 中。

  根据公式计算最小公倍数：m * n 除以最大公约数 t，并将结果赋给 t。

  返回 t 作为 m 和 n 的最小公倍数。
*/


