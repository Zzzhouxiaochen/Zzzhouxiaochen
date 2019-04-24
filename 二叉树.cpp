#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stack> 
#include<queue>
#include<iostream>
using namespace std;
/*
1. ��Ϥ���ĸ����Լ���ظ���
2. �˽����Ĵ洢��ʽ�Լ�������
3. �˽�����Ӧ�ó���
4. ��Ϥ�������Ļ��������Լ�����
5. ��Ϥ������������ȫ��������������������
6. ��Ϥ�������ľ�̬�洢����ʽ�洢
7. ʵ����ʽ���ݽṹ�����»���������
*/
typedef char BTDataType;

typedef struct BTNode
{
	struct BTNode* pLeft;
	struct BTNode* pRight;
	BTDataType data;
}BTNode;



// 1. ���������� 
BTNode* CreateBinTree(BTNode* array, int size)
{
	BTDataType data;
	scanf("%d", &data);

	if (data == 0)     //�������Ҷ�ӽڵ㣬�����������������ֱ�ֵΪ0
	{
		array = NULL;
	}
	else
	{

		array = (BTNode*)malloc(sizeof(BTNode));
		array->data = data;
		size++;
	    CreateBinTree(array->pLeft,size);  //�ݹ鴴��������
		CreateBinTree(array->pRight,size);  //�ݹ鴴��������

	}

	return array;
}



// ���������� 
BTNode* CopyBinTree(BTNode* pRoot)
{
	if (pRoot == NULL)
		return;

	BTNode* Node = (BTNode*)malloc(sizeof(BTNode));
	Node->data = pRoot->data;
	Node->pLeft=CopyBinTree(pRoot->pLeft);
	Node->pRight=CopyBinTree(pRoot->pRight);

	return Node;
}
// ���ٶ����� 
//�ж��Ƿ���ڵ㣬���������ڵ�һֱ�ݹ���ȥ��
//�ж��Ƿ��ҽڵ㣬��������ҽڵ�һֱ�ݹ���ȥ��
//��һ�������������ҽ�㣬�����free����
void DestroyBinTree(BTNode** pRoot)
{
	if (*pRoot==NULL)
	{
		return;
	}

	if ((*pRoot)->pLeft!=NULL)
	{
		DestroyBinTree((*pRoot)->pLeft);
	}

	if ((*pRoot)->pRight != NULL)
	{
		DestroyBinTree((*pRoot)->pRight);
	}

	free(pRoot);
	*pRoot = NULL;
}

// �����������ֱ�����ʽ 
void PreOrder(BTNode* pRoot)   //ǰ��
{
	if (pRoot == NULL)
		return;

	printf("%d", pRoot->data);
	PreOrder(pRoot->pLeft);
	PreOrder(pRoot->pRight);
}

//���������
//�����ȷ��ʸ��ڵ��Ƿ�Ϊ�գ�����ջ�����ջ��Ԫ�ء���ǰ�ڵ����������ջ     
//�ڵ�������Ϊ�գ���ջ��Ԫ�س�ջ��ת��ýڵ��������                  
//��ȫ��Ԫ�س�ջ�Ժ󣬽���ѭ��
void PreOrderNor(BTNode* pRoot, vector<int> &path)
{
	//�ǵݹ�ǰ�����

	    stack<BTNode *> s;
		BTNode *p = pRoot;

		while (p != NULL || !s.empty())
		{
			while (p != NULL)
			{
				path.push_back(p->data);
				s.push(p);
				p = p->pLeft;
			}

			if (!s.empty())
			{
				p = s.top();
				s.pop();
				p = p->pRight;
			}
		}
	
}



void InOrder(BTNode* pRoot)  //����
{
	if (pRoot == NULL)
		return;

	PreOrder(pRoot->pLeft);
	printf("%d", pRoot->data);
	PreOrder(pRoot->pRight);
}

//���������
//����ջ����ǰ�ڵ����������ջ
//�ڵ�������Ϊ�գ���ջ��Ԫ�س�ջ�����ջ��Ԫ�ء�ת��ýڵ��������
//��ջΪ��ʱ������ѭ��
void InOrderNor(BTNode* pRoot, vector<int> &path)
{
	//�ǵݹ��������
		stack<BTNode *> s; 
		BTNode *p = pRoot; 
		while (p != NULL || !s.empty())
		{
			while (p != NULL)
			{ 
				s.push(p); 
				p = p->pLeft;
			}        
			if (!s.empty())
			{ 
				p = s.top(); 
				path.push_back(p->data);
				s.pop(); 
				p = p->pRight;
			}
		}
}

