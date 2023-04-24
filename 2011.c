#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, cnt;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		int j;
		j = i;
		cnt = 0;
		while (j > 0)
		{
			if (j % 10 == 3 || j % 10 == 6 || j % 10 == 9) cnt++;
			j /= 10;
		}
		if (cnt == 0) printf("%d\n", i);
		else
		{
			for (int k = 0; k < cnt; k++) printf("K");
			printf("\n");
		}
	}return 0;
}