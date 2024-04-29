#define _CRT_SECURE_NO_WARNINGS // 禁用安全警告，允许使用传统的输入输出函数
#include <stdio.h> // 包含标准输入输出库
#include <math.h> // 包含数学函数库

// 变量声明：x1和x2分别表示方程的两个解，disc为判别式，p和q用于表示复数根
float x1, x2, disc, p, q;

// 当判别式大于0时，计算并输出两个实数根
void greater_than_zero(float a, float b, float c) {
    float m = sqrt(disc); // 计算平方根
    x1 = (-b + m) / (2 * a); // 计算第一个实数根
    x2 = (-b - m) / (2 * a); // 计算第二个实数根
    printf("disc>0的根为: x1=%.2f  x2=%.2f\n", x1, x2); // 输出结果
}

// 当判别式等于0时，计算并输出一个实数根（两个相同的根）
void equal_to_zero(float a, float b, float c) {
    x1 = x2 = (-b) / (2 * a); // 计算相同根
    printf("disc==0的根为:x1=%.2f  x2=%.2f\n", x1, x2); // 输出结果
}

// 当判别式小于0时，计算并输出两个复数根
void smaller_than_zero(float a, float b, float c) {
    p = -b / (2 * a); // 实部计算
    q = sqrt(-disc) / (2 * a); // 虚部计算，注意使用sqrt处理负数得到复数
    printf("disc<0的根为:x1=%.2f+%fi  x2=%.2f-%fi\n", p, q, p, q); // 输出复数根，使用i表示虚数单位
}

int main() {
    float a, b, c; // 定义方程系数为浮点数
    printf("请输入a b c :"); // 提示用户输入
    scanf("%f %f %f", &a, &b, &c); // 读取用户输入的系数

    printf("表达式为: %.1fx^2+%.1fx+%.1f = 0\n", a, b, c); // 显示方程形式

    disc = b * b - 4 * a * c; // 计算判别式

    // 根据判别式的值分情况讨论并调用相应函数
    if (disc > 0) {
        greater_than_zero(a, b, c);
    }
    else if (disc == 0) {
        equal_to_zero(a, b, c);
    }
    else {
        smaller_than_zero(a, b, c);
    }

    return 0; // 程序结束
}