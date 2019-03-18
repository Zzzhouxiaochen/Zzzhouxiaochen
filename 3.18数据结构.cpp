#pragma once

/*
// ��̬˳���˳����С�ǹ̶��ģ������ڼ�����ģ�д���ڴ������
typedef struct SeqList {
int array[100];	// ������ 100
int size;		// ˳������Ч���ݸ���
// ͬʱҲ��ʾ�Ӻ�����һ������λ�õ��±�
}	SeqList;

*/

typedef int SLDataType;

// ��̬˳����ڳ��������ڼ���Զ�̬���������Ĵ�С
typedef struct SeqList {
	SLDataType *array;		// ָ�� ���Ͽռ䣬�������
	int capacity;	// ����
	int size;		// ��Ч����
}	SeqList;

// �����б������б�

// ���� | ����
void SeqListInit(SeqList *pSeqList);

void SeqListDestroy(SeqList *pSeqList);

// �� ɾ �� ��
// β��
void SeqListPushBack(SeqList *pSeqList, SLDataType value);

// ͷ��
void SeqListPushFront(SeqList *pSeqList, SLDataType value);






void SeqListInit(SeqList *pSeqList) {
	// �������ݽ�������һ�������ĵ�ַ
	// �����ĵ�ַ�϶����� NULL
	assert(pSeqList != NULL);

	// ���ٿռ�
	// �������� �� size
	pSeqList->capacity = 10;
	pSeqList->array
		= (int *)malloc(sizeof(SLDataType)* pSeqList->capacity);
	pSeqList->size = 0;
}


void SeqListDestroy(SeqList *pSeqList) {
	assert(pSeqList);
	assert(pSeqList->array);
	free(pSeqList->array);

	pSeqList->array = NULL;
	pSeqList->capacity = 0;
	pSeqList->size = 0;
}

void SeqListPushBack(SeqList *pSeqList, SLDataType value) {
	pSeqList->array[pSeqList->size] = value;
	pSeqList->size++;
}


void SeqListPushFront(SeqList *pSeqList, SLDataType value) {
	// i �ǿռ���±�
	for (int i = pSeqList->size; i >= 1; i--) {
		pSeqList->array[i] = pSeqList->array[i - 1];
	}

	pSeqList->array[0] = value;
	pSeqList->size++;
}




void SeqListInsert(SeqListInsert *s, int pos, DT v)   //�м����
{
	for (int i = pSeqList->size; i >= pos; i--)
	{
		pSeqList->array[i] = pSeqList->array[i-1]; //i�ǿռ��±�
	}
	pSeqList->array[pos] = value;
	pSeqList->size++;  //���ӳ̶�O��n��
}

	SLDataType *array;		// ָ�� ���Ͽռ䣬�������
	int capacity;	// ����
	int size;		// ��Ч����
}	SeqList;

void SeqListPopBack() //βɾ
{
	array(pSeqList->size > 0);
	ps->size--;
}

void SeqListPophead()  //i�ǿռ��±�  //ͷɾ��
{
	for (int i = 0; i<= pSeqList->size-2; i++)
	{
		pSeqList->size[i] = pSeqList->size[i + 1];
	}
	pSeqList->size--;
}

void SeqListzhong()  //�����±�ɾ��
{
	for (int i = 0; i < pSeqList->size; i++)
	{
		pSeqList->array[i - 1] = pSeqList->array[i];
	}
	pSeqList->size--;
}

void SeqListcha()//����
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->array[i] = value)
			return array[i];
	}
}

void xiugai()
{
	assert(pos >= 0 && pos < ps->size);
	ps->array[pos] = value;
}


//����  ͨ�����ݴ�С��ƽ����С������

void kuorong()
{
	if (ps->size < ps->capacity)  //С������
		return;

	int newcapacity = ps->capacoty * 2;


}
int main() {
	SeqList	seqlist;

	SeqListInit(&seqlist);
}


int i, j;
for ( i = 0,j=0; i < ps->size; i++)
{
	if (ps->array[i] != value)
		ps->array[j = ps->array[i];
	j++;
}



//����  �ص�
//����Ĳ�������Ľṹ�� ����������һ���ڵ�Ľṹ��
typedef int SListDatatype;

typedef struct ListNode
{
	SListDatatype value; //�����ֵ
	struct List *next;//��һ���ڵ�Ľṹ��
}Node;

//��ַ{value,next}


typedef struct SList
{
	Node *first;    //node �ĵ�һ�����ݵĵ�ַ  first =NULL�������ǿյ�
}SList;

void SListInit(SList *s)    //��ʼ��
{
	assert(s != NULL);
	s->first = NULL;

}

void test()
{
	SList list;
	SListInit();

}
//ͷ��ͷɽ O1   β��βɾ On

//ͷ��   
void SListPushFrount(SList *s, SLDataType v)
{
	Node *node = (Node *)malloc(sizeof(Node)));
	node->value = v;
	node->next = node->first;
	node->first = node;

}

//β��
void weicha(SList *s, SLDataType v)
{  
	//����Ϊ�յ����
	if (s->first == NULL)
	{
		s->first = node;
		return;
	}
	
	//�����һ���ڵ�
	Node *cur = s->first;
	while (cur->next!=NULL)
	{
		cur = cur->next;
	}
	cur->next = node;//���һ���ڵ�һ��Ϊ��
}





void weicha(SList *s,SLDataType v)
{
	
	if (s->first == NULL)
		s->first = node;


	Node *cur = s->first;
	while (cur->next != NULL)
	{
		cur= cur->next;
	}

}


//ͷɾ
void toushan(SList *s)
{
	assert(s != NULL);
	assert(s->first != NULL);
	Node *next = s->first->next;
	free(s->first);
	s->first = next;
}


void weishan(SList* s)
{

	assert(s != NULL);
	assert(s->first != NULL);

	if (s->first->next == NULL)
		free(s->first);
	s->first = NULL; 
		return;

		Node *cur;
		for ( cur = s->first; cur->next->next!=NULL; cur++)
		{
			free(cur->next);
			cur->next = NULL;
		}

}


//˳�����ɾ�Ĳ� ͷɾ ͷ��  �м���� �м�ɾ��  ���� ʱ�临�Ӷ�   
//���� ͷ�� ͷɾ β�� β��ɾ��






