#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* init() {

	//char str[32] = {0};   ///�ֲ�������ʹ��ջ�ڴ棬�Ӻ�����������ͷŵ�

	char* str = (char* )malloc(128);
	
	return str;

 }

int* add(int x) {
	int* p = &x;
	return p;
}

int main() {
	char* s = init();

	strcpy(s, "hello");

	printf("%s\n", s);

	free(s);

	int* ((*q)(int)) = add;

	printf("%p", ((*q)(1)));

	return 0;
}