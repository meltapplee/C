#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, box = 0, cnt = 1;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		if (cnt == 1)
		{
			if (i % 2 == 0) {
				printf("-%d", i);
				box -= i;
			}
			else {
				printf("%d", i);
				box += i;
			}
		}
		else
		{
			if (i % 2 == 0) {
				printf("-%d", i);
				box -= i;
			}
			else {
				printf("+%d", i);
				box += i;
			}
		}cnt++;

	}printf("=%d", box);
}