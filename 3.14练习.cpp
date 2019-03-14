
//C����
//ģ��ʵ��strcpy
//strcpy�ĸ�ʽ��
//strcpy(str,str2)
//��str�������Ƶ�str2

char* strcpy1(char* str, const char* str2) {

	char* start = str;        //ָ�򱻸����ַ�����ͷ��Ԫ�ص�ָ��
	char* start2 = str2;      //ָ��Ҫ�����ַ�����Ͷ��Ԫ�ص�ָ��
	int leng = strlen(str);
	while (start != (str + leng + 1)) {//һ��Ҫע�����ַ����ĳ��Ȱ�����Ϊ�ַ������滹�и�'\0'
		*start2 = *start;
		++start;
		++start2;
	}
	return str2;

}




2.ʵ��strcat
���������ַ���
char* my_strcat(char* str, const char* str2) {
	assert(str);
	assert(str2);
	char* p3 = str;
	while (*str != '\0') {
		++str;
	}
	while (*str2 != '\0') {
		*str = *str2;
		++str;
		++str2;

	}
	*str = '\0';//����ע��
	return p3;
}

3.ʵ��strstr
��������������ж�һ���ַ����ǲ�����һ���ַ������ִ���

int my_strstr(char* str1, char* str2) {
	//�ȼ���str2��str1���ִ�
	char* p1 = str1;
	char* p2 = str2;
	char* flag = str1;//�ⶼ��ָ���һ��Ԫ�ص�ָ�롣����Ǳ���õġ������
	if (*p2 == '\0'){//����Ӵ�ֱ���ǿա��ǾͲ��ý�����ȥ�ˡ�
		return 0;
	}
	while (*p1) { //while���ж�����Ҫ��0���Ҫ*p1�����һ���ַ����˳�ѭ����
		flag = p1; //��������˰ɡ�ָ���һ��Ԫ��
		p2 = str2;
		while (*flag && *p2 && (*flag == *p2)) //Ҫ����Ϊ�գ���Ҫ��ָ���Ԫ�����
		{
			flag++;
			p2++; //ָ����һ��Ԫ��
		}
		if (*p2 == '\0'){ //�ִ����һ��Ԫ�ض�ƥ���ˣ��Ǿ����ִ���
			return 1;
		}

		++p1; //����е��Ѷ�������������������Ԫ����������ȵģ��Ǿ��������Ƚϣ���һ���ַ�����Ԫ������һ���ƶ���ƥ�䡣���ִ��ͻص���һ��Ԫ�ؼ���ƥ��
		//�����һ������
		//str1[]="bbcdefg"
		//str2[]="bcde";
		//��һ��Ԫ����ȵģ����ǵڶ�Ԫ�ز��ȣ���ʱ��str1�ƶ���һ��Ԫ�أ�str2�ص���λ�����Ƚ�
		//Ȼ�������ˡ���֮����Ϊ�˷�ֹ�ַ������غϵ�Ԫ��Ӱ��Ƚϡ�
	}
	return 0; //���һ���ַ���û��ƥ���ϣ��Ǿ͹��ֺ��ˣ������Ӵ�
}
}

4.ʵ��strchr
��������ǲ����ַ������״γ���ĳ���ַ���λ��

//C����

int my_strchr(const char* str, char ch) {
	char* p = str;        //ָ���׸�Ԫ��char* pch = ch;
	int adress = 0;        //λ�ñ��
	while (*p != ch) {
		++p;
		++adress;
		if (*p == '\0') {
			return 0;
		}
	}
	return adress + 1;        //+1��Ϊ�˺ÿ�����Ϊ�ַ��Ǵӵ�0��λ�ÿ�ʼ�ģ��˴ӵ�һ����ʼ��

}


5.ʵ��strcmp
���ַ����ıȽϺ���

//C����

int my_strcmp(const char* str1, const char* str2) {
	char* p1 = str1;
	char* p2 = str2;
	while (*p1 == *p2) {
		++p1;
		++p2;
	}
	if (*p1<*p2) {
		return -1;
	}
	else if (*p1 == *p2) {
		return 0;
	}
	else {
		return 1;
	}
}

6.ʵ��memcpy
��Ҳ�ǿ����ĺ��������������߼����Ǵ�Դ�ַ�����ʼλ�ÿ�ʼ����ָ�����ֽڵ�Ŀ���ַ����С�
����Ҫ��������ԭ�ַ������ȵ�ʱ��Ҳ���� n ����ԭ�ַ������ȣ�strncpy ���� ��\0�� ����䣬
�� memcpy �����ԭ�ַ������ڵ�ַ���ճ��ȿ����ڴ����ֵ�����Զ�����ַ����ڴ��в�ȷ����ֵ��


//����

//ʵ��memcp

void* my_memcpy(void* str2, void* str1, size_t num) {
	assert(str1);
	assert(str2);
	void* ret = str2;
	while (num--){
		*(char*)str2 = *(char*)str1;
		++(char*)str2;
		++(char*)str1;
	}
	return ret;
}

7.ʵ��memmove��Ԥ��棩
����memcpy���Ż��档����memcpy()   ��source  ָ���������destָ���������count���ַ�������������ص���������ú�������Ϊ��
��memmove(), ����������ص�����ֵ����ȷ���С�

//C����
//ʵ��memmove
void* my_memmov(void* copy, void* from, size_t num) {
	void* ret = copy;
	if ((char*)from <= (char*)copy || ((char*)from>(char*)copy + num)) {
		while (num--) {
			*(char*)copy = *(char*)from;
			copy = (char*)copy + 1;
			from = (char*)from + 1;
		}
	}
	else {//�����غ�
		copy = (char*)copy + num - 1;
		from = (char*)from + num - 1;

		while (num--) {
			*(char*)copy = *(char*)from;
			copy = (char*)copy - 1;
			from = (char*)from - 1;
		}
	}
	return ret;

}

