#include<stdio.h>

int main() 
{
	//数据类型
	//1.整数short,int,long,long long四种

	//short 短整型 占两个字节 
	short a = 10;
	printf("%d\n", a);

	//int 整形 占四个字节  
	int b = 100;
	printf("%d\n", b);

	//long 长整型 在Windows中占四个字节
	//            在Linux中32位占四个字节  64位占八个字节
	long c = 1000L;
	printf("%ld\n", c);

	//long long(c99) 超长整形 Windows中占八个字节（19）位数
	long long d = 10000LL;
	printf("%lld\n", d);

	//有符号整数、无符号整数的定义情况
	//signed有符号整数 正数、负数
	//unsigned无符号整数 正数
	signed int e = -30;
	printf("%d\n", e);
	unsigned int f = 50;
	printf("%u\n", f);
	
	//小数float,double
	//float 单精度小数， 精确度小数点后6位， Windows中占4个字节（38位）
	float g = 0.1F;
	printf("%.2f\n", g);
	//double 双精度小数，精确度小数点后15位，windows中占8个字节 （308位）
	double h = 3.1415926;
	printf("%lf\n", h);

	//long double 高精度小数（精确度小数后18-19位） windows中占8个字节
	long double i = 3.1415926535L;
	printf("%.3lf\n", i);
	//char 字符 取值范围ASCII中的所有内容 windows中占用一个字节
	char a1 = 'a';
	printf("%c\n", a1);
	//字符串的定义
	//char str[占用内存的大小]；
	//内存大小的计算方式，一个字母，符号，数字占用一个字节
	//中文：在vs中默认情况下，一个中文占两个字节
	//结束标记占一个字节
	char str[4] = "aaa";
	printf("%s\n", str);

	//用sizeof测量每一种数据类型占用多少字节
	printf("%zu\n", sizeof(long));
	printf("%zu\n", sizeof(c));

	//键盘录入 1.定义一个变量
	int b1;
	scanf("%d", &b1);
	printf("%d\n", b1);
	return 0;
}