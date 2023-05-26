#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, up = 0, down = 0, arr[100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > arr[i - 1]) up++;
		else down++;
	}
	if (down == 0 && up != 0) printf("오름차순");
	else if (up == 0 && down != 0) printf("내림차순");
	else printf("섞임");
}