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
			scanf("%d", &arr[i][j]); //�̷λ��� ����+���� ��ġ �Է�
		}
	}
	x = 1, y = 1;//����
	while (1)
	{
		if (arr[x][y] == 2) //���̸� �߰��ϸ� 
		{
			arr[x][y] = 9; //9�ιٲٱ�
			break;
		}

		arr[x][y] = 9;

		if (arr[x][y + 1] != 1) //���������� �̵��ϸ� 1�� �ƴҶ�
			y++; //���������� �̵�
		else if (arr[x + 1][y] != 1) //�Ʒ��� ���������� 1�� �ƴϸ�
			x++; //�Ʒ��� �̵�
		else break;
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d ", arr[i][j]); //�������ڸ� �ٲٴ°�
		}printf("\n");
	}
}