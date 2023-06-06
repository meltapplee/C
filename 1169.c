#include <stdio.h>

int main()
{
	int year, back, a;
	scanf("%d", &a);
	if (a < 100)
	{
		if (a <= 13)
		{
			year = 13 - a;
			back = 3;
			printf("%d %d", year, back);
		}
		else
		{
			year = 113 - a;
			back = 1;
			printf("%d %d", year, back);
		}
	}
	else
	{
		back = 1;
		year = 113 - a;
		printf("%d %d", year, back);
	}
	return 0;
}