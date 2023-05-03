/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr1[5] = { 10, 20, 30, 40, 50 }; //arr1은 아파트 주소 이름
	int arr2[5] = { 0 };
	int i = 0;

	// arr2 = arr1; 주소에 다른 주소를 넣는것은 불가능
	for (i = 0; i < 5; i++) arr2[i] = arr1[i];

	for (i = 0; i < 5; i++) {
		printf("arr2[%d] : %d\n", i, arr2[i]);
	}printf("\n");
	return 0;
}
*/

/*
#include <stdio.h>

int main()
{
	char str[18] = "Nice to meet you!"; //18칸 중 17칸에 대입, 마지막은 NULL <-Null은 문자열이 끝난다는 표시(char 일 때는 자동으로)
	printf("배열 str의 크기: %d\n", sizeof(str));
	printf("NULL 문자 문자형 출력: %c\n", str[17]); //%c는 아스키코드 공백
	printf("NULL 문자 정수형 출력: %d\n", str[17]); //%d에서 NULL은 0

	str[16] = '?';
	printf("문자열 출력: %s", str);
	return 0;
}
*/

/*
#include <stdio.h>

int main()
{
	char nu = '\0';	// 널 문자 저장
	char sp = ' ';	// 공백 문자 저장
	printf("null값의 아스키코드 값은 : %d\n", nu); //0
	printf("공백의 아스키코드 값은 : %d\n", sp); //32
	return 0;
}
*/

//1차원 배열 기초문제1
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[5] = { 0 };
	for (int i = 0; i < 5; i++) scanf("%d", &arr[i]);
	for (int j = 0; j < 5; j++) printf("%d ", arr[j]);
}
*/


//1차원 배열 기초문제2
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char arr[5] = { 0 };
	printf("문자 입력");
	for (int i = 0; i < 5; i++)
	{
		scanf(" %c", &arr[i]); //여러번 입략 받을 때는 앞에 공백(띄어쓰기)을 넣어줘야 한다
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%c ", arr[i]);
	}return 0;
}

*/



//1차원 배열 기초문제3
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int cnt = 0, n; // 이름의 길이를 세는 변수, 학번을 저장하는 배열
	char name[100]; // 이름을 문자열로 저장하는 배열
	printf("이름을 영어로 입력하세요 : ");
	scanf("%s", &name); // 이름을 문자열로 입력받기
	printf("학번을 입력하세요 : ");
	scanf("%d", &n); ///문자열은 그 자체가 주소

	while (name[cnt] != '\0') //NULL이 아닐 때 까지
	{
		cnt++;
	}
	printf("당신의 이름은 %s(%d글자)이고 학번은 %d입니다.", name, cnt, n);
	return 0;
}
*/


//1차원 배열 기초문제4

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char str[100] = "I love C programming!"; // str 배열에 문자열로 초기화
	printf("저장된 문자열 : %s\n", str); // str 배열 값 출력

	str[10] = '\0'; // 인덱스 값(길이 X) 10인 str 배열 값에 null값 저장 <- 문자열은 널값이 걸리면 출력 멈춤
	printf("null값 전까지 문자열 : %s\n", str);

	str[7] = '\0'; // 인덱스 값 7인 str 배열 값에 null값 저장
	printf("null값 전까지 문자열 : %s\n", str);

	str[3] = '\0'; // 인덱스 값 3인 str 배열 값에 null값 저장
	printf("null값 전까지 문자열 : %s\n", str);
	return 0;
}




//1차원 배열 기초문제5
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num[10];
	for (int i = 0; i < 10; i++){
	num[i] = i + 1;
	printf("%d ", num[i]);
	}return 0;
}
*/