#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, arr[16] = { 0 }, i = 0;
	scanf("%d", &n); //정수를 입력받음
	int m = n; //변수를 하나 만들어서 처음값이 변하지 않도록 함
	while (m> 0) //원래값이 0보다 클때까지
	{
		arr[i] = m% 2; //배열i에 나눈 값을 저장
		m/= 2; //한번 나눴으니까 값을 반으로 나눠 놓음
		i++; //1을추가
	}printf("2 ");
	for (int j = i - 1; j >= 0; j--) //i는 나눈 횟수 뒤에 필요없는거 안나오게
	{
		printf("%d", arr[j]);
	}
	printf("\n");

	printf("8 %o\n", n);
	printf("16 %X\n", n);
}