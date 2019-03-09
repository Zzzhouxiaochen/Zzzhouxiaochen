#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a, n;
	while ((cin >> n) && n != 0)
	{
		int sum = 0;
		while (n--)
		{
			cin >> a;
			sum += a;
		}
		cout << sum << endl;
	}
	system("pause");
	return 0;  //exit(0)正常退出  1是异常退出
}