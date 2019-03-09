
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a, b,n;
	while (cin >> a >> b)
	{
		
		if (a == 0 || b == 0)
			break;
		cout << a + b << endl;
	}
	system("pause");
	return 0;
}