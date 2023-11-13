//
//  circle_linked_list.c
//  23.11.7 원형 연결리스트
//
//  Created by 박수현 on 11/7/23.
// command + R --> Build

#include <stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* link;
};

struct Node* head = NULL;

void insert_first(int value) {
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = value;
    if (head == NULL) {
        head = p;
        p->link = head;
    }
    else {
        p->link = head->link;
        head->link = p;
    }
}

void insert_last(int value) {
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = value;
    if(head == NULL) {
        head = p;
        p->link = head;
        //p->link = p
        //head->link = p
    }
    else {
        p->link = head->link;
        head->link = p;
        head = p;
    }
}

void delete() {
    struct Node* removed = head->link;
    head->link = removed->link; //head->link->link
    free(removed);
}

void print_list() {
    struct Node* p;
    if(head == NULL) return;
    //(p = head->link; p != head->link; p = p->link) <- 조건식 때문에 do-while문을 사용해야 함
    p = head->link;
    do {
        printf("%d -> ", p->data);
        p = p->link;
    } while (p != head->link);
    printf("\n");
}

int main() {
    
    insert_first(10);
    insert_last(20);
    insert_first(30);
    insert_last(40);
    //30->10->20->40
    /*printf("%d -> ", head->link->data); //40
    printf("%d -> ", head->link->link->data); //10
    printf("%d -> ", head->link->link->link->data); //20
    printf("%d -> \n", head->data); //30*/
    print_list();

    insert_last(50);
    /*printf("%d -> ", head->link->data); //40
    printf("%d -> ", head->link->link->data); //10
    printf("%d -> ", head->link->link->link->data); //20
    printf("%d -> ", head->link->link->link->link->data); //30
    printf("%d -> \n", head->data); //50*/
    print_list();

    delete();
    /*printf("%d -> ", head->link->data); //10
    printf("%d -> ", head->link->link->data); //20
    printf("%d -> ", head->link->link->link->data); //30
    printf("%d -> \n", head->data); //50*/
    print_list();
    
    return 0;
}
