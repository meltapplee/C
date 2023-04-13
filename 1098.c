#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[100][100] = { 0 };
	int h, w, n, l, d, x, y; //n = 막대 개수
	scanf("%d %d", &h, &w); //격자판 크기
	scanf("%d", &n); //막대 개수 입력받기
	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d %d %d", &l, &d, &x, &y); //l=막대길이, d가 0=가로, 1=세로
		if (d == 0) //가로일때
		{
			for (int j = 0; j < l; j++) //j부터j보다 1작은 수반큼 반복을 한다 (막대 수만큼 반복)
			{
				arr[x][y + j] = 1; //해당하는 위치부터 오른쪽 방향으로 막대의길이만큼 1을지정
			}
		}
		else //세로일때
		{
			for (int j = 0; j < l; j++)  //j부터 j보다 1작은수만큼 반복을 한다 (막대 수만큼 반복)
			{
				arr[x + j][y] = 1; //해당하는 위치부터 아래쪽 방향으로 막대의길이만큼 1을지정
			}
		}
	}
	for (int i = 1; i <= h; i++) //한 행씩(위->아래)
	{
		for (int j = 1; j <= w; j++) //한 열씩(왼->오)
		{
			printf("%d ", arr[i][j]); //값출력
		}printf("\n");
	}
	return 0;
}