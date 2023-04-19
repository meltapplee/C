#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b;
    int year, month, day, sex;
    scanf("%d-%d", &a, &b);
    if (b / 1000000 == 1 || b / 1000000 == 2) {
        year = (a / 10000) + 1900;
    }
    else {
        year = (a / 10000) + 2000;
    }
    month = (a % 10000) / 100;
    day = a % 100;
    sex = b / 1000000;
    if (sex % 2 == 0) printf("%04d/%02d/%02d F", year, month, day);
    else {
        printf("%04d/%02d/%02d M", year, month, day);
    }
}