#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

    char arr[100];
    scanf("%s", arr);
    if (arr[0] == 'l' && arr[1] == 'o' && arr[2] == 'v' && arr[3] == 'e' && arr[4] == '\0') printf("I love you.");
    return 0;//\0운 Null문자 의미
}