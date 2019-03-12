#include<iostream>
#include<stdlib.h>
using namespace std;

void change(int a[])
{
	int* temp;
	int i;
	temp = a;
	for (i = 0; i < 10; i++)
	{
		if (*temp < a[i])
		{
			temp = &a[i];
		}
	}
	cout << *temp << endl;
}

int main()
{
	cout << "请输入十个数：" << endl;
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	change(a);
	system("pause");
	return 0;
}