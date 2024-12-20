#include<stdio.h>

int main(void) {
	/*
	* a[0] 表示首行首元素地址  4字节
	* a    表示首行地址        16字节
	* &a   表示数组地址        48字节
	*/
	int a[3][4] = { {1,2,3,4},
					{2,3,4,5},
					{3,4,5,6} };
	//int i = 0, j = 0;
	//for (i = 0; i < 3; i++) {
	//	for (j = 0; j < 4; j++) {
	//		printf("%d ", a[i][j]);
	//	}
	//	printf("\n");
	//}

	//用数组指针来表示二维数组
	//  *p   表示第一行元素
	//  **p  表示第一行第一列的元素
	/*
	int (*p)[4] = a;

	int i = 0, j = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", p[i][j]);
			printf("%d ", *(*(p + i) + j));   //a[i]等价于*(a+i)
		}
		printf("\n");
	}
	*/

	/*
	* 用指针数组来表示二维数组
	*/

	/*
	int* p[3] = { a[0],a[1],a[2] };

	printf("%p,,%p\n", (*p), &a);

	int i = 0, j = 0;
	for (i = 0; i < 3; i++) {               //等价于 for(i = 0; i < sizeof(a) / sizeof(a[0]); i++)
		for (j = 0; j < 4; j++) {          //等价于  for(j = 0; j < sizeof(a[0]) / sizeof(a[0][0]); j++)
			printf("%d ", p[i][j]);    //想想 a[0]与p[0], a[0][0]与 p[0][0]
		}
		printf("\n");
	}
	*/

	/*
	* 二维数组在内存中为线性存储
	* 用指针来表示二维数组
	*/

	int* p = a[0];

	for (int i = 0; i < 12; i++) {
		printf("%d ", p[i]); 
	}
	printf("\n");

	return 0;
}