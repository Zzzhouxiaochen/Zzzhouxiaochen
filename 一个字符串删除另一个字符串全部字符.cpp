

#include<iostream>
using namespace std;

int swap1(int a[3])
{
	int temp;
	if (a[0]>a[1]) {
		temp = a[0];
	}
	else {
		temp = a[1];
	}

	if (temp>a[2]) {
		temp = a[2];
	}
	return temp;
}

int sum1(int a[], int n) {
	if (n <= 0) {
		return 0;
	}
	return (a[n - 1] + sum1(a, n - 1));
}

int c = 0;
int main() {
	int i = 0;
	int buf[3] = { 0 };
	int a[1024] = { 0 };
	//int n = 0;
	cout << "请输入组数：" << endl;
	//cin>>n>>endl;

	for (i = 0; i<2; i++) {
		for (int j = 0; j<3; j++) {
			cin >> buf[j];
			int c = swap1(buf);

		}
		a[i] = c;
	}
	int k;
	int b = sum1(a, k);

	system("pause");
	return b;
}



#include <iostream>
using namespace std;
#include<string.h>

void deleteOneChar(char* str, char toBeDelete)
{
	if (str == NULL)  return;
	int length = strlen(str);
	char* p = str;
	// 遍历str，删除和toBeDelete相等的字符
	for (int i = 0; str[i] != '\0'&&i<length; i++)
	{
		// 如果相等则用后面的元素进行覆盖
		if (str[i] == toBeDelete)
		{
			int j = i;
			for (; str[j] != '\0'&&j<length - 1; j++)
				str[j] = str[j + 1];
			str[j] = '\0';
		}
	}
	return;
}

void deleteChars1(char* str, const char* chars)
{
	if (str == NULL)
		return;
	if (chars == NULL)
		return;
	// 依次删除chars中的每一个元素
	for (int i = 0; i<strlen(chars); i++)
		deleteOneChar(str, chars[i]);
	return;
}


int main()
{


	char* str = "they are students";
	char* p = (char*)malloc((strlen(str) + 1)*sizeof(char));
	strcpy(p, str);
	const char*q = "aeiou";
	deleteChars1(p, q);
	cout << p << endl;


	free(p);
	p = NULL;

}
