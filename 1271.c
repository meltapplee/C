#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int n1, n2, box;
    scanf("%d", &n1);
    for (int i = 1; i <= n1; i++)
    {
        scanf("%d", &n2);
        if (i == 1) box = n2;
        if (i > 1 && box <= n2) box = n2;
    }
    printf("%d", box);
    return 0;
}