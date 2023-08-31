#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int arr[MAX_SIZE];
int min, j;

void selection_sort(int n) {
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (j = i; j < n; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		int tmp = arr[i];
		arr[i] = arr[min];
		arr[min] = tmp;
		
	}
}

int main() {
	srand(time(NULL));
	int n = MAX_SIZE;

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}


	for (int i = 0; i < n - 1; i++) {
		printf("%d ", arr[i]);
	}printf("\n");

	selection_sort(n);

	printf("Á¤·Ä ÈÄ\n");
	for (int i = 0; i < n-1; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}