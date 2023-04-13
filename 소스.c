#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[10][10]={0};
	int x, y;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			scanf("%d", &arr[i][j]); //미로상자 구조+먹이 위치 입력
		}
	}
	x = 1, y = 1;//시작
	while (1)
	{
		if (arr[x][y] == 2) //먹이를 발견하면 
		{
			arr[x][y] = 9; //9로바꾸기
			break;
		}

		arr[x][y] = 9;

		if (arr[x][y + 1] != 1) //오른쪽으로 이동하면 1이 아닐때
			y++; //오른쪽으로 이동
		else if (arr[x + 1][y] != 1) //아래로 내려갔을때 1이 아니면
			x++; //아래로 이동
		else break;
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d ", arr[i][j]); //지나간자리 바꾸는거
		}printf("\n");
	}
}