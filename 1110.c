//baekjoon1110

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int box, n, a, b, c, d, count = 0;
	scanf("%d", &box);
	n = box;//n�� ���ϴ� ��
	do
	{
		a = n / 10; //10���ڸ���
		b = n % 10; //1���ڸ���
		c = (a + b) % 10; //a+b����� 1���ڸ���
		d = (10 * b) + c;
		n = d; //n�� ��갪�� ����
		count++; //��� ����Ŭ�� ���Ҵ��� ++
	} while (n != box); //d�� n�� ������ ����
	printf("%d", count);
	return 0;
}



//count++;
//n = ((n % 10 + n / 10) % 10) + (n % 10) * 10;