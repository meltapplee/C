#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void u(int a) {
	printf("%d\n", a);
	if (a == 1) return;
	if (a % 2 == 1) u(a * 3 + 1);
	else u(a / 2);
}

int main() {
	int n;
	scanf("%d", &n);
	u(n);
	return 0;
}