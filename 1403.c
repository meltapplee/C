#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[101], n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 1; i <= 2; i++)
	{
		for (int i = 1; i <= n; i++)
		{
			printf("%d\n", arr[i]);
		}
	}return 0;
}