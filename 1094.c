#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, i;
    int a[10000] = {0};
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
