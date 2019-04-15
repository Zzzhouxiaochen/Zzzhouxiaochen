#include<stdio.h>
#include<stdlib.h>



typedef int DataType;

typedef struct SeqList
{
	DataType* array; // ����˳�������ЧԪ�ظ��� 
	int capacity; // �ռ��ܴ�С 
	int size; // ��ЧԪ�ظ��� 
}SeqList, *PSeqList;

void SeqListInit(PSeqList ps)
{

	// ���ٿռ�
	// �������� �� size
	ps->capacity = 10;
	ps->array= (int *)malloc(sizeof(DataType)* ps->capacity);
	ps->size = 0;
}


void SeqListDestroy(PSeqList ps)
{
	free(ps->array);
	ps->capacity = 0;
	ps->size = 0;

}
// β�� 
void SeqListPushBack(PSeqList ps, DataType data)
{
	ps->array[ps->size] = data;
	ps->size++;
}
// βɾ 
void SeqListPopBack(PSeqList ps)
{
	ps->size--;
}
// ͷ�� 
void SeqListPushFront(PSeqList ps, DataType data)
{
	for (int i = ps->size; i >= 1; i--)  //i�ǿռ��±�
	{
		ps->array[i] = ps->array[i - 1];
	}
	ps->array[0] = data;
	ps->size++;
}
// ͷɾ 
void SeqListPopFront(PSeqList ps)
{
	for (int i = 1; i <= ps->size-1; i++)  //i�ǿռ��±�
	{
		ps->array[i] = ps->array[i + 1];
	}
	ps->size--;
}

// ����λ�ò��� 
void SeqListInsert(PSeqList ps, int pos, DataType data)
{
	if (pos < 0 || pos >= ps->size)
	{
		printf("������λ�ò�����\n");
	}
	else
	{
		for (int i = ps->size; i >= pos; i--)  //i�ռ��±�
		{
			ps->array[i] = ps->array[i - 1];
		}
		ps->array[pos] = data;
		ps->size++;
	}

}

// ����λ��ɾ�� 
void SeqListErase(PSeqList ps, int pos)
{
	for (int i = pos+1; i <= ps->size; i++)  //i�ռ��±�
	{
		ps->array[i - 1] = ps->array[i];
	}
	ps->size--;
}

// ���data�ͷ���˳����� 
int SeqListFind(PSeqList ps, DataType data)   //i�ռ��±�
{
	for (int i = 1; i <= ps->size; i++)
	{
		if (ps->array[i - 1] == data)
		{
			return 1;
		}
	}
}
// �Ƴ�˳����е�һ��ֵΪdata��Ԫ�� 
void SeqListRemove(PSeqList ps, DataType data)   //i�ռ��±�
{
	for (int i = 1; i <= ps->size; i++)
	{
		if (ps->array[i - 1] == data)
		{
			ps->array[i - 1] = ps->array[i];
			ps->size--;
			break;
		}
	}
}
// �Ƴ�˳���������ֵΪdata��Ԫ�� 
void SeqListRemoveAll(PSeqList ps, DataType data)   //i�ռ��±�
{
	while (1)
	{
		for (int i = 1; i <= ps->size; i++)
		{
			if (ps->array[i - 1] == data)
			{
				ps->array[i - 1] = ps->array[i];
				ps->size--;
				continue;
			}
		}
	}
}
// ��ȡ˳�����ЧԪ�ظ��� 
int SeqListSize(PSeqList ps)   //i�ռ��±�
{
	return ps->size;
}
// ��ȡ˳�������� 
int SeqListCapacity(PSeqList ps)   //i�ռ��±�
{
	return ps->capacity;
}
// ���˳����Ƿ�Ϊ�� 
int SeqListEmpty(PSeqList ps)   //i�ռ��±�
{
	if (ps->size == 0)
		return 0;
}
// ��ȡ˳����е�һ��Ԫ�� 
DataType SeqListFront(PSeqList ps)  //i�ռ��±�
{
	return ps->array[0];
}
// ��ȡ˳��������һ��Ԫ�� 
DataType SeqListBack(PSeqList ps)   //i�ռ��±�
{
	return ps->array[ps->size - 1];
}
