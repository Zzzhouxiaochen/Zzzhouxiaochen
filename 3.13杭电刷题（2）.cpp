
#include<iostream>

using namespace std;



int main(){

	int T;//T�����ݣ����20��

	cin >> T;



	int maxSum[20];	//���ڴ�ÿһ������� ���20��

	int maxBegin[20];//���ڴ�ÿһ�����͵���ʼλ��

	int maxEnd[20];//���ڴ�ÿһ�����͵���ֹΪֹ



	for (int i = 0; i < T; i++){//�ֱ���ÿһ������ݵ�����ͼ���

		int N;

		cin >> N;//ÿһ��N����

		int *number = new int[N];

		//int number[100000];//���ڱ���N������N<=10w

		for (int j = 0; j < N; j++){//����N����

			cin >> number[j];

		}



		maxSum[i] = 0;//��ʼ��

		maxBegin[i] = 0;

		maxEnd[i] = 0;



		for (int begin = 0; begin < N; begin++){//��ʼλ�ôӵ�һ�������������һ����

			int tempSum = 0;//ÿһ�θ�����ʼλ�þͳ�ʼ��tempSum

			for (int end = begin; end < N; end++){//ĩ�˴���ʼλ�ñ��������һ����

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
