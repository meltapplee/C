#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mymin(int a, int b)
{
    if (a < b) return a;
    else return b;
}
main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymin(a, b));
}
