//˳���Ķ����ʼ����
typedef struct SeqList
{
	int* array; //������
	int size; //ʵ�ʳ���
	int capacity;//����
}SeqList;

//˳���Ļ�����������ɾ���


//����˳���
void Creat(SeqList* p)  //�����׵�ַ�Ͳ���ΪNULL
{
	
	p->capacity = 100;  //����������
	p->array = (int*)malloc(sizeof(int) * p->capacity);//��̬�ֲ��ڴ�
	p->size == 0;//˳����ʼ��
}


//��
//ͷ�����i=0
void zeng(SeqList* p,int pos,int v)
{
	int i; //i��λ���±�
	for (i = p->size; i > 0; i--)  //�Ӻ���ǰ��λ��
	{
		p->array[i] = p->array[i - 1];
	}
	p->array[0] = v;//����
	p->size++;//ָ�����һ��
}
//β������


//ɾ
//ͷɾ�� i=0
void toushan(SeqList* p)
{
	for (int i = 0; i <= p->size-2; i++)   //Ϊʲô��2
	{
		p->array[i - 1] = p->array[i];
	}
	p->size--; 
}
//βɾ�� i=p->size
void weishan(SeqList* p)
{

	p->size--;
}
//ɾ����i�� i=pov
void zhongjianshan(SeqList* p,int pov)  //povɾ���ض���λ��
{
	for (int i = pov; i <=p->size; i++)
	{
		p->array[i - 1] = p->array[i];
	}
	p->size--;
}

//��
int cha(SeqList* p,int v)  //��������v
{
	for (int i = 0; i <=p->size; i++)  //i:�������±�
	{
		if (p->size == v)
			return i;
	}
}

//��
void gai(SeqList* p,int pos,int v)
{
	p->array[pos] = v;
}

//����
void kuorong(SeqList* p)
{
	p->capacity = 100;  //����������
	p->array = (int*)malloc(sizeof(int)*p->capacity);//�ֲ��ڴ�

	if (p->size == p->capacity)  //�����¿ռ�
	{
		int * newarray = (int*)malloc(sizeof(int)* p->capacity * 2);
		for (int i = 0; i <= p->size; i++)   //������
		{
			newarray[i] = p->array[i];
		}
		free(p->array); //�ͷŵ�ԭ���Ŀռ�
		p->array = newarray;  //��ָ���еĵ�ַ�ı�
		p->capacity = p->capacity * 2;
	}
}