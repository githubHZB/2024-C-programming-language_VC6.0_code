#include <stdio.h> //��׼���������

int main() //���������� 
{   //������ʼ
    int num1, num2, sum, difference, product, quotient, remainder;  //�������num1,num2�����ǵĺͣ�������̺�����

    // ��ʾ�û�������������
    printf("�������һ������: ");
    scanf("%d", &num1);//����num1���������
    printf("������ڶ�������: ");
    scanf("%d", &num2);//����num2���������

    // ����͡�������̺�����
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2; // ע�⣺����������õ������̣�С�����ֻᱻ��ȥ
    remainder = num1 % num2; // ����

    // ������
    printf("���������ĺ���: %d\n", sum);
    printf("���������Ĳ���: %d\n", difference);
    printf("���������Ļ���: %d\n", product);
    printf("��������������: %d\n", quotient);
    printf("����������������: %d\n", remainder);

    return 0;  //��������ֵΪ0
}     //��������

