#include<iostream>

using namespace std;

int main(){
	int a = 1;
	int* p = &a;
	int a1 = 2;
 
	//*p = a1;

	//cout << "p的值：" << p << " a的地址："<<  &a << "  a1的地址: " << &a1 << endl;
	//cout << "*p的值：" << *p << " a的值：" << a << endl;
	//printf("p的值：%p\n", p);

	//p = &a1;
	//cout << "p的值： " << p << endl;
	//cout << "*p的值：" << *p << endl;
	//cout << "a的地址：" << &a << endl;
	//cout << "a的值：" << a << endl;

	char b = 'b';
	char* q = &b;
	void* v = &b;

	cout << "*q的值：" << *q << endl;
	cout << "q的值：" << (void*)q << endl << "b的地址：" << (void*) & b << endl;
	cout << "q的值：" << q << endl << "b的地址：" << &b << endl;
	cout << "v的值：" << v << " b的地址：" << (void*)&b << endl;
	printf("q的值：%p\n", q);

	return 0;
}
