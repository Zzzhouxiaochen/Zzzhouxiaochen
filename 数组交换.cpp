#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr1[] = { 1, 2, 3 }, arr2[] = { 4, 5, 6 }, i, t;
	for (i = 0; i < 3; i++)
	{
		t = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = t;
	}
	printf("new arr1=");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("new arr2=");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}