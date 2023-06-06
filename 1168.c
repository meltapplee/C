#include <stdio.h>

int main()
{
	int front, back, age;
	scanf("%d %d", &front, &back);
	if (back == 1 || back == 2)
	{
		age = 112 - (front / 10000) + 1;
		printf("%d", age);
	}
	else
	{
		age = 12 - (front / 10000) + 1;
		printf("%d", age);
	}
	return 0;
}