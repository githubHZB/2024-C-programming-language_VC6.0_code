#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    // ��������
    float remainingFood; // ʣ��ʳ��Ŀ���
    float originalCost; // ԭʼ�ͷ�
    float discountedCost; // ���ۺ�Ĳͷ�
    int discountRate; // �ۿ���

    // �����û�����ԭʼ�ͷ�
    printf("������ԭʼ�ͷ�: ");
    scanf("%f", &originalCost);

    // �����û�����ʣ��ʳ��Ŀ���
    printf("������ʣ��ʳ��Ŀ���: ");
    scanf("%f", &remainingFood);

    // ʹ��forѭ�����жϲ�ͬ���ۿ����
    for (int i = 0; i < 1; i++) 
    {
        if (remainingFood <= 50) 
        {
            discountRate = 70; // ��ʣ����С�ڵ���50g��������
        }
        else if (remainingFood <= 100) 
        {
            discountRate = 80; // ��ʣ����С�ڵ���100g�������
        }
        else if (remainingFood <= 150) 
        {
            discountRate = 90; // ��ʣ����С�ڵ���150g�������
        }
        else 
        {
            discountRate = 0; // ��ʣ��������150g���ͷ�ΪӦ���ͷѵ�1.5��
            discountedCost = originalCost * 1.5;
            break; // �����Ѿ���������ã�����ѭ��
        }

        // ������ۺ�Ĳͷ�
        discountedCost = originalCost * ((float)discountRate / 100); 
    }

    // ������
    if (discountRate != 0)
    {
        printf("���ۺ�Ĳͷ�Ϊ: %.2f\n", discountedCost);
    }
    else 
    {
        printf("����ʣ��ʳ����࣬���Ĳͷ�Ϊԭʼ�ͷѵ�1.5�����ܼ�: %.2f\n", discountedCost);
    }

    return 0;
}