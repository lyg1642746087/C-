#include<iostream>
#include<stdio.h>

using namespace std;

void swap_c(int* x, int* y) {
	int t = *x;
	*x = *y;
	*y = t;
}

int main() {
	int a = 1, b = 2;

	/*
	* swap_c(a,b)
	* void swap_c(int x, int y)
	* void�Ӻ�����������ͷ��ڴ棬����ֱ��ʹ�û��޷�����a,bֵ
	* ���Ҫ����ʵ�ε�ֵ������Ҫ����ַ
	* 
	* ��ȷʹ��
	* swap_c(&a, &b); 
	* void swap_c(int* x, int* y
	*/
	swap_c(&a, &b);   

	printf("a = %d  b = %d\n", a,b);

	return 0;
}