void PostOrder(BTNode* pRoot)  //����
{
	if (pRoot == NULL)
		return;

	PreOrder(pRoot->pLeft);
	PreOrder(pRoot->pRight);
	printf("%d", pRoot->data);
}

void PostOrderNor(BTNode* pRoot, vector<int> &path)
{
	//�ǵݹ�������-����
		stack<BTNode *> s; 
		BTNode *p = pRoot;  
		BTNode *temp;  
		while (p != NULL || !s.empty()) 
		{
			while (p != NULL) //��������һֱ����������ֱ������û���������Ľ��  
			{
				BTNode *tempNode = new BTNode;         
				tempNode->btnode = p;
				tempNode->isFirst = true; 
				s.push(tempNode); 
				p = p->pLeft;
			}        
			if (!s.empty())
			{
				temp = s.top();
				s.pop();
				if (temp->isFirst == true)   //��ʾ�ǵ�һ�γ�����ջ��     
				{
					temp->isFirst = false; 
					s.push(temp); 
					p = temp->btnode->right;
				}     
				else  //�ڶ��γ�����ջ��     
				{
					path.push_back(temp->btnode->val);    
					p = NULL; 
				} 
			}
		}
}


//����ʵ�֣�
//1�����Ƚ��������ĸ��ڵ�push�������У��ж϶��в�ΪNULL���������ͷ��Ԫ�أ�
//2���жϽڵ�����к��ӣ��ͽ�����push�������У�
//3���������Ľڵ�����У�
//4��ѭ�����ϲ�����ֱ��Tree == NULL

void LevelOrder1(BTNode &Tree) //�������_����ʵ��
{
	queue < BTNode> q;
	if (Tree != NULL)
	{
		q.push(Tree);   //���ڵ������
	}

	while (q.empty() == false)  //���в�Ϊ���ж�
	{
		cout << q.front()->data << " �� ";

		if (q.front()->pLeft != NULL)   //��������ӣ����������
		{
			q.push(q.front()->pLeft);
		}

		if (q.front()->pRight != NULL)   //������Һ��ӣ��Һ��������
		{
			q.push(q.front()->pRight);
		}
		q.pop();  //�Ѿ��������Ľڵ������
	}
}


//����ʵ�֣�
//ʵ�ֹ���
//1������һ��ָ�����飬����������ṹ��ָ�룬
//2��������������ڵ㣬��������� in��out ���������飬�ڱ��������У�ʼ�����ҵ��ڵ�͸ýڵ��ǰһ���ڵ㣬
//3��ѭ�����Ϲ���
void LevelOrder2(BTNode Tree)  //�������
{
	BTNode temp[100];   //����ָ������
	int in = 0;
	int out = 0;

	temp[in++] = Tree;  //�ȱ�����������ڵ� 

	while (in > out)
	{
		if (temp[out])
		{
			cout << temp[out]->data << " �� ";
			temp[in++] = temp[out]->leftPtr;
			temp[in++] = temp[out]->rightPtr;
		}
		out++;
	}
}


// ��������������е� value �����ظ�
// �ҽ��� value �� v �Ľ��
// ����ҵ��ˣ����� v ���ڵĽ���ַ
// ���û�ҵ������� NULL
// Find ���� NULL ��ζ��û�ҵ������� �� NULL����ζ���ҵ���
// ��ȷ������� -> ���������Ƿ���� -> ���������Ƿ����
// ����������ǣ�����Ҫ��ȥ��������������
// ����������ҵ��ˣ�����Ҫȥ����������
BTNode * Find(BTNode *pRoot, int v) {
	if (pRoot == NULL) {
		return NULL;
	}

	// ��ȥ����
	if (pRoot->data == v) {
		// �ҵ���
		return pRoot;
	}
	// �����û�ҵ���ȥ��������
	BTNode *result = Find(pRoot->pLeft, v);
	if (result != NULL) {
		// ���������ҵ���
		return result;
	}

	// ���������û�ҵ���ȥ��������
	result = Find(pRoot->pRight, v);
	if (result != NULL) {
		return result;
	}
	else {
		return NULL;
	}
}



