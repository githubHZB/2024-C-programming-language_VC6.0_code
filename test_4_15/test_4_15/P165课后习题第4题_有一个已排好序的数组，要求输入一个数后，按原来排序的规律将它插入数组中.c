#define _CRT_SECURE_NO_WARNINGS // ��ֹĳЩ���������ֹ��ڰ�ȫ�������ʾ
#include <stdio.h> // �����׼�������ͷ�ļ�

int main() // ����������
{
    // ����һ������10��Ԫ�ص���������a������ʼ��
    int a[11] = { 1, 4, 6, 9, 13, 16, 19, 28, 40, 100 };

    int temp1, temp2, number, end, i, j;// ������ʱ������temp1 �� temp2 ���ڽ���Ԫ�أ�number �洢�����������end �洢ԭ�������һ��Ԫ�أ�i �� j ��Ϊѭ������

    // ���ԭ����a������
    printf("array a:\n");
    for (i = 0; i < 10; i++) // ��������aǰ10��Ԫ��
    {
        printf("%5d", a[i]); // �������Ԫ�أ���ʽ��Ϊ5���ַ����
    }
    printf("\n"); // ������з�

    // �����û�����һ������
    printf("insert data:");
    scanf("%d", &number); // ���û������ȡһ���������洢��number������

    // ��ȡԭ����a�����һ��Ԫ��ֵ
    end = a[9];

    // ����û���������Ƿ����ԭ��������ֵ
    if (number > end)
    {
        // ����������ֵ����Ѹ�����ӵ�����ĵ�11��λ��
        a[10] = number;
    }
    else
    {
        // ������ԭ�������ҵ��ʵ���λ�ò������
        for (i = 0; i < 10; i++) // ��������aѰ�Ҳ���λ��
        {
            // ���ҵ���һ������number��Ԫ��ʱ����ʼ�������
            if (a[i] > number)
            {
                // �Ƚ���ǰԪ�ص�ֵ�ݴ浽temp1
                temp1 = a[i];

                // ��number���뵽��ǰλ��
                a[i] = number;

                // ����ǰλ�ú��������Ԫ���������ƶ�һλ
                for (j = i + 1; j < 11; j++) // �ƶ�Ԫ��ѭ��
                {
                    // ����һ��Ԫ�ص�ֵ�ݴ浽temp2��Ȼ��temp1��ֵд�뵱ǰjλ��
                    temp2 = a[j];
                    a[j] = temp1;

                    // ����temp1Ϊ�ո��ݴ��temp2��ֵ��׼��������һ��Ԫ��
                    temp1 = temp2;
                }

                // �ҵ�����λ�ú������ڲ�ѭ��
                break;
            }
        }
    }

    // ���������Ԫ�غ������a
    printf("Now array a:\n");
    // ����������������Ԫ�ص�����a
    for (i = 0; i < 11; i++)
    {
        printf("%5d", a[i]); // �������Ԫ�أ���ʽ��Ϊ5���ַ����
    }
    printf("\n"); // ������з�

    // ����������0����ʾ����ִ�гɹ�
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