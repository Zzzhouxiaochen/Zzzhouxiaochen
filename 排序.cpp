#include<stdlib.h>
#include<stdio.h>
/*

�����㷨��
	��������
		ֱ�Ӳ�������
		ϣ������
	ѡ������
		ѡ������
		������
	��������
		ð������
		��������
	�鲢����
		�鲢����


��������
	���˿�

*/


//ֱ�Ӳ���   ��
//ʱ�临�Ӷ�---O(n^2)   �O(n^2)  ƽ��O(n^2)  ���O(n)
//�ռ�O(1)
//�ȶ���---�ȶ�


void InsertSort(int array[], int size)
{
	for (int i = 1; i < size; i++)
	{
		int j;
		int k = array[i];
		//Ϊarray[i]��λ��
		for (j = i-1; j >= 0; j--)
		{
			if (array[j] <= k)  // 1 2 3       //array[j]>=k   ������  3 2 1  
			{
				break;
				
			}
			else
			{
				array[j + 1] = array[j];
			}
		}
		array[j + 1] = k;

	}
}

//ֱ�Ӳ��Ų���
int main()
{
	int array[] = { 9,4,3,8,5,7 };
	InsertSort(array, 6);
	for (int i = 0; i <= 5; i++)
	{
		printf("%2d", array[i]);
	}
	system("pause");
	return 0;
}




//ϣ��������С��������  ���� ��С ��1 ��ֹͣ
//ʱ�临�Ӷ�---O(n^1.3-n^2)  �ռ临�Ӷ�O(1)
//�ȶ��ԣ����ȶ�
//��õ�gap(���)  ��  gap / 3 + 1;

int gap = size;
gap = gap / 3 + 1;

void InsertSortWithGap(int array[], int size,int gap)
{
	for (int i = gap; i < size; i++)
	{
		int j;
		int k = array[i];

		//Ϊarray[i]��λ��
		for (j = i - gap; j >= 0; j-=gap)
		{
			if (array[j] <= k)  // 1 2 3       //array[j]>=k   ������  3 2 1  
			{
				break;

			}
			else
			{
				array[j + gap] = array[j];
			}
		}
		array[j + gap] = k;

	}
}



//ֱ��ѡ������
//ÿ��ѡ��С����
//ʱ�临�Ӷ�O(n^2)
//�ȶ������ȶ�
void SelectSort(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int min = i;  //��С�±�
		for (int j = i+1; j < size-i; j++)
		{
			if (array[j] < array[min])
				min = j;
		}


		//������С���������ʵ�λ����ȥ
		Swap(array + min, array + i);
	}
}

void Swap(int* a, int* b)  //��������
{
	int t = *a;
	*a = *b;
	*b = t;
}

//������
//һ���ҵ������С��
//ʱ�临�Ӷ�O(n^2)
void SelectSortOP(int array[], int size)
{
	int minSpace = 0;  //�������ҵĵ���С�����±�
	int maxSpace = size - 1; //�������ҵ��������С��
	while (minSpace < maxSpace)
	{
		int min = minSpace;//������С������С��minSpace
		int max = maxSpace;//������������С��minSpace
		for (int i = minSpace+1; i <= maxSpace; i++)
		{
			if (array[i] < array[min])
				i = min;
			if (array[i]>array[max])
				max = i;
		}

		Swap(array + min, array + minSpace);
		if (minSpace == max)
		{
			max = min;
		}
		Swap(array + max, array + maxSpace);

		minSpace++;
		maxSpace--;
	}

}

//ð������ 
//ʱ�临�Ӷ�---���O(n),���ƽ��O(n^2) �ȶ�
void BubbleSort(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (array[j]>array[j + 1])
			{
				int t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
			}
		}
	}
}


//�����
void Creatheap(int array[], int size)
{
	for (int i = (size - 2) / 2; i >= 0; i--)
	{
		AdjustDown(array, size, i);
	}
}

//������
//���ȶ�
//ʱ�临�Ӷ� n*logn
//�ռ� O(1)
void HeapSort(int array[],int size)
{
	//�����
	Creatheap;
	
	for (int  i = 0; i < size-1; i++)
	{
		Swap(&array[0], array + size - 1 - i);
		//���µ������Ѷѽṹ������ȷ״̬
		AdjustDown(array, size-1- i,0);
	}

}


