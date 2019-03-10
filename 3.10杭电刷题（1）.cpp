#include<iostream>
#include<string>
using namespace std;

int main(void){
	char a[1000], b[1000];
	int a_int[1001], b_int[1001];
	int t, a_len, b_len, max_len;
	//t判断case次数
	cin >> t;
	for (int i = 1; i <= t; i++){
		cin >> a >> b;
		//计算两个数组实际长度
		a_len = strlen(a);
		b_len = strlen(b);

		int tmp = 0;

		//将字符数组值反向存入整形数组,输入的数字的个位数在a_int[0]
		for (int j = a_len - 1; j >= 0; j--)
		{
			a_int[tmp++] = a[j] - '0';

		}

		tmp = 0;
		for (int k = b_len - 1; k >= 0; k--){
			b_int[tmp++] = b[k] - '0';
		}

		///将两数组用0填充使其位数相等,他们填充后的位数是最大位数加1，而不是只到最大位数，这是为了后面计算方便
		if (a_len>b_len)
		{
			for (int j = b_len; j <= a_len; j++){
				b_int[j] = 0;
			}
			a_int[a_len] = 0;

		}
		else if (a_len<b_len){

			for (int j = a_len; j <= b_len; j++)
			{
				a_int[j] = 0;
			}
			b_int[b_len] = 0;

		}
		else{//当两个位数一样时，都留出1位给进位
			a_int[a_len] = 0;
			b_int[b_len] = 0;
		}
		//求和，最后保存到a_int里面
		max_len = (a_len >= b_len) ? a_len : b_len;
		for (int j = 0; j <= max_len; j++){
			a_int[j] += b_int[j];
			if (a_int[j] >= 10)
			{
				a_int[j] -= 10;
				a_int[j + 1] += 1;
			}
		}

		cout << "Case " << i << ":" << endl;
		cout << a << " " << "+" << " " << b << " " << "=" << " ";
		//判断最高位是否有进位，有就输出
		if (a_int[max_len] == 0){
			for (int j = max_len - 1; j >= 0; j--)
				cout << a_int[j];
		}
		else{
			for (int j = max_len; j >= 0; j--)
				cout << a_int[j];
		}

		if (i != t)
			cout << endl << endl;
		else
			cout << endl;

	}
}
