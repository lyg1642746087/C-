#include<iostream>
#include<stdio.h>

using namespace std;

//void strcpy_1(char* dest, const char* src) {
//	do {
//		*dest++ = *src++;
//	} while ((*dest) != '\0');
//}

/*
 * void strcpy_2()ִ�е��߼�
 * 1.��src��ǰָ������ݸ�ֵ��dest��ǰָ������ݣ�srcָ����һλ
 * 2.�����Ƕ�dest���жϣ�Ȼ������i++��ԭ�����ȷ���ֵ�ټ�1�����Է��صľ��ǵ�ǰ��dest����ֵ
 * 3.���ȼ����⣬����������ȼ���ߣ��Ȱ��������Ԥ��ִ���꣬���жϣ�����i++���ȷ���ֵ�������ȷ���ֵ���Լ����㡣
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

	// ��������Ϊ����������֮�󣬱��ָ�룻
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