#include<iostream>  
using namespace std;
#include<string.h>  

int main()
{
	int t, i, j, sum, a, n, l, r, max, z;
	cin >> t;
	for (i = 0; i<t; i++)
	{
		cin >> n;
		for (z = l = 0, r = 0, sum = 0, max = -1001, j = 0; j<n; j++)
		{
			cin >> a;
			sum += a;
			if (max<sum)
			{
				l = z;
				r = j;
				max = sum;
			}
			if (sum<0)
			{
				z = j + 1;
				sum = 0;
			}
		}
		cout << "Case " << i + 1 << ":\n" << max << " " << l + 1 << " " << r + 1 << endl;
		if (i<t - 1)
			cout << endl;
	}
}

