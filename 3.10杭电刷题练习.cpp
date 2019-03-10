
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	long int a,b;
	long int sum;
	cin >> n;
	int m = 1;
	while ((n--)&&1<=n<=20)
	{
		cout << "case " << m << ":" << endl;
		cin >> a >> b;
		sum = a + b;
		cout << "a + b = " << " " << sum << endl;
		cout << endl;
		m++;	
	}
	system("pause");
	return 0;
}
