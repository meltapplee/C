#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n;
int fac(int a)
{
	if (a == 0) return 1;
	return a * fac(a - 1);

}
int main()
{
	scanf("%d", &n);
	printf("%d", fac(n));

	return 0;
}
