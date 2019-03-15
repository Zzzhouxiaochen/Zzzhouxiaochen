#define NULL 0
#include<stdlib.h>
#include<stdio.h>

struct student
{
	long num;
	float score;
	struct student *next;
};
int main()
{
	struct student a, b, c, *head, *p;
	a.num = 99101;a.score = 89.5;
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