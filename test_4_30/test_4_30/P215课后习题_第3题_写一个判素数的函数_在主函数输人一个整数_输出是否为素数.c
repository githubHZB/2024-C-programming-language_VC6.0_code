#define _CRT_SECURE_NO_WARNINGS // ����CRT��ȫ���棬������ʹ��ĳЩ���ܲ���ȫ��C����ʱ����
#include<stdio.h> // ������׼�������������ͷ�ļ�
#include<stdbool.h> // �����������͵�ͷ�ļ�

// ����IsPrime: �ж�һ�������Ƿ�Ϊ����
// ����: value - ��Ҫ�жϵ�����
// ����ֵ: ���value����������true, ���򷵻�false
bool IsPrime(int value)
{
    for (int i = 2; i < value / 2; ++i) // ������2��value/2��������
    {
        if (value % i == 0) // ���value�ܱ�i������������Ϊ0��
            return false; // ����value����������ֱ�ӷ���false
    }
    return true; // ���forѭ��������û���ҵ�������value��������value������������true
}

// ������
int main()
{
    int value; // ���ڴ洢�û�����Ĵ��ж���ֵ
    bool flag; // ���ڴ洢IsPrime�����ķ��ؽ�����ж�value�Ƿ�Ϊ����

    printf("������ value :>"); // ��ʾ�û�����һ����ֵ
    scanf("%d", &value); // ��ȡ�û������������value������

    flag = IsPrime(value); // ����IsPrime�����ж�value�Ƿ�Ϊ�����������������flag

    if (flag) // ���flagΪtrue����value������
        printf("%d ������.\n", value); // ���value����������Ϣ
    else
        printf("%d ��������.\n", value); // �������value������������Ϣ

    return 0; // ������������������0
}