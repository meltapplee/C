#include<stdio.h>
#include <string.h>
#define MAX_STACK_SIZE 100


char stack[MAX_STACK_SIZE];
int top = -1;

int is_full() {
	return top == MAX_STACK_SIZE - 1;
}

int is_empty() {
	return top == -1;
}

void push(char a) {
	if (is_full()) {
		printf("IS_FULL_ERROR");
		return;
	}
	else stack[++top] = a;
}

char pop() {
	if (is_empty()) {
		printf("IS_EMPTY_ERROR");
		return;
	}
	else return stack[top--];
}



int is_match(char* c) {
	char ch, open;
	int length = strlen(c);

	for (int i = 0; i < length; i++) {
		ch = c[i];
		switch (ch) {
		case '{':
		case '[':
		case '(':
			push(ch);
			break;
		case ')':
			if (pop() != '(') {
				printf("\nIS_NOT_MATCH\n");
				return 0;
			}
			break;
		case '}':
			if (pop() != '{') {
				printf("\nIS_NOT_MATCH\n");
				return 0;
			}
			break;
		case ']':
			if (pop() != '[') {
				printf("\nIS_NOT_MATCH\n");
				return 0;
			}
			break;
		}
	}
	if (is_empty()) return 1;

	return 0;
}

int main() {
	char* p = "{ if ((i==0) && (j==0)";
	if (is_match(p) == 1)
		printf("%s 괄호 검사 성공!\n", p);
	else
		printf("%s 괄호 검사 실패!\n", p);

	return 0;
}