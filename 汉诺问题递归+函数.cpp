#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void move(char x,char y)
{
	printf("%c-->%c\n", x, y);
}

void hanoi(int n, char one, char two, char three)  //n�����ӽ����ڶ����Ƶ�������
{
	if (n == 1)move(one, three);
	else
	{

		hanoi(n - 1, one, three, two);//�ݹ�  Ҫ�����������ſ��Խ���һ���Ƶ��ڶ��������ϼ�1 ����������ʼ
		move(one, three);
		hanoi(n - 1, two,one,three);//�ݹ�
	}
}
int main()
{
	int m;
	printf("������������Ŀ��");
	scanf("%d", &m);
	printf("%d�������ƶ�������", m);
	hanoi(m, 'A', 'B', 'C');
	system("pause");
	return 0;
}