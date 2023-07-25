#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
    int Arr[12][11] = {0};

    for (int i = 1; i <= 11; i++) {
        for (int j = 1; j <= 10; j++) {
            scanf("%d", &Arr[i][j]);
        }
    }

    for (int j = 1; j <= 10; j++) {
        if (Arr[11][j] != 0) {
            int result = 0;
            for (int i = 1; i <= 10; i++) {
                if (Arr[i][j] > 0) { result = 1; }
                else if (Arr[i][j] < 0) { result = 2; }
            }
            if (result == 1) { printf("%d crash\n", j); }
            else if (result == 2) { printf("%d fall\n", j); }
            else { printf("%d safe\n", j); }
        }
    }

    return 0;
}