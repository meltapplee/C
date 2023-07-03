#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;

int f(int a) {

    int result = 1;
    for (int i = 1; i <= a; i++) {
        result *= i;
    }
    return result;
}

int main()
{
    scanf("%d", &n);
    printf("%lld\n", f(n));
}