#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n;
int fib(int a)
{
	if (a <= 2) return 1;
	else return fib(a - 2) + fib(a - 1);
}
int main()
{
	scanf("%d", &n);
	printf("%d", fib(n));
	return 0;
}
