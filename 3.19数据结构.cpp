//pos�ĺ������
void houmian()
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->next = v;
	node->next = pos->next;
	pos->next = node;
}


//����           
//ɾ�����������е�V ֵ

if (head == NULL)
{
	return;
}
Node* cur = p->First;
while (cur->next->value != NULL)
{
	if (cur->next->value == V)
	{
		struct ListNode* next = cur->next->next;
		free(cur->next);
		cur->next = next;
	}
	else
	{
		cur = cur->next;
	}
}
if (head->V == V)
{
	Node* newhead = head->next;
	freee(head);
	return newhead;
}

//��ת����**
//����ָ��ʵ��
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
//������м�㣺���ÿ���ָ��  ˫ָ����� *


//�ҵ�����k���ڵ㣺�����ڵ� ͬһλ�� һ��ǰ��k��  ������ͬʱ�� Զ�ĵ��Ǹ���NULL ���ľ��ҵ���



//�ϲ�������������**
1->2->3,2->3->4
�ϲ���1->1->2->2->3->4


struct ListNode* hebing(sttuct ListNode* L1, sttuct ListNode* L2)  
{
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

};

//�ֳɴ���С��


//ɾ��ȫ���ظ��Ľڵ�



//����