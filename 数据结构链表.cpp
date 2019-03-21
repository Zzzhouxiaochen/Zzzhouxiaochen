//������
//����һ�����ݣ�����һ�����ݵĵ�ַ �������������һ����㣬ÿ��Ԫ�ض�����ˣ������ݵĵط���data���ŵ�ַ�ĵط���next
//����������ͷָ��Ψһȷ���� 
//�������£�
typedef struct node
{
	elemtype data; //����
	struct node *next;  //ָ��
}LNode,*LinkList;
LinkList H; //����ͷָ�� 
//ͷָ��ΪNULL  ��ʾ��������H==NULLΪ��  

//ͨ���ڵ�һ�����֮ǰ����ͷ��㣬ͷ�����������Բ�����κ����ݣ�Ҳ���Դ�Žڵ������Ϣ 
//���߱���H->next=NULLΪ�棬�ǿ��߱���H->nextָ����һ�����ĵ�ַ


//�����ڵ��������L == NULL          ���ڵ��L->next = NULL
//����ĵ�һ��Ԫ����Lָ��          ��һ��Ԫ����L->nextָ��
//��һ��Ԫ�صĲ���ɾ�� ��������ͬ    ����ɾ����ͳһ��
//
//���ڴ�ͷ���ĵ�����L
//L->next = NULL  ��ʾһ��������Ϊ������ ����Ϊ0��
//���ǿձ�����ͨ��ͷָ����ʽ綨�����ҵ���Ҫ���ʵ���Ϣ ���磺p = L->nextָ����еĵ�һ�����a1����p->data = a1;
//��p->next->data=a2
//������malloc������ʵ���ڴ�ռ䣺
//p = (LinkList)malloc(sizeof(LNode));
//free(p)ʵ���ͷ�



//������Ļ��������ʵ�֣�
//1.����������
//��1��ͷ�巨����������
//�����Ƕ�̬�洢�ģ���˽�������ӿձ�ʼ��û����һ����������һ����� Ȼ���������ͷ����

//�������£�
LinkList CreatFromHead()
{
	LinkList L;  //��������L
	LNode *s;
	char c;
	int flag = 1;//���������־λ  �ɣ��ͽ�������
	L = (LinkList)malloc(sizeof(LNode));//����洢�ռ�
	L->next = NULL;  //�����ʼ��
	while (flag)   //��־λ������
	{
		c = getchar();
		if (c != '��')
		{
			s = (LinkList)malloc(sizeof(LNode));//Ϊ�½������ݽ��з���洢�ռ�
			s->data = c;  //������ֵ
			s->next = L->next;//��s���뵽��һ��Ԫ��֮ǰ
			L->next = s;
		}
		else
			flag = 0;
	}
}


//β�������㽨��������
//����β�巽����������Ҫ��һ���µ�ָ��r ����ʼ��ָ������β��β���ڵ�
//�������£�

LinkList CreatFromHead()
{
	LinkList L;  //��������L
	LNode *s,*r;
	char c;
	int flag = 1;//���������־λ  �ɣ��ͽ�������
	L = (LinkList)malloc(sizeof(LNode));//����洢�ռ�
	L->next = NULL;  //�����ʼ��
	r = L;
	while (flag)   //��־λ������
	{
		c = getchar();
		if (c != '��')
		{
			s = (LinkList)malloc(sizeof(LNode));//Ϊ�½������ݽ��з���洢�ռ�
			s->data = c;  //������ֵ
			r->next = s; //β��
			r = s;// ����ָ�����һ�����

		}
		else
		{
			flag = 0;
			r->next = NULL;//����
		}
	}
	return L;
}
//ע�⣺L��r�Ĺ�ϵ L�ǵ�����,r��ָ��β�ڵ��ָ��




//��������
int ListLength(LinkList L)
{
	LinkList p;
	p = L;
	int j = 0;   //������ŵ�����ĳ���
	while (p->next!=NULL)
	{
		p = p->next;
		j++;
	}
	return j;
}
//ʱ�临�Ӷ�O(n)



//����
//�Ƿ��н��ֵΪe���أ����ҵ��������״��ҵ�ֵe�Ĵ洢��ַ������NULL;

LinkList Locate(LinkList L, char e)
{
	LinkList p;
	p = L->next;  //�ӵ�һ���Ƚ�
	while (p!=NULL&&p->data!=e)
	{
		p = p->next;
	}
	return p;
}//ʱ�临�Ӷ�O��n��

//������������
int InsList(LinkList L, int i, char e)
{
	LinkList pre, s;
	int k;
	pre = L; k = 0;
	while (pre!=NULL&&k=i-1)  //�ҵ���iԪ��  ʹָ��ָ����
	{
		pre = pre->next;
		k = k + 1;
	}
	if (k!=1)
	{
		printf("�������");
		return 0;
	}
	s = (LinkList)malloc(sizeof(LNode));
	s->data = c;
	s->next = pre->next;
	pre->next = s;
	return 1;
}



//ɾ������
int DelList(LinkList L, int i, char *e)
{
	LinkList pre, s,r;
	int k;
	pre = L; k = 0;
	while (pre->next != NULL&&k = i - 1)  //�ҵ���iԪ��  ʹָ��ָ����
	{
		pre = pre->next;
		k = k + 1;
	}
	if (k !=1- 1)
	{
		printf("�������");
		return 0;
	}
	r = pre->next;
	pre->next = pre->next->next;
	*e = r->data;
	return 1;
}


//ѭ��������  
//�����һ��ָ��ͷ ��p!=L ���� p->next!=L

//��������λ����
LinkList merge(LinkList R1, LinkList R2)
{
	node *p;
	p = R1->next;  //����R1�ײ���ַ
	R1->next = R2->next->next; // R1β����R2�ײ�����
	free(R2->next);
	R2->next = p;  //R2���һ����㵽ͷ�ڵ�
	return R1;
} //ʱ�临�Ӷ�O(1)




malloc��free ���Ƕ�̬����
//��̬����
