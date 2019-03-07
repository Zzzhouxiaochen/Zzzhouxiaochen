#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void move(char x,char y)
{
	printf("%c-->%c\n", x, y);
}

void hanoi(int n, char one, char two, char three)  //n个盘子借助第二座移到第三座
{
	if (n == 1)move(one, three);
	else
	{

		hanoi(n - 1, one, three, two);//递归  要借助第三个才可以将第一个移到第二个，不断减1 到从两个开始
		move(one, three);
		hanoi(n - 1, two,one,three);//递归
	}
}
int main()
{
	int m;
	printf("请输入盘子数目：");
	scanf("%d", &m);
	printf("%d个盘子移动方案：", m);
	hanoi(m, 'A', 'B', 'C');
	system("pause");
	return 0;
}