#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, d, e, f, g, h, i, j, box = 0;;
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
	box = a + b + c + d + e + f + g + h + i + j;

	if (box % 7 == 4) printf("suspect");
	else printf("citizen");
	return 0;
}