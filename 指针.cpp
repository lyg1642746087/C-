#include<iostream>

using namespace std;

int main(){
	int a = 1;
	int* p = &a;
	int a1 = 2;
 
	//*p = a1;

	//cout << "p��ֵ��" << p << " a�ĵ�ַ��"<<  &a << "  a1�ĵ�ַ: " << &a1 << endl;
	//cout << "*p��ֵ��" << *p << " a��ֵ��" << a << endl;
	//printf("p��ֵ��%p\n", p);

	//p = &a1;
	//cout << "p��ֵ�� " << p << endl;
	//cout << "*p��ֵ��" << *p << endl;
	//cout << "a�ĵ�ַ��" << &a << endl;
	//cout << "a��ֵ��" << a << endl;

	char b = 'b';
	char* q = &b;
	void* v = &b;

	cout << "*q��ֵ��" << *q << endl;
	cout << "q��ֵ��" << (void*)q << endl << "b�ĵ�ַ��" << (void*) & b << endl;
	cout << "q��ֵ��" << q << endl << "b�ĵ�ַ��" << &b << endl;
	cout << "v��ֵ��" << v << " b�ĵ�ַ��" << (void*)&b << endl;
	printf("q��ֵ��%p\n", q);

	return 0;
}
