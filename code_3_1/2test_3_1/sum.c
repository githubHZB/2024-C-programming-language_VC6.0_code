#define  _CRT_SECURE_NO_WARNINGS                 //scanfΪ�ǰ�ȫ����������һ���춨�壬��ֹ����������
#include<stdio.h>                                //����һ������Ԥ����ָ��
int main()                                       //����������
{                                                //������ʼ
	int a,b,c,max;                               //������������֣�����a,b,c,maxΪ���ͱ���
	printf("please input a,b,c:\n");             //�����ʾ��Ϣ
	scanf("%d%d%d",&a,&b,&c);                    //��ȡ�û��������������
    max=a;                                       //��a��ֵ����max
	if(max<b)                                    //���b����max
	max=b;                                       //��b��ֵ����max
	if(max<c)                                    //���c����max
    max=c;                                       //��c��ֵ����max
	printf("The Iargest numder is %d\n", max);   //����������е������
	return 0;                                    //��������ֵΪ0
}                                                //��������

