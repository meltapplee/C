#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char arr[26] = { 0 };
    char a = 0;
    while (scanf(" %c", &a) != EOF) {
        arr[a - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        printf("%c:%d\n", i + 'a', arr[i]);
    }
}