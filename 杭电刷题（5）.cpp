#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		cout << a + b << endl << endl;
	}
	system("pause");
	return 0;  //exit(0)正常退出  1是异常退出
}