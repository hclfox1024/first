#include<stdio.h>

int main() 
{
	//��������
	//1.����short,int,long,long long����

	//short ������ ռ�����ֽ� 
	short a = 10;
	printf("%d\n", a);

	//int ���� ռ�ĸ��ֽ�  
	int b = 100;
	printf("%d\n", b);

	//long ������ ��Windows��ռ�ĸ��ֽ�
	//            ��Linux��32λռ�ĸ��ֽ�  64λռ�˸��ֽ�
	long c = 1000L;
	printf("%ld\n", c);

	//long long(c99) �������� Windows��ռ�˸��ֽڣ�19��λ��
	long long d = 10000LL;
	printf("%lld\n", d);

	//�з����������޷��������Ķ������
	//signed�з������� ����������
	//unsigned�޷������� ����
	signed int e = -30;
	printf("%d\n", e);
	unsigned int f = 50;
	printf("%u\n", f);
	
	//С��float,double
	//float ������С���� ��ȷ��С�����6λ�� Windows��ռ4���ֽڣ�38λ��
	float g = 0.1F;
	printf("%.2f\n", g);
	//double ˫����С������ȷ��С�����15λ��windows��ռ8���ֽ� ��308λ��
	double h = 3.1415926;
	printf("%lf\n", h);

	//long double �߾���С������ȷ��С����18-19λ�� windows��ռ8���ֽ�
	long double i = 3.1415926535L;
	printf("%.3lf\n", i);
	//char �ַ� ȡֵ��ΧASCII�е��������� windows��ռ��һ���ֽ�
	char a1 = 'a';
	printf("%c\n", a1);
	//�ַ����Ķ���
	//char str[ռ���ڴ�Ĵ�С]��
	//�ڴ��С�ļ��㷽ʽ��һ����ĸ�����ţ�����ռ��һ���ֽ�
	//���ģ���vs��Ĭ������£�һ������ռ�����ֽ�
	//�������ռһ���ֽ�
	char str[4] = "aaa";
	printf("%s\n", str);

	//��sizeof����ÿһ����������ռ�ö����ֽ�
	printf("%zu\n", sizeof(long));
	printf("%zu\n", sizeof(c));

	//����¼�� 1.����һ������
	int b1;
	scanf("%d", &b1);
	printf("%d\n", b1);
	return 0;
}