// ��ȡ�������нڵ�ĸ��� 
int GetNodeCount(BTNode* pRoot) //������ʽ
{
	if (pRoot == NULL)
		return;

	int size;
	size++;

	GetNodeCount(pRoot->pLeft);
	GetNodeCount(pRoot->pRight);

	return size;
}


int GetNodeCount2(BTNode *pRoot)   // ���Ƶķ�ʽ
{
	if (pRoot == NULL) 
	{
		return 0;
	}

	int left = GetNodeCount2(pRoot->pLeft);
	int right = GetNodeCount2(pRoot->pRight);

	return left + right + 1;
}

// ��������ĸ߶� 
int Height(BTNode* pRoot)
{
	if (pRoot == NULL)
		return;

	int left = Height(pRoot->pLeft);
	int right = Height(pRoot->pRight);

	return (left < right ? right: left)+1;
}

// ���������Ƿ�ƽ��O(N^2) 
int IsBalanceTree(BTNode* pRoot)
{

}

// ���������Ƿ�ƽ��O(N) 
int IsBalanceTree_P(BTNode* pRoot, int* height)
{

}

//���������Ƿ�ƽ��
bool IsBalanceTree(BTNode* pRoot, int & depth)
{
	//���Ϊ�գ������ڵ㷵
	if (pRoot == NULL)
	{
		depth = 0;
		return true;
	}
	//��¼��ڵ���ҽڵ����
	int left = 0;
	int right = 0;
	//��ȡ�����õķ�ʽ���²�ݹ���ж�����޸��Ժ��Ӱ����һ��
	if (IsBalanceTree(pRoot->pLeft, left) && IsBalanceTree(pRoot->pRight, right))
	{
		//����ƽ������
		int pf = right - left;
		//�ж�ƽ�������Ƿ�Ϸ�
		if (pfIsInvaild(pf))
		{
			//�Ϸ��������������������ȣ�Ȼ����Ϊ�Ǵ����ã����Ե��ݹ�ص���һ���ʱ���ϲ��е�right��left�����������������
			depth = 1 + (right > left ? right : left);
			return true;
		}
	}
	return false;
}

//�ж�ƽ�������Ƿ�Ϸ�
bool pfIsInvaild(const int& pf)
{
	return abs(pf) < 2;
}


// ��ȡ��������Ҷ�ӽڵ�ĸ��� 
int GetLeafNodeCount(BTNode* pRoot)
{
	if (pRoot == NULL) 
	{
		return 0;
	}

	if (pRoot->pLeft == NULL&&pRoot->pRight == NULL)
		return 1;

	int left=GetLeafNodeCount(pRoot->pLeft);
	int right=GetLeafNodeCount(pRoot->pRight);

	return left + right + 1;
}

// ��ȡ��������K��ڵ�ĸ��� 
//����
//������� Ϊ0
//�����Ϊ�� ��һ��Ϊ1
//���K�� ��������һ������k - 1�� + ������k - 1��
//ֱ��ÿ��ִ�е�һ������ ��һ�㷵��1�� ���û�еĻ�����0
int GetKLevelNodeCount(BTNode* pRoot, int K)
{
	
	if (pRoot == NULL) 
	{
		return 0;
	}

	if (K == 1)
	{	// ������ǰ����, root != NULL
		return 1;
	}

	return GetKLevelNodeCount(pRoot->pLeft, K - 1)
		+ GetKLevelNodeCount(pRoot->pRight, K - 1);
	

}


// ��������ľ��� 
bool Mirror(BTNode* pRoot1,BTNode* pRoot2)
{
	if (pRoot1==NULL&&pRoot2==NULL)
	{
		return 1;
	}

	if (pRoot1==NULL||pRoot2==NULL)
	{
		return 0;
	}

	return pRoot1->data == pRoot2->data
		&& Mirror(pRoot1->pLeft, pRoot2->pRight)
		&& Mirror(pRoot1->pRight, pRoot2->pLeft);
}

//�ж��ǲ�������
bool isSameTree(struct BTNode *p, struct BTNode *q) {
	if (p == NULL && q == NULL) {
		return true;
	}

	if (p == NULL || q == NULL) {
		return false;
	}

	return p->data == q->data
		&& isSameTree(p->pLeft, q->pLeft)
		&& isSameTree(p->pRight, q->pRight);
}