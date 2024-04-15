#define _CRT_SECURE_NO_WARNINGS // 防止某些编译器出现关于安全警告的提示
#include <stdio.h> // 引入标准输入输出头文件

int main() // 定义主函数
{
    // 定义一个包含10个元素的整数数组a，并初始化
    int a[11] = { 1, 4, 6, 9, 13, 16, 19, 28, 40, 100 };

    int temp1, temp2, number, end, i, j;// 定义临时变量：temp1 和 temp2 用于交换元素，number 存储待插入的数，end 存储原数组最后一个元素，i 和 j 作为循环索引

    // 输出原数组a的内容
    printf("array a:\n");
    for (i = 0; i < 10; i++) // 遍历数组a前10个元素
    {
        printf("%5d", a[i]); // 输出数组元素，格式化为5个字符宽度
    }
    printf("\n"); // 输出换行符

    // 请求用户输入一个整数
    printf("insert data:");
    scanf("%d", &number); // 从用户那里读取一个整数并存储到number变量中

    // 获取原数组a的最后一个元素值
    end = a[9];

    // 检查用户输入的数是否大于原数组的最大值
    if (number > end)
    {
        // 如果大于最大值，则把该数添加到数组的第11个位置
        a[10] = number;
    }
    else
    {
        // 否则，在原数组中找到适当的位置插入该数
        for (i = 0; i < 10; i++) // 遍历数组a寻找插入位置
        {
            // 当找到第一个大于number的元素时，开始插入操作
            if (a[i] > number)
            {
                // 先将当前元素的值暂存到temp1
                temp1 = a[i];

                // 把number插入到当前位置
                a[i] = number;

                // 将当前位置后面的所有元素逐个向后移动一位
                for (j = i + 1; j < 11; j++) // 移动元素循环
                {
                    // 将下一个元素的值暂存到temp2，然后将temp1的值写入当前j位置
                    temp2 = a[j];
                    a[j] = temp1;

                    // 更新temp1为刚刚暂存的temp2的值，准备处理下一个元素
                    temp1 = temp2;
                }

                // 找到插入位置后，跳出内层循环
                break;
            }
        }
    }

    // 输出插入新元素后的数组a
    printf("Now array a:\n");
    // 遍历包含可能新增元素的数组a
    for (i = 0; i < 11; i++)
    {
        printf("%5d", a[i]); // 输出数组元素，格式化为5个字符宽度
    }
    printf("\n"); // 输出换行符

    // 主函数返回0，表示程序执行成功
    return 0;
}


/*#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a[11] = { 1, 4, 6, 9, 13, 16, 19, 28, 40, 100 };
    int temp1, temp2, number, end, i, j;
    printf("array a:\n");
    for (i = 0; i < 10; i++)
        printf("%5d", a[i]);
    printf("\n");
    printf("insert data:");
    scanf("%d", &number);
    end = a[9];
    if (number > end)
        a[10] = number;
    else
    {
        for (i = 0; i < 10; i++)
        {
            if (a[i] > number)
            {
                temp1 = a[i];
                a[i] = number;
                for (j = i + 1; j < 11; j++)
                {
                    temp2 = a[j];
                    a[j] = temp1;
                    temp1 = temp2;
                }
                break;
            }
        }
    }
    printf("Now aray a:\n");
    for (i = 0; i < 11; i++)
        printf("%5d", a[i]);
    printf("\n");
    return 0;
}*/