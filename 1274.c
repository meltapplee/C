#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, box = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) box++;
	}
	if (box == 2) printf("prime");
	else printf("not prime");
}