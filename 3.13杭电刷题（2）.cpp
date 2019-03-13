
#include<iostream>

using namespace std;



int main(){

	int T;//T组数据，最多20组

	cin >> T;



	int maxSum[20];	//用于存每一组的最大和 最多20组

	int maxBegin[20];//用于存每一组最大和的起始位置

	int maxEnd[20];//用于存每一组最大和的终止为止



	for (int i = 0; i < T; i++){//分别处理每一组的数据的输入和计算

		int N;

		cin >> N;//每一组N个数

		int *number = new int[N];

		//int number[100000];//用于保存N个数，N<=10w

		for (int j = 0; j < N; j++){//输入N个数

			cin >> number[j];

		}



		maxSum[i] = 0;//初始化

		maxBegin[i] = 0;

		maxEnd[i] = 0;



		for (int begin = 0; begin < N; begin++){//起始位置从第一个数遍历到最后一个数

			int tempSum = 0;//每一次更换初始位置就初始化tempSum

			for (int end = begin; end < N; end++){//末端从起始位置遍历到最后一个数

				tempSum += number[end];

				if (tempSum>maxSum[i]){

					maxSum[i] = tempSum;

					maxBegin[i] = begin;

					maxEnd[i] = end;

				}

			}

		}

		delete[]number;

	}



	for (int i = 0; i < T; i++){

		cout << "Case " << i + 1 << ":" << endl;

		cout << maxSum[i] << " " << maxBegin[i] + 1 << " " << maxEnd[i] + 1 << endl;

		if (i != T - 1)

			cout << endl;

	}



	cin.get();

	cin.get();

	return 0;

}
