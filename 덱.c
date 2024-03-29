#include <stdio.h>
#define MAX_QUEUE_SIZE 5


struct Queue {
	int data[MAX_QUEUE_SIZE];
	int front, rear;
};

void init_queue(struct Queue* q) {
	q->front = q->rear = 0;
}

int is_full(struct Queue* q) {
	return (q->rear + 1) % MAX_QUEUE_SIZE == q->front;
}

int is_empty(struct Queue* q) {
	return q->rear == q->front;
}


void print_deque(struct Queue* q) {
	int i = q->front;
	if (!is_empty(q)) {
		while (i != q->rear) {
			i = (i + 1) % MAX_QUEUE_SIZE;
			printf("%d |  ", q->data[i]);
		}
		printf("\n");
	}
}

//원형큐 삽입과 동일 enqueue
void add_rear(struct Queue* q, int item) {
	if (is_full(q))	printf("포화상태\n");
	else {
		if (q->rear == MAX_QUEUE_SIZE - 1) q->rear = 0;
		q->data[++(q->rear) % MAX_QUEUE_SIZE] = item;
	}
}

//원형큐의 삭제 함수와 동일 dequeue
int delete_front(struct Queue* q) {
	if (is_empty(q)) {
		printf("공백상태\n");
		return 0;
	}
	else {
		if (q->front == MAX_QUEUE_SIZE - 1) q -> front = 0;
		return q->data[++(q->front) % MAX_QUEUE_SIZE];
	}
}

//front에 삽입 -> 즉 반대로 이동 
void add_front(struct Queue* q, int item) {
	if (is_full(q)) {
		printf("포화 상태\n");
		return;
	}

	if (q->front < 0) q->front = MAX_QUEUE_SIZE - 1;
	q->data[q->front--] = item;
}

//rear에서 삭제 -> 반대로 이동
int delete_rear(struct Queue* q) {
	int val; 
	if (is_empty(q)) {
		printf("공백상태\n");
		return 0;
	}
	val = q->data[q->rear];
	q->data[--(q->rear)];
	return val;
}

int main() {
	struct Queue q;
	init_queue(&q);
	add_rear(&q, 10);	print_deque(&q);
	add_front(&q, 20);	print_deque(&q);
	add_rear(&q, 30);	print_deque(&q);

	delete_front(&q);	print_deque(&q);
	delete_rear(&q);	print_deque(&q);

	return 0;
}