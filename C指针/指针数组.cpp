#include<stdio.h>

int main() {
	const char* string[] = {"I love  China!", "I am"};

	//printf("%s\n", string);
    printf("%s\n", string[0]);
    printf("%p\n", string);             //��ʾstring�ĵ�ַ
    printf("%p\n", string + 1);           //��ʾsting�ڶ���Ԫ�����ڵĵ�ַ
    printf("%p\n", string[0]);         //��ʾstring��Ԫ�ش�ŵĵ�ַ������ΪI love China��
    printf("%p\n", &string[0]);         //��ʾstring��һ��Ԫ�����ڵĵ�ַ
    printf("%d\n", sizeof(string));     //16�ֽڣ�string��ŵ��ַ������ڵĵ�ַ


    char a[] = "i love y";
    const char* p = "i love y";
    printf("%s\n", a);
    printf("%s\n", p);
    printf("%p\n", p);
}
