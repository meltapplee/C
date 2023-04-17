#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char arr[10000001] = { 0 };
int N, n;

int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &n);
		arr[n]++;
	}
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &n);
		if (arr[n])  printf("1 ");
		else printf("0 ");
	}
}