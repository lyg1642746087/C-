#include<stdio.h>


int less(int x, int y) {
	return (x > y) ? 1 : 0;
}

int greater(int x, int y) {
	return (x < y) ? 1 : 0;
}

//回调函数：把函数名作为另一个函数的参数
//作用：修改函数的功能
void sort(int* a, int len, int(*p)(int, int)) {
	int i = 0, j = 0;
	for (i = 0; i < len - 1; i++) {
		for (j = 0; j < len - 1 - i; j++) {
			if (p(a[j], a[j + 1])) {
				int num = a[j];
				a[j] = a[j + 1];
				a[j + 1] = num;
			}
		}
	}
}
int main(void){
	int a[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	sort(a, 10, greater);

	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}

	printf("\n");
	return 0;
}