#include<stdio.h>

int main(void) {
	/*
	* a[0] ��ʾ������Ԫ�ص�ַ  4�ֽ�
	* a    ��ʾ���е�ַ        16�ֽ�
	* &a   ��ʾ�����ַ        48�ֽ�
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

	//������ָ������ʾ��ά����
	//  *p   ��ʾ��һ��Ԫ��
	//  **p  ��ʾ��һ�е�һ�е�Ԫ��
	/*
	int (*p)[4] = a;

	int i = 0, j = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", p[i][j]);
			printf("%d ", *(*(p + i) + j));   //a[i]�ȼ���*(a+i)
		}
		printf("\n");
	}
	*/

	/*
	* ��ָ����������ʾ��ά����
	*/

	/*
	int* p[3] = { a[0],a[1],a[2] };

	printf("%p,,%p\n", (*p), &a);

	int i = 0, j = 0;
	for (i = 0; i < 3; i++) {               //�ȼ��� for(i = 0; i < sizeof(a) / sizeof(a[0]); i++)
		for (j = 0; j < 4; j++) {          //�ȼ���  for(j = 0; j < sizeof(a[0]) / sizeof(a[0][0]); j++)
			printf("%d ", p[i][j]);    //���� a[0]��p[0], a[0][0]�� p[0][0]
		}
		printf("\n");
	}
	*/

	/*
	* ��ά�������ڴ���Ϊ���Դ洢
	* ��ָ������ʾ��ά����
	*/

	int* p = a[0];

	for (int i = 0; i < 12; i++) {
		printf("%d ", p[i]); 
	}
	printf("\n");

	return 0;
}