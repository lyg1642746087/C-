#include<stdio.h>

int main() {
	int a = 1;
	int* p = &a;

	printf("p��ֵ��%p\n", p);

	char b = 'b';
	char* q = &b;

	printf("q��ֵ��%p\n", q);
	return 0;
}
