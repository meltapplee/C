#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[3] = { 0 };
	char a = 0;
	while (scanf("%c", &a) != EOF) {
		arr[a - '(']++;
	}
	for (int i = 0; i < 1; i++) {
		printf("%d %d", arr[i], arr[i + 1]);
	}
}