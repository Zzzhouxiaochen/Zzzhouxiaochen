typedef struct ListNode
{
	int value;
	struct ListNode *next;
}Node;


typedef struct SList {
	Node *first;	// Node *head;
}	SList;


//��ʼ��  
SList* s;
s->first = NULL;   


//����
//ͷ��
void tou(SList* s, int v)  //����ͷָ��  SList ����
{
	Node* node = (Node*)malloc(sizeof(Node)); //����������ռ�
	node->value = v;
	node->next = s->first;
	s->first= node;
}

//β��
void weicha(SList* s, int v)
{
	Node* node = (Node*)malloc(sizeof(Node));  //�����
	node->value = v;
	node->next = NULL;

	//�����һ����㣬��Ҫһ����㱣��ͷָ��  Ȼ��֤ͷָ��
	Node* cur = s->first;
	while (s->first != NULL)
		cur = cur->next;
	cur->next = node;  //����node ���
}
	
//�м����
void weicha(SList* s, int v, int i)
{
	Node* node = (Node*)malloc(sizeof(Node));  //�����

}




//��������
//ͷ��
void nizhi(SList* s)
{
	Node* cur =head;
	Node* pre = NULL;

	while (cur != NULL)
	{
		Node* next = cue->next;
		node->value = v;
		node->next = s->first;
		s->first = node;
	}
}