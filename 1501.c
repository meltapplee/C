#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[51][51] = { 0 }, n, cnt = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = cnt++;
			printf("%d ", arr[i][j]);
		}printf("\n");
	}
}