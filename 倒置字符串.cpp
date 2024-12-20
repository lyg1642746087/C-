#include<stdio.h>
#include<stdlib.h>

//#define SIZE 5


void reverse(char* begin, char* end) {
    int i = 0, length = end - begin + 1;
    char ch;
    for (i = 0; i < length / 2; i++) {
        ch = *begin;
        *begin++ = *end;
        *end-- = ch;
    }
}
int main(void) {

    /*
    * 使用指针数组的方式来翻转
    * 但是需要知道数组的长度       
    */
    //char* str[SIZE] = { 0 };
    //int i;
    //for (i = 0; i < SIZE; i++) {
    //    str[i] = (char*)malloc(sizeof(char) * 128);
    //    scanf("%s", str[i]);
    //}

    //char* t = NULL;
    //for (i = 0; i <= SIZE / 2; i++) {
    //    t = str[i];
    //    str[i] = str[SIZE - 1 - i];
    //    str[SIZE - 1 - i] = t;

    //}

    //for (i = 0; i < SIZE; i++) {
    //    printf("%s ", str[i]);
    //    free(str[i]);
    //}


    char* str = (char*)malloc(sizeof(char) * 128);
    int i = 0;
    char ch;

    while ((ch = getchar()) != '\n') {
        str[i++] = ch;
    }
    *(str + i) = '\0';

    printf("%s\n", str);

    reverse(str, str+i-1);
    printf("%s\n", str);

    char* begin = str;
    char* end = str;
    while (*end != '\0') {
        if (*end == ' ') {
            reverse(begin, end - 1);
            begin = end + 1;
        }

        end++;
    }

    reverse(begin, end - 1);

    printf("%s\n", str);

    free(str);
    printf("\n");

    return 0;
}