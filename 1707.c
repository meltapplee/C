#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[10];
	double numbox = 0;
	int high = 0, low = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		numbox += arr[i];
	}
	numbox /= 10;
	printf("%.1f\n", numbox);

	for (int i = 0; i < 10; i++) {
		if (numbox > arr[i]) low++;
		else high++;
	}

	printf("%d %d", high, low);
	return 0;
}