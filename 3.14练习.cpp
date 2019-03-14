
//C语言
//模拟实现strcpy
//strcpy的格式是
//strcpy(str,str2)
//将str整个复制到str2

char* strcpy1(char* str, const char* str2) {

	char* start = str;        //指向被复制字符串的头个元素的指针
	char* start2 = str2;      //指向要复制字符串的投个元素的指针
	int leng = strlen(str);
	while (start != (str + leng + 1)) {//一定要注意俩字符串的长度啊。因为字符串后面还有个'\0'
		*start2 = *start;
		++start;
		++start2;
	}
	return str2;

}




2.实现strcat
连接两个字符串
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
	*str = '\0';//这里注意
	return p3;
}

3.实现strstr
这个函数是用来判断一个字符串是不是另一个字符串的字串。

int my_strstr(char* str1, char* str2) {
	//先假设str2是str1的字串
	char* p1 = str1;
	char* p2 = str2;
	char* flag = str1;//这都是指向第一个元素的指针。这个是标记用的。后面见
	if (*p2 == '\0'){//如果子串直接是空。那就不用进行下去了。
		return 0;
	}
	while (*p1) { //while的判断条件要非0嘛。就要*p1到最后一个字符后退出循环，
		flag = p1; //见到标记了吧。指向第一个元素
		p2 = str2;
		while (*flag && *p2 && (*flag == *p2)) //要都不为空，且要俩指针的元素相等
		{
			flag++;
			p2++; //指向下一个元素
		}
		if (*p2 == '\0'){ //字串最后一个元素都匹配了，那就是字串了
			return 1;
		}

		++p1; //这个有点难懂不？这个就是如果两个元素遇到不相等的，那就重新来比较，第一个字符串的元素向下一个移动来匹配。而字串就回到第一个元素继续匹配
		//这里举一个例子
		//str1[]="bbcdefg"
		//str2[]="bcde";
		//第一个元素相等的，但是第二元素不等，这时候str1移动下一个元素，str2回到首位继续比较
		//然后就相等了。总之这是为了防止字符串有重合的元素影响比较。
	}
	return 0; //最后一个字符都没有匹配上，那就过分很了，不是子串
}
}

4.实现strchr
这个函数是查找字符串中首次出现某个字符的位置

//C语言

int my_strchr(const char* str, char ch) {
	char* p = str;        //指向首个元素char* pch = ch;
	int adress = 0;        //位置标记
	while (*p != ch) {
		++p;
		++adress;
		if (*p == '\0') {
			return 0;
		}
	}
	return adress + 1;        //+1是为了好看，因为字符是从第0个位置开始的，人从第一个开始数

}


5.实现strcmp
俩字符串的比较函数

//C语言

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

6.实现memcpy
这也是拷贝的函数，但是这个点高级就是从源字符串起始位置开始拷贝指定个字节到目标字符串中。
当你要拷贝大于原字符串长度的时候，也就是 n 大于原字符串长度，strncpy 会用 ‘\0’ 来填充，
而 memcpy 则会在原字符串所在地址按照长度拷贝内存里的值，所以多余的字符是内存中不确定的值。


//语言

//实现memcp

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

7.实现memmove（预告版）
这是memcpy的优化版。函数memcpy()   从source  指向的区域向dest指向的区域复制count个字符，如果两数组重叠，不定义该函数的行为。
而memmove(), 如果两函数重叠，赋值仍正确进行。

//C语言
//实现memmove
void* my_memmov(void* copy, void* from, size_t num) {
	void* ret = copy;
	if ((char*)from <= (char*)copy || ((char*)from>(char*)copy + num)) {
		while (num--) {
			*(char*)copy = *(char*)from;
			copy = (char*)copy + 1;
			from = (char*)from + 1;
		}
	}
	else {//区间重合
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

