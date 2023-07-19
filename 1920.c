#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int otot(int a) {
	if (a < 1) return;
	otot(a / 2);
	printf("%d", a % 2);
}

int main() {
	int n;
	scanf("%d", &n);
	if (n > 0) otot(n);
	else printf("0");
	return 0;
}