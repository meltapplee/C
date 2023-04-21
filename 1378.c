#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, sum = 0, box = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum += i;
		box += sum;
	}
	printf("%d", box);
}