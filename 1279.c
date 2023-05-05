#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, box = 0;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		if (i % 2 == 0) box -= i;
		else box += i;
	}printf("%d", box);
}