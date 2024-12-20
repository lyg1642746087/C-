#include<stdio.h>

void f1() {
	printf("helloword\n");
}

int add(int x, int y) {
	return x + y;
}

typedef int (*T)(int, int);    //声明一个新的类型T， T表示函数指针类型

int main(void) {
	
	void (*p)();   //定义函数指针
	p = f1;
	p();          //通过函数指针调用函数  等价于 f1() 

	// p = add    //报错，类型不兼容
	int (*q)(int, int) = add;
	int num = q(1, 2);
	
	printf("%d\n", num);
	printf("%p\n%p\n", add, q);

	T q1;   //等价于 int (*q1)(int int);
	q1 = add;

	printf("%d\n", q1(2, 2));

	return 0;
}