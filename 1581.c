#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void myswap(int* x, int* y)
{
    int tmp;
    if (*x > *y)
    {
        tmp = *x;
        *x = *y;
        *y = tmp;
    }

}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    myswap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}