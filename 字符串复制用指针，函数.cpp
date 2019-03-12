#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

void change(char a[], char b[])
{
	int i;
	char *p1, *p2;
	p1 = a; p2 = b;
	for (; *p1 != '\0'; p1++, p2++)
		*p2 = *p1;
	*p2 = '\0';
	for (i = 0; b[i] != '\0'; i++)
		printf("%c", b[i]);
} 

int main()
{
	char a[] = {"i am a boy!"};
	char b[100];
	change(a, b);
	system("pause");
	return 0;
}