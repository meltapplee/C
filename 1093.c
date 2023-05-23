#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[24] = { 0 }, n, k;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &k);
		arr[k]++;
	}
	for (int i = 1; i <= 23; i++) printf("%d ", arr[i]);
	return 0;
}