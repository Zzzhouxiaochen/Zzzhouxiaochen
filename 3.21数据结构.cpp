
typedef struct Node
{
	int value;
	struct Node *next;
}Node;

//����ĺϲ�
Node * hebing(Node* 11,Node* 12)
if (11 == NULL)
	return 12;
if (12 == NULL)
	return 11;

ListNode* c1 = 11;
ListNode* c2 = 12;
struct ListNode* result = NULL;  //�����һ���ڵ��ַ   �Ƕ�����һ��������
//����return ��head��ַ  ���غ�ֻҪ�ĺ������λ���һ��
struct ListNode* tail = NULL;//��������һ���ڵ�
while (p1 != NULL&&p2 != NULL)
{
	if (p1->val <= c2->val)
	{
		//ȡ11����ڵ�
		if (tail == NULL)
		{
			result = tail = c1;
		}
		else
		{
			tail->next = c1;//�ڵ� �ȱ�ʾ��ָ���c1
			tail = c1; //c1��ֵ��tail
		}
		c1 = c1->next;
	}
	else
	{
		//ȡ12����ڵ�

	}
	if (c1 != NULL)
	{

		tail->next = c1;
	}
	else
	{
		tail->next = c2;
	}
}





//��������
struct Node* fanzhuan(Node *head)   //��ָ��
{
	Node* p1 = NULL;
	Node* p2 = head;
	Node* p3 = head->next;

	if (p2 != NULL)
	{
		Node* next = p2->next;

		p2->next = p1;
		p1 = p2;
		p2 = p3;
		if (p3 == NULL)
		{
			p3 = p3->next;
		}
	}

	return p1;
}


struct Node* fanzhuan(Node *head) //ͷɽͷ��
{
	Node* p1 = NULL;
	Node* p2 = head;

	if (p2 != NULL)
	{
		Node* p3 = p2->next;

		p2->next = p1;
		p1 = p2;
		p2 = p3;

	}
	return p1;

}

//head���б�ĵ�һ����㣬nodeҪ����Ľ��

//ͷ��
void toucha(Node* head, Node* node)
{
	node->next = head;
	head = node;
}

//ͷɾ
void toushan(Node* head, Node* node)
{
	head = head->next;
}
//β��
void weicha(Node* head, Node* node)
{

}

//βɾ
void weishan(Node* head, Node* node)
{

}



//�ж������б��Ƿ��ཻ
//�ж��ཻ��λ�ã����ཻ��






//�ж������Ƿ����
//����ָ����ٶȹ�ϵ�����һ������׷�������� ����Ȧ���
struct ListNode *fast = head;
struct ListNode *slow = head;
if (fast == slow)
{
	return ture;
}

//����ڵ�





//���Ƹ�������





//˳���ͷ��

typedef struct SeqList
{
	int *array;
	int size;
	int capacity;
}Seqlist;


void toucha(Seqlist* s, int y)
{
	s->array = (SeqList*)malloc(sizeof(SeqList));
	s->capacity = 100;

	int i;//i�������±�
	for (i = s->size; i >0 ; i--)
	{
		s->array[i ] = s->array[i-1];
		
	}
	s->array[0] = v;
	s->size++;



	if (s->size == s->capacity)
	{
		//�����¿ռ�
		int * newarray = (int*)malloc(sizeof(int)*s->capacity * 2);
		for (int i = 0; i < s->size; i++)
		{
			newarray[i] = s->array[i];
		}
		free(s->array);

		s->array = newarray;

		s->capacity = s->capacity * 2;
	}
}