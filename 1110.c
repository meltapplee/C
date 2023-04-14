//baekjoon1110

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int box, n, a, b, c, d, count = 0;
	scanf("%d", &box);
	n = box;//n은 변하는 값
	do
	{
		a = n / 10; //10의자리수
		b = n % 10; //1의자리수
		c = (a + b) % 10; //a+b결과의 1의자리수
		d = (10 * b) + c;
		n = d; //n에 계산값을 저장
		count++; //몇번 사이클을 돌았는지 ++
	} while (n != box); //d가 n과 같을때 멈춤
	printf("%d", count);
	return 0;
}



//count++;
//n = ((n % 10 + n / 10) % 10) + (n % 10) * 10;