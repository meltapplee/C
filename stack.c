#include<stdio.h>
#include<stdbool.h>
#define MAX_SIZE 10

int stack[MAX_SIZE], top = -1;

bool is_full() {
	if (top < 0) return true;
	else return false;
}

bool is_empty() {
	if (top == -1) return true;
	else return false;
}

void push(int n) {
	if (is_full == true) printf("�迭�� ���� �� �ֽ��ϴ�");
	else stack[++top] = n;
}

int pop() {
	if (is_empty == true) printf("�迭�� ����ֽ��ϴ�");
	else return stack[top--];
}

void main() {
	push(1);
	push(2);
	push(3);
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
}