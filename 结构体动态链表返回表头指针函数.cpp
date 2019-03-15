//这个是让p2指向最后一个地址，p1指向新开的内存的节点

int n; //n是节点个数
#define NULL 0
#define len sizeof(struct student)
#define st struct student
#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
#include<string.h>
struct student
{
	long num;
	float score;
	struct student *next;
};

struct student*creat(void)//无形参，不需要数据传递  实际返回的是链表的起始地址
{
	st* head;
	st *p1, *p2;
	n = 0;
	p1 = p2 = (st*)malloc(len);//开辟新单元 p1 p2C中是字符类型 强制转换成st类型
	scanf("%1d,%f", &p1->num, &p1->score);
	head = NULL;
	while (p1->num != 0)
	{
		n = n + 1;
		if (n == 1)head = p1;
		else p2->next = p1;
		p2 = p1;
		p1  = (st*)malloc(len);//开辟新单元
		scanf("%1d,%f", &p1->num, &p1->score);
	}
	p2->next = NULL;
	return(head);
}
int main()
{
	struct student a, b, c, *head, *p;
	a.num = 99101; a.score = 89.5;
	b.num = 99102; b.score = 19.5;
	c.num = 99103; c.score = 87;
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	p = head;
	do
	{
		printf("%1d %5.1f\n", p->num, p->score);
		p = p->next;
	} while (p != NULL);
	system("pause");
	return 0;

}