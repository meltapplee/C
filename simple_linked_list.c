#include<stdio.h>
#include<stdlib.h>

struct Listnode {
	int data;
	struct Listnode* link;
};

struct Listnode* insert_first(struct Listnode* head, int value) {
	//연결 리스트 맨앞에 삽입하는 동작 작성
	struct Listnode* p = (struct Listnode*)malloc(sizeof(struct Listnode));
	p->data = value;
	p->link = head;
	head = p;

	return head;
}

struct Listnode* insert(struct Listnode* head, struct Listnode* pre, int value) {
	//연결 리스트 중간에 삽입하는 동작 작성
	struct Listnode* p = (struct Listnode*)malloc(sizeof(struct Listnode));
	p->data = value;
	p->link = pre->link;
	pre->link = p;

	return head;
}

struct Listnode* delete_first(struct Listnode* head) {
	//연결 리스트 맨 앞 노드 삭제하는 동작 작성
	struct Listnode* removed = head;
	if (head == NULL) return NULL;
	head = removed->link;
	free(removed);

	return head;
}

struct Listnode* delete(struct Listnode* head, struct Listnode* pre) {
	//연결 리스트 중간 노드 삭제하는 동작 작성
	struct Listnode* removed = pre->link;
	pre->link = removed->link;
	free(removed);

	return head;
}

void print_list(struct Listnode* head) {
	//출력 함수 작성
	struct Listnode* p;
	for (p = head; p != NULL; p = p->link) {
		printf("%d -> ", p->data);
	}
	printf("NULL\n");
}

int main() {
	struct Listnode* head = NULL;
	for (int i = 0; i < 5; i++) { //(; head != NULL)
		head = insert_first(head, i);
		print_list(head);
	}

	for (int i = 0; i < 5; i++) {
		head = delete_first(head);
		print_list(head);
	}

	return 0;
}