void AdjustDown(int array[], int size, int root)
{
	while (1)
	{

		//�ж�root�Ƿ���Ҷ�ӽڵ�
		//��Ϊ������ȫ������ ��û������һ��û���к���
		//����˳��洢���ҵ����ӵ��±꣬��������±�Խ�磬��û������
		int left = 2 * root + 1;
		if (left >= size)  //��Ҫ©������
		{
			//��Ҷ�ӽ��
			return;
		}

		//�ҵ����Һ�������С��һ��
		//����һ�������ӣ��ж��Ƿ����Һ���
		int right = 2 * root + 2;
		int min = left;
		if (right < size  //���Һ���
			&&array[right] < array[left])  //�Һ���ֵС������
			//&& array[right] > array[left])  //���
		{
			min = right;
		}

		//�Ƚ�array[min]  array[root]
		if (array[min] <= array[root])
			//if (array[min] >= array[root])  //���
		{
			return;
		}

		//����
		int t = array[root];
		array[min] = array[root];
		array[min] = t;

		//�������µ�������min��Ϊ���

		AdjustDown(array, size, min);
	}
}


/*

��������---ʱ�临�Ӷ�   O(n*(log n  ~~n))
1.ѡ��һ����׼ֵ
		���巽����
			1.ѡ���������ұߵ�array[right]
			2.����ȡ��
			mid=(left+right)/2
			array[left]��array[mid]��array[right]
			ѡ���С���м��һ������Ϊ��׼ֵ
			ѡ���׼ֵ֮�󣬻��ǰѻ�׼ֵ���������Ҳ�/��� ��Pariton
			3.�������
2.�����������䣬��һЩ���ݽ������ﵽЧ��
	�Ȼ�׼ֵС�����ŵ���׼ֵ���
	�Ȼ�׼ֵ������ŵ���׼ֵ�Ҳ�

3.�����㷨
	��һ������������ͬ����С����
	[left right]
	-->
	[left div - 1]    [ div+1   right ]

4.�����㷨�õݹ�(���߷ǵݹ�)
	��ֹ����
		�����������ֳ�����С����û����  �ֳ�������size==0
				  �ֳ�����С��������ʲô������򣿾��������size=1��

 */


// Partion 
//ʱ�临�Ӷ� ��á�ƽ��O(n*log(n))  �  O(n^2)
//�ռ临�Ӷ� ��á�ƽ��O(log(n))  �  O(n)
//���ȶ�

//���ַ�ʽ��hover��   �ڿӷ�    ǰ���±�


//hover�� 
int Parition_1(int array[], int left, int right)//left  right  ��������±�
{
	int begin = left;
	int end = right;
	//��׼ֵ��array[right]

	while (begin < end)
	{	//���������
		while (begin < end&&array[begin] <= array[right])
		{
			begin++;
		}
		
		//��ס��
		//���ұ�

		while (begin < end&&array[end] >= array[right])
		{
			end++;
		}
		//�ұ�Ҳ��ס��

		//������ǰ��ֵ
		Swap(array + begin, array + end);
	}

	//���䱻�ֳ�С���󣬻�׼
	Swap(array + begin, array + right);

	//���ص�ǰ��׼ֵ
	return array[right];
}

//�ڿӷ�  ʱ�临�Ӷ� O(1)
int Parition_2(int array[], int left, int right)//left  right  ��������±�
{
	int begin = left;
	int end = right;
	int pivot = array[right];  //��׼ֵ

	while (begin < end)
	{	//���������
		while (begin < end&&array[begin] <= pivot)
		{
			begin++;
		}
		//��ס��,���
		array[end] = array[begin];

		//���ұ�
		while (begin < end&&array[end] >= pivot)
		{
			end++;
		}
		//�ұ�Ҳ��ס��
		array[begin] = array[end];

	}

	//���䱻�ֳ�С���󣬻�׼
	Swap(array + begin, array+right);

	//���ص�ǰ��׼ֵ
	return array[right];

}

//ǰ���±�
int Parition_3(int array[], int left, int right)//left  right  ��������±�
{
	int i = left;
	int d = left;

	while (i!=right)
	{	//i����
		while (array[i]>=array[right])
		{
			i++;
		}
		
		//����array[i],array[d]
		Swap(array + d, array+i);
		i++;
		d++;
	}

	Swap(array + d, array + i);

	//���ص�ǰ��׼ֵ
	return array[right];

	/*

	//forѭ����

	for (int i = left; i < right; i++)
	{
		if (array[i] < array[right])
		{
			Swap(array + d, array + i);
			d++;
		}
	}
	Swap(array + d, array + i);

	//���ص�ǰ��׼ֵ
	return array[right];
	*/
}



//�ռ临�Ӷ�  log n --- n
//�ݹ���õ���� ���������ĸ߶ȣ�
void __QuickSort(int array[], int left,int right)  
{ //�������ұ�Ϊ��׼
	//��ֹ���� size==1 ||  size ==0
	//left==right  ʣ��һ����
	//left>right  ������û����
	if (left == right)
	{
		return;
	}

	if (left == right)
	{
		return;
	}

	/*
	ѡ������ȡ��
	int pivot_index = PickMid(array, left, right);
	Swap(array + pivot_index, array + right);
	*/

	//  ��׼ֵ�����±� 
	int div; //  �Ȼ�׼ֵС�����ŵ���׼ֵ���     �Ȼ�׼ֵ������ŵ���׼ֵ�Ҳ�
	div = Parition_1( array, left, right);  //����array[left,right]����С�ķ��󣬴�ķ��ұ�

	//���ƶ�������ǰ�����
	__QuickSort(array, left, div - 1);  //�����㷨
	__QuickSort(array, div + 1, right);
}

