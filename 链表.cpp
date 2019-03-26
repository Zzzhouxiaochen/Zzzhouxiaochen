typedef struct Node    //���
{
	int data;
	struct Node* next;
}Node;

typedef struct Header   //ͷ���
{
	int length;
	struct Node* next; //ָ���һ��
}pHead;


pHead * creat() //��������
{
	pHead* ph = (pHead*)malloc(sizeof(pHead));  //����ռ�
	ph->length = 0;    //ͷ�ڵ��ʼ��
	ph->head = NULL;
	return ph;    //����ͷ�ڵ��ַ
}

int Size(pHead* ph)     //���б��С
{
	if (ph == NULL)
		return;
	return ph->length;
}

int Insert(pHead* ph,int pos,int v)   //����
{
	if (ph == NULL || pos<0 || pos>ph->length)  //�жϺ�����
		return;

	//����Ԫ��ʱ��Ҫ�ж�λ��
	Node* valu = (Node*)malloc(sizeof(Node));//����һ���µĽ����������
	valu->data = v;
	Node* cur = ph->next; //��ǰָ��ָ��ͷ�ڵ��next
	if (pos == 0)  //ͷ��   //λ���ж�
	{
		ph->next = valu;
		valu->next = cur;
	}
	else
	{
		for (int i = 1; i < pos; i++)  //Ѱ�Ҳ���λ�� ǰһ������next
		{
			cur = cur->next;
		}
		valu->next = cur->next;   //���빤��
		cur->next = valu;  
	}
	ph->length++;
	return 1;
}


Node* find(pHead* ph, int v)   //����
{
	if (ph == NULL)  //�п�
		return NULL;
	
	//��������Ԫ��
	Node* cur = ph->next;  //����next
	while (cur->next != NULL)
	{
		if (cur->data == v)
			return cur;
		cur = cur->next;
	}
	return NULL;
}


Node* del(pHead* ph,int v)
{
	if (ph == NULL)
		return NULL;
	Node* cur = find(ph, v);
	if (cur == NULL)
		return NULL;

	Node* pRe = ph->next;  //��ǰ�ڵ�
	Node* pCur = NULL;
	if (pRe->data == v)  //ͷɾ
	{
		ph->next = pRe->next;
		ph->length--;
		return pRe;
	}
	else
	{
		for (int i = 0; i < ph->length; i++) //��������
		{
			pCur = pRe->next;
			if (pCur->data == v)  //ɾ��
			{
				pRe->next = pCur->next;  //ɾ��
				ph->length--;
				return pCur;
			}
			pRe = pRe->next;
		}
	}
}


//����������������ͷ�
void Destory(pHead* ph)
{
	Node* pCur = ph->next;
	Node* pTemp;
	if (ph == NULL)
		return;
	while (pCur->next != NULL)
	{
		pTemp = pCur->next;
		free(pCur);
		pCur = pTemp;
	}
	ph->length = 0;
	ph->next = NULL;
}
