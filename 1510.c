#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    int Arr[50][50] = {0};


    int n;
    scanf("%d", &n);
    int mid = (n + 1) / 2;
    int dot = 0;

    int i = 1;
    int j = mid;
    for (int k = 0; k < n * n; k++) {
        Arr[i][j] = ++dot;
        if (dot % n == 0) i++;
        else {
            i--;
            j++;
        }
        if (i < 1) i = n;
        if (j > n) j = 1;

    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", Arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}