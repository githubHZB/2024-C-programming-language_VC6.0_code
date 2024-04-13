#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    // 声明变量
    float remainingFood; // 剩余食物的克数
    float originalCost; // 原始餐费
    float discountedCost; // 打折后的餐费
    int discountRate; // 折扣率

    // 假设用户输入原始餐费
    printf("请输入原始餐费: ");
    scanf("%f", &originalCost);

    // 假设用户输入剩余食物的克数
    printf("请输入剩余食物的克数: ");
    scanf("%f", &remainingFood);

    // 使用for循环来判断不同的折扣情况
    for (int i = 0; i < 1; i++) 
    {
        if (remainingFood <= 50) 
        {
            discountRate = 70; // 总剩余量小于等于50g，打七折
        }
        else if (remainingFood <= 100) 
        {
            discountRate = 80; // 总剩余量小于等于100g，打八折
        }
        else if (remainingFood <= 150) 
        {
            discountRate = 90; // 总剩余量小于等于150g，打九折
        }
        else 
        {
            discountRate = 0; // 总剩余量大于150g，餐费为应付餐费的1.5倍
            discountedCost = originalCost * 1.5;
            break; // 由于已经计算出费用，跳出循环
        }

        // 计算打折后的餐费
        discountedCost = originalCost * ((float)discountRate / 100); 
    }

    // 输出结果
    if (discountRate != 0)
    {
        printf("打折后的餐费为: %.2f\n", discountedCost);
    }
    else 
    {
        printf("由于剩余食物过多，您的餐费为原始餐费的1.5倍，总计: %.2f\n", discountedCost);
    }

    return 0;
}