//����ȡ�з��������غ��ʵ��±�
int PickMid(int array[], int left, int right)
{
	int mid = (left + right) / 2;
	if (array[left] > array[right] && array[left] > array[mid])
	{
		if (array[mid] > array[right])
		{
			return mid;
		}
		else
		{
			return right;
		}
	}
	else if(array[mid] > array[right])
	{
		if (array[left] > array[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
	else
		if (array[mid] > array[left])
		{
			return mid;
		}
		else
		{
			return left;
		}
	}
}



void QuickSort(int array[], int size)
{
	__QuickSort(array, 0, size - 1);
	
}

#include<stack>
//���ŷǵݹ�д���������ڴ�Ĳ��裬��Ҫ��ջʵ��
void __QuickSortNor(int array[], int left, int right)
{
	std::stack<int> s;
	s.push(right);
	s.push(left);
	
	int _left;
	int _right;

	while (!s.empty())
	{
		_left = s.top;
		s.pop;
		_right = s.top;
		s.pop;

		if (_left >= _right)
		{
			continue;
		}

	}
	int d = Parition_2(array, _left, _right);

	//d + 1  right
	s.push(right);
	s.push(d + 1);

	//_left  d-1
	s.push(d - 1);
	s.push(_left);
}

/*

�鲢���򣨺ϲ�����
ʱ�临�Ӷ�  ���|ƽ��|�  O(n*log(n))
�ռ临�Ӷ� O(n)
�ȶ�
�ⲿ���򣨿��Զ�Ӳ���ϵ����ݽ��й鲢��

�ݹ飺
���������������򣬷����㷨�������򣬺ϲ�
����������ҿ� array[left,mid) array[mid,right)
�ǵݹ飺
�� 1 vs 1---> 2 vs 2 --> 4 vs 4....

*/
void __MergeSort(int array[], int left, int right,int* extra)
{
	if (right == left + 1)
	{
		//ʣ��һ����������
		return;
	}
	if (left >= right)
	{
		//����û����
		return;
	}

	int mid = left + (right - left) / 2;
	//����ֳ���������С����
	//[left,min)
	//[mind,right)
	//�Ȱ�����С����������򣬷����㷨���ݹ���
	__MergeSort(array, left, mid,extra);
	__MergeSort(array, mid, right,extra);

	//����С�����Ѿ�����
	//�ϲ���������
	Merge(array, left, mid, right,extra);
}


//�ϲ���������
//array[left,mid)
//array[mid,right)
//ʱ�临�Ӷ� O(n)  
//�ռ临�Ӷ� O(n)
void Merge(int array[], int left,int mid, int right,int* extra)
{
	//��Ҫһ������Ŀռ�ȥʵ��
	int size = right-left;
	//int* extra = (int*)malloc(sizeof(int)* size);

	int left_index = left;
	int right_index = mid;
	int extra_index = 0;

	while (left_index < mid&&right_index < right)
	{
		if (array[left_index] <= array[right_index])
		{
			extra[extra_index] = array[left_index];
			left_index++;
		}
		else
		{
			extra[extra_index] = array[right_index];
			right_index++;
		}
		extra_index++;
	}

	while (left_index < mid)
	{
		extra[extra_index++]=array[left_index];
	}

	while (right_index < mid)
	{
		extra[extra_index++] = array[right_index];
	}

	for (int i = 0; i < size; i++)
	{
		array[left + i] = extra_index[i];
	}
	//free(extra);

}

//����һ�ݿռ� ���Ч��
void MergeSort(int array[],int size)
{
	int* extra = (int*)malloc(sizeof(int)* size);
	__MergeSort(array, 0, size, extra);
	free(extra);
}


void MergeSort(int array[], int size)
{
	int* extra = (int*)malloc(sizeof(int)* size);
	__MergeSort(array, 0, size,extra);
	free(extra);
}



//�ϲ����� �ǵݹ�д��
void MergeSortNor(int array[], int size)
{
	int* extra = (int*)malloc(sizeof(int)* size);
	for (int i = 1; i < size;i*=2)
	{
		for (int j = 0; j < size; j +=2i)
		{
			int left = j;
			int mid = left + i;
			if (mid >= size)
				continue;
			int right = mid + i;
			if (right >= size)
				right=size;
			Merge(array, left, right, extra);
		}
	}
	free(extra);
}