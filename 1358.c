#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= (n - 1) / 2 + 1; i++)
	{
		for (int j = n / 2 - i; j >= 0; j--)
		{
			printf(" ");
		}
		for (int k = 1; k <= i * 2 - 1; k++)
		{
			printf("*");
		}printf("\n");
	}
}