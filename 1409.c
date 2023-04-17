#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int k, n, arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &k);
		arr[i] = k;
	}
	scanf("%d", &n);
	for (int i = 0; i < 10; i++)
	{
		if (i == n - 1) printf("%d", arr[i]);
	}
	return 0;
}