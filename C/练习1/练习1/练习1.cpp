#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() 
{/*1.输入一个人的名字输出结果为，输入的名字为
* 2.输入年龄，输出结果位您的年龄为
*/
	/*char str1[7];
	scanf("%s",&str1);
	printf("您输入的名字为：%s\n", str1);

	int age;
	scanf("%d",&age);
	printf("您的年龄为：%d\n", age);*/
	double num1;
	double num2;
	double num3;
	//printf("请输入第一个数");
	//scanf("%d", &num1);
	//printf("请输入第2个数");
	//scanf("%d", &num2);	
	scanf("%lf %lf %lf", &num1, &num2, &num3);
	//printf("相加的结果位%d", num1 + num2);
	printf("立方体的面积为%.2f", num1 * num2 * num3);

	return 0;
}