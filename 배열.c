/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr1[5] = { 10, 20, 30, 40, 50 }; //arr1�� ����Ʈ �ּ� �̸�
	int arr2[5] = { 0 };
	int i = 0;

	// arr2 = arr1; �ּҿ� �ٸ� �ּҸ� �ִ°��� �Ұ���
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
	char str[18] = "Nice to meet you!"; //18ĭ �� 17ĭ�� ����, �������� NULL <-Null�� ���ڿ��� �����ٴ� ǥ��(char �� ���� �ڵ�����)
	printf("�迭 str�� ũ��: %d\n", sizeof(str));
	printf("NULL ���� ������ ���: %c\n", str[17]); //%c�� �ƽ�Ű�ڵ� ����
	printf("NULL ���� ������ ���: %d\n", str[17]); //%d���� NULL�� 0

	str[16] = '?';
	printf("���ڿ� ���: %s", str);
	return 0;
}
*/

/*
#include <stdio.h>

int main()
{
	char nu = '\0';	// �� ���� ����
	char sp = ' ';	// ���� ���� ����
	printf("null���� �ƽ�Ű�ڵ� ���� : %d\n", nu); //0
	printf("������ �ƽ�Ű�ڵ� ���� : %d\n", sp); //32
	return 0;
}
*/

//1���� �迭 ���ʹ���1
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


//1���� �迭 ���ʹ���2
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char arr[5] = { 0 };
	printf("���� �Է�");
	for (int i = 0; i < 5; i++)
	{
		scanf(" %c", &arr[i]); //������ �Է� ���� ���� �տ� ����(����)�� �־���� �Ѵ�
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%c ", arr[i]);
	}return 0;
}

*/



//1���� �迭 ���ʹ���3
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int cnt = 0, n; // �̸��� ���̸� ���� ����, �й��� �����ϴ� �迭
	char name[100]; // �̸��� ���ڿ��� �����ϴ� �迭
	printf("�̸��� ����� �Է��ϼ��� : ");
	scanf("%s", &name); // �̸��� ���ڿ��� �Է¹ޱ�
	printf("�й��� �Է��ϼ��� : ");
	scanf("%d", &n); ///���ڿ��� �� ��ü�� �ּ�

	while (name[cnt] != '\0') //NULL�� �ƴ� �� ����
	{
		cnt++;
	}
	printf("����� �̸��� %s(%d����)�̰� �й��� %d�Դϴ�.", name, cnt, n);
	return 0;
}
*/


//1���� �迭 ���ʹ���4

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char str[100] = "I love C programming!"; // str �迭�� ���ڿ��� �ʱ�ȭ
	printf("����� ���ڿ� : %s\n", str); // str �迭 �� ���

	str[10] = '\0'; // �ε��� ��(���� X) 10�� str �迭 ���� null�� ���� <- ���ڿ��� �ΰ��� �ɸ��� ��� ����
	printf("null�� ������ ���ڿ� : %s\n", str);

	str[7] = '\0'; // �ε��� �� 7�� str �迭 ���� null�� ����
	printf("null�� ������ ���ڿ� : %s\n", str);

	str[3] = '\0'; // �ε��� �� 3�� str �迭 ���� null�� ����
	printf("null�� ������ ���ڿ� : %s\n", str);
	return 0;
}




//1���� �迭 ���ʹ���5
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