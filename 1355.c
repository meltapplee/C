#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)

    {
        for (int k = 0; k < i - 1; k++) printf(" ");
        for (int j = n; j >= i; j--) printf("*");
        printf("\n");
    }
}