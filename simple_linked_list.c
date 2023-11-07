#include<stdio.h>
#include<stdlib.h>

struct Listnode {
	int data;
	struct Listnode* link;
};

struct Listnode* insert_first(struct Listnode* head, int value) {
	//���� ����Ʈ �Ǿտ� �����ϴ� ���� �ۼ�
	struct Listnode* p = (struct Listnode*)malloc(sizeof(struct Listnode));
	p->data = value;
	p->link = head;
	head = p;

	return head;
}

struct Listnode* insert(struct Listnode* head, struct Listnode* pre, int value) {
	//���� ����Ʈ �߰��� �����ϴ� ���� �ۼ�
	struct Listnode* p = (struct Listnode*)malloc(sizeof(struct Listnode));
	p->data = value;
	p->link = pre->link;
	pre->link = p;

	return head;
}

struct Listnode* delete_first(struct Listnode* head) {
	//���� ����Ʈ �� �� ��� �����ϴ� ���� �ۼ�
	struct Listnode* removed = head;
	if (head == NULL) return NULL;
	head = removed->link;
	free(removed);

	return head;
}

struct Listnode* delete(struct Listnode* head, struct Listnode* pre) {
	//���� ����Ʈ �߰� ��� �����ϴ� ���� �ۼ�
	struct Listnode* removed = pre->link;
	pre->link = removed->link;
	free(removed);

	return head;
}

void print_list(struct Listnode* head) {
	//��� �Լ� �ۼ�
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