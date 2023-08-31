#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int arr[MAX_SIZE], j, key;

void insertion_sort(int n) {

	for (int i = 1; i < n; i++) { 
		key = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = key;
	}
}


int main() {
	srand(time(NULL));
	int n = MAX_SIZE;

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	insertion_sort(n);

	printf("\nÁ¤·Ä ÈÄ\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}