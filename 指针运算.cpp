#include<iostream>
#include<stdio.h>

using namespace std;

//void strcpy_1(char* dest, const char* src) {
//	do {
//		*dest++ = *src++;
//	} while ((*dest) != '\0');
//}

/*
 * void strcpy_2()执行的逻辑
 * 1.将src当前指向的内容赋值给dest当前指向的内容，src指向下一位
 * 2.首先是对dest做判断，然后由于i++的原理是先返回值再加1，所以返回的就是当前给dest赋的值
 * 3.优先级问题，括号里的优先级最高，先把括号里的预算执行完，再判断，由于i++是先返回值，所以先返回值再自加运算。
 */
void strcpy_2(char* dest,  const char* src) {
	char a = 'a';
	int  cout = 1;
	while ((a = (*dest++ = *src++)) != '\0')
	{
		cout++;
	}
	printf("%d\n", cout);
}

//void strcpy_3(char* dest, const char* src) {
//	while ((*dest) != '\0') {
//		*dest++ = *src++;
//	}
//}

void f(char* a, int num) {

	// 数组名作为参数传过来之后，变成指针；
	//printf("%lu\n", sizeof(a));
	//printf("%lu\n", sizeof(a[0]));
	//printf("%lu\n", sizeof(a) / sizeof(a[0]));
	char d = 'a';
	char* dest = &d;
	strcpy_2(dest , a);

	//for (int i = 0; i < num; i++) {
	//	printf("%d\n", a[i]);
	//}

	
}

int main() {
	char s1[32] = "hello";
	char s2[32] = "111";


	char str[32] = "helleworld";
	char* p = NULL;
	p = str;

	//long double a = 4;
	//void* q = &a;

	char a[10] = "ssgfgr";

	/*printf("%lu\n", sizeof(a) / sizeof(a[0]));*/

	//printf("%lu\n", sizeof(str[0]));
	//printf("%lu\n", sizeof(p));
	//printf("%lu\n", sizeof(a));

	f(a,10);





	//strcpy_1(s2, s1);
	//printf("%s\n", s2);

	//strcpy_2(s2, s1);
	//printf("%s\n", s2);

	//strcpy_3(s2, s1);
	//printf("%s\n", s2);



	return 0;
}

//#include <stdio.h>
//
//int main() {
//    int a = 3;
//    int b = 5;
//    while ((a++) != 7);
//    printf("a: %d\n", a);
//    printf("b: %d\n", b++);
//    return 0;
//}