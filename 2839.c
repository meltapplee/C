#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int N, box5 = 0, box3 = 0;
	scanf("%d", &N);
	do
	{
		if (N % 5 == 0)
		{
			N -= 5;
			box5++;
		}
		else if (N % 3 == 0)
		{
			N -= 3;
			box3++;
		}
		else if (N >= 5)
		{
			N -= 5;
			box5++;
		}
		else if (N == 1 || N == 2)
		{
			printf("-1");
			return 0;
		}
		else break;
	} while (N != 0);
	if (box3 + box5 < 1) printf("-1");
	else printf("%d", box5 + box3);
}