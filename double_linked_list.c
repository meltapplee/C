//
//  double_linked_list.c
//  23.11.9 이중 연결 리스트
//
//  Created by 박수현 on 11/9/23.
//

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* llink;
    struct Node* rlink;
};

struct Node* head;

void init() {
    head->llink = head;
    head->rlink = head;
}

void insert(struct Node* before, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->llink = before;
    newNode->rlink = before->rlink;
    before->rlink->llink = newNode;
    before->rlink = newNode;
}

void delete(struct Node* removed) {
    if(removed == head) return;
    removed->llink->rlink = removed->rlink;
    removed->rlink->llink = removed->llink;
    free(removed);
}

void print_list() {
    struct Node* p;
    for(p = head->rlink; p != head; p = p->rlink) {
        printf("<- %d ->", p->data);
    }
    printf("\n");
}

int main() {
    head = (struct Node*)malloc(sizeof(struct Node));
    init();
    printf("삽입 단계\n");
    for (int i = 0; i < 5; i++) {
        insert(head, i);
        print_list();
    }

    printf("\n삭제 단계\n");
    for (int i = 0; i < 5; i++) {
        delete(head->rlink);
        print_list();
    }

    return 0;
}
