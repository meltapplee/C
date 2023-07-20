#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void u(int a) {
	if (a == 1);
	else {
		if (a % 2 != 0) u(a * 3 + 1);
		else u(a / 2);
	}
	printf("%d\n", a);
}

int main() {
	int n;
	scanf("%d", &n);
	u(n);
	return 0;
}