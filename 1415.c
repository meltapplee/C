#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, odd = 0, even = 0, cnt = 0;
	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &n);
		if (n % 2 == 0 && n > even) even = n;
		if (n % 2 != 0 && n > odd) odd = n;
		if (n > cnt) cnt = n;
	}
	if (even == 0 || odd == 0) printf("%d", cnt);
	else printf("%d %d", odd, even);
}