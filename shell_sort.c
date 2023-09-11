#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define MAX_SIZE 10
int arr[MAX_SIZE];


void insertion_sort(int fir, int gap) {
	int i, j, key;
	for (i = gap + fir; i <= MAX_SIZE - 1; i = i + gap) {
		key = arr[i];
		for (j = i - gap; j >= 0 && arr[j] > key; j = j - gap) {
			arr[j + gap] = arr[j];
		}
		arr[j + gap] = key;
	}
}

void shell_sort(int n) {
	int gap;
	for (gap = n / 2; gap >= 1; gap = gap / 2) {
		if (gap % 2 == 0) gap++;
		for (int i = 0; i < gap; i++) {
			insertion_sort(i, gap);
		}
	}
}

int main() {
	int n = MAX_SIZE;
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}

	shell_sort(n);
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}