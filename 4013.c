#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, arr[16] = { 0 }, i = 0;
	scanf("%d", &n); //������ �Է¹���
	int m = n; //������ �ϳ� ���� ó������ ������ �ʵ��� ��
	while (m> 0) //�������� 0���� Ŭ������
	{
		arr[i] = m% 2; //�迭i�� ���� ���� ����
		m/= 2; //�ѹ� �������ϱ� ���� ������ ���� ����
		i++; //1���߰�
	}printf("2 ");
	for (int j = i - 1; j >= 0; j--) //i�� ���� Ƚ�� �ڿ� �ʿ���°� �ȳ�����
	{
		printf("%d", arr[j]);
	}
	printf("\n");

	printf("8 %o\n", n);
	printf("16 %X\n", n);
}