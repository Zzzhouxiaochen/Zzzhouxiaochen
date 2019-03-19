#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct stu
{
	int num;
	char name[20];
	float score[3];
}stu;
void prt(struct stu stu)
{
	printf("%d\n%s\n%f\n%f\n%f\n", stu.num, stu.name, stu.score[0], stu.score[1], stu.score[2]);
}
int main()
{
	strcpy(stu.name, "zhouzhou");
	stu.num = 123123;
	stu.score[0] = 100;
	stu.score[1] = 90;
	stu.score[2] = 80;
	prt(stu);
	system("pause");
	return 0;
}