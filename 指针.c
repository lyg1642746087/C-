#include<stdio.h>

int main() {
	int a = 1;
	int* p = &a;

	printf("p的值：%p\n", p);

	char b = 'b';
	char* q = &b;

	printf("q的值：%p\n", q);
	return 0;
}
