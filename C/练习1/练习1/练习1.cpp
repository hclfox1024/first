#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() 
{/*1.����һ���˵�����������Ϊ�����������Ϊ
* 2.�������䣬������λ��������Ϊ
*/
	/*char str1[7];
	scanf("%s",&str1);
	printf("�����������Ϊ��%s\n", str1);

	int age;
	scanf("%d",&age);
	printf("��������Ϊ��%d\n", age);*/
	double num1;
	double num2;
	double num3;
	//printf("�������һ����");
	//scanf("%d", &num1);
	//printf("�������2����");
	//scanf("%d", &num2);	
	scanf("%lf %lf %lf", &num1, &num2, &num3);
	//printf("��ӵĽ��λ%d", num1 + num2);
	printf("����������Ϊ%.2f", num1 * num2 * num3);

	return 0;
}