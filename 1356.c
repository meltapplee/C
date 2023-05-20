#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) { //줄
        for (int j = 1; j <= n; j++) { //가로
            if (i == 1 || i == n || j == 1 || j == n) printf("*"); //첫번째줄 마지막줄일때 출력, 각 가로의 처음 마지막 출력
            else printf(" ");
        }printf("\n");
    }
}