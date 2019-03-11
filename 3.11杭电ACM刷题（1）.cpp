
#include<iostream>

using namespace std;

int isok(int candy[], int N)

{

	int i, flag = 0;

	for (i = N - 1; i>0; i--)

	{

		if (candy[i] == candy[i - 1])

			flag++;

	}

	if (flag == N - 1)

		return 0;

	else

		return 1;

}



int main()

{

	int candy[100];

	int N;

	while (cin >> N)

	{

		if (N == 0) break;

		for (int i = 0; i<N; i++)

		{

			cin >> candy[i];

		}

		int n = 0, temp, i;

		while (isok(candy, N) == 1)

		{

			candy[0] = candy[0] / 2;

			temp = candy[0];

			for (i = N - 1; i >= 0; i--)

			{

				if (i == N - 1)

				{

					candy[i] = candy[i] / 2;

					candy[0] += candy[i];

					if (candy[0] % 2 != 0) candy[0]++;

				}

				else if (i == 0)

				{

					candy[i + 1] += temp;

					if (candy[i + 1] % 2 != 0) candy[i + 1]++;

				}

				else

				{

					candy[i] = candy[i] / 2;

					candy[i + 1] += candy[i];

					if (candy[i + 1] % 2 != 0) candy[i + 1]++;

				}

			}

			n++;

		}

		cout << n << " " << candy[0] << endl;

	}

	return 0;

}
