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
	* void子函数调用完会释放内存，所以直接使用会无法交换a,b值
	* 如果要交换实参的值，必须要传地址
	* 
	* 正确使用
	* swap_c(&a, &b); 
	* void swap_c(int* x, int* y
	*/
	swap_c(&a, &b);   

	printf("a = %d  b = %d\n", a,b);

	return 0;
}
