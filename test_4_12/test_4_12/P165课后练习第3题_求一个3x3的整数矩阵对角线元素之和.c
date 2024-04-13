#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h> // 引入标准输入输出库

int main() // 主函数
{
    int array[3][3]; // 定义一个3x3的二维整数数组（矩阵）

    int sumLT2RB = 0; // 初始化变量sumLT2RB为0，用于存储左上角到右下角对角线上的元素之和
    int sumRT2LB = 0; // 初始化变量sumRT2LB为0，用于存储右上角到左下角对角线上的元素之和

    printf("请输入3行3列的矩阵：\n"); // 提示用户输入矩阵元素
    // 循环读取用户输入的3x3矩阵数据
    for (int i = 0; i < 3; ++i) // 外层循环遍历矩阵的行
    {
        for (int j = 0; j < 3; ++j) // 内层循环遍历矩阵的列
            scanf("%d", &array[i][j]); // 使用scanf函数读取并存储用户输入的一个矩阵元素
    }

    // 计算左上角到右下角对角线上的元素之和
    for (int i = 0; i < 3; ++i)
        sumLT2RB += array[i][i];

    // 计算右上角到左下角对角线上的元素之和
    // 注意此处同时更新行索引i和列索引j
    for (int i = 0, j = 2; i < 3; ++i, --j)
        sumRT2LB += array[i][j];

    // 输出两条对角线上元素的和
    printf("左上角到右下角对角线元素之和: %d\n", sumLT2RB);
    printf("右上角到左下角对角线元素之和: %d\n", sumRT2LB);

    return 0; // 程序正常结束，返回值为0
}