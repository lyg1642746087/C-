#include<stdio.h>

void f1() {
	printf("helloword\n");
}

int add(int x, int y) {
	return x + y;
}

typedef int (*T)(int, int);    //����һ���µ�����T�� T��ʾ����ָ������

int main(void) {
	
	void (*p)();   //���庯��ָ��
	p = f1;
	p();          //ͨ������ָ����ú���  �ȼ��� f1() 

	// p = add    //�������Ͳ�����
	int (*q)(int, int) = add;
	int num = q(1, 2);
	
	printf("%d\n", num);
	printf("%p\n%p\n", add, q);

	T q1;   //�ȼ��� int (*q1)(int int);
	q1 = add;

	printf("%d\n", q1(2, 2));

	return 0;
}