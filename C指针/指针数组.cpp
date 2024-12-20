#include<stdio.h>

int main() {
	const char* string[] = {"I love  China!", "I am"};

	//printf("%s\n", string);
    printf("%s\n", string[0]);
    printf("%p\n", string);             //表示string的地址
    printf("%p\n", string + 1);           //表示sting第二个元素所在的地址
    printf("%p\n", string[0]);         //表示string首元素存放的地址，内容为I love China！
    printf("%p\n", &string[0]);         //表示string第一个元素所在的地址
    printf("%d\n", sizeof(string));     //16字节，string存放的字符串所在的地址


    char a[] = "i love y";
    const char* p = "i love y";
    printf("%s\n", a);
    printf("%s\n", p);
    printf("%p\n", p);
}
