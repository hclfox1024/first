#include<stdio.h>
int main()
{
//变量,先定义，再赋值。
//变量只能存一个值，变量名不允许重复定义，一条语句中可以有多个变量，
// 变量在使用之前一定要进行赋值，变量的作用域范围一定要知道
	//int a = 10;
	//int b = 20;
	//printf("%d\n", a + b);
	//int c;
	//c = 100;
	//int d;
	//d = 2;
	//printf("%d", c + d);
	int blood = 100;
	int skill = 80;
	int reve = 60;
	printf("剩余血量为%d",blood-skill+reve);
}