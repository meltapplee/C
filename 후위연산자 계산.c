#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;


int is_full() {
	if (top == MAX_SIZE - 1) return 1;
	return 0;
}

int is_empty() {
	if (top == -1) return 1;
	return 0;
}

void push(char n) {
	if (is_full()) {
		printf("FULL_ERROR");
		return;
	}
	else stack[++top] = n;
}

char pop() {
	if (is_empty()) {
		printf("EMPTY_ERROR");
		return;
	}
	else return stack[top--];
}

int calc_postfix(char exp[]) {
	int first, second, value;
	int len = strlen(exp);
	char c;


	for (int i = 0; i < len; i++) {
		c = exp[i];
		if (c >= '0' && c <= '9') { //문자열에 들어가있는것이라 숫자로 변경해줘야함
			push(c - '0');
		}
		else if (c == '+' || c == '-' || c == '*' || c == '/') {
			second = pop();
			first = pop();
			switch (c) {
			case '+':
				value = first + second;
				break;
			case '-':
				value = first - second;
				break;
			case '*':
				value = first * second;
				break;
			case '/':
				value = first / second;
				break;
			}
			push(value);
		}
	}
	return pop();
}

int main() {
	printf("후위표기식은 : 82/3-32*+\n");
	printf("결과값은 %d\n", calc_postfix("82/3-32*+"));
	return 0;
}