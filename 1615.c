#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int arr[5001];

void d(int x)
{
	int box = x;
	while (x)
	{
		box = box + x % 10;
		x = x / 10;
	}
	arr[box]++;
}

int main()
{
	int a, b, sum = 0;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= b; i++)
		d(i);

	for (int i = a; i <= b; i++)
		if (arr[i] == 0)
			sum = sum + i;

	printf("%d", sum);
	return 0;
}