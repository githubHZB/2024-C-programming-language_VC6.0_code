#define  _CRT_SECURE_NO_WARNINGS
// 引入标准输入输出头文件
#include<stdio.h>

// 主函数
int main()
{
    int i, j, min, temp; // 定义四个整型变量：i、j 作为循环索引，min 用于记录最小值的位置，temp 作为临时变量用于交换数组元素
    int a[11]; // 定义一个大小为11的整数数组，实际存放10个数

    // 提示用户输入数据
    printf("输入数据:\n");

    // 使用循环获取用户输入的10个数并存储到数组a中
    for (i = 1; i <= 10; i++)
    {
        printf("a[%d]=", i); // 输出数组下标提示
        scanf("%d", &a[i]); // 从键盘读取用户输入的整数并存入数组a对应位置
    }

    printf("\n");

    // 输出原始未排序的10个数
    printf("原始的数字:\n");
    for (i = 1; i <= 10; i++)
        printf("%5d", a[i]); // 每个数占5个空格宽度输出

    printf("\n");

    // 对数组a中的10个数进行冒泡排序
    for (i = 1; i <= 9; i++) // 外层循环控制遍历数组的轮数
    {
        min = i; // 初始化每轮比较的最小值索引为当前元素的索引

        // 内层循环查找剩余未排序部分的最小值
        for (j = i + 1; j <= 10; j++)
            if (a[min] > a[j])
                min = j;

        // 将找到的最小值与当前元素a[i]进行交换
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("\n排序的数字:\n"); // 输出排序完成的信息提示
    // 输出已排好序的10个数
    for (i = 1; i <= 10; i++)
        printf("%5d", a[i]);

    printf("\n");

    // 程序运行结束，返回0
    return 0;
}

/*#include<stdio.h>
int main()
{
    int i, j, min, temp, a[11];
    printf("输入数据:\n");
    for (i = 1; i <= 10; i++)
    {
        printf("a[% d]=", i);
        scanf("%d", &a[i]);//输入10个数
    }
    printf("\n");
    printf("原始的数字:\n");
    for (i = 1; i <= 10; i++)
        printf("%5d", a[i]);//输出这10个数
    printf("\n");
    for (i = 1; i <= 9; i++)
    {
        min = i;
        for (j = i + 1; j <= 10; j++)
            if (a[min] > a[j])
                min = j;
        temp = a[i];//以下3行将[i+ 1]~a[10]中的最小值与a[i]对换
        a[i] = a[min];
        a[min] = temp;
    }
    printf("\n排序的数字:\n");//输出已排好序的10个数！
    for (i = 1; i <= 10; i++)
        printf("%5d", a[i]);
    printf("\n");
    return 0;
}*/