#include <iostream>

using namespace std;

int main()
{
	int a, b, n;
	int f[50];
	while (cin >> a >> b >> n)
	{
		if (a == 0 && b == 0 && n == 0)break;

		if (n == 1 || n == 2)
		{
			cout << "1" << endl;
			continue;
		}
		//给f[1]=1,f[2]=1
		for (int j = 1; j<3; j++)
		{
			f[j] = 1;
		}
		//大于3的n,执行该循环，n%49求出n在周期内的数
		for (int i = 3; i <= n % 49; i++)
		{
			f[i] = (a*f[i - 1] + b*f[i - 2]) % 7;

		}
		cout << f[n % 49] << endl;
	}
	return 0;
}
