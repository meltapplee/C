#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			if (i + j == a) printf("%d %d\n", i, j);
		}
	}
	return 0;
}