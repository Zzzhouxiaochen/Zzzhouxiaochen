
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a, n, b;
	while (cin >> b)
	{
		while ((b--) && b != 0)
		{
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
		}
	}
	system("pause");
	return 0;
}
