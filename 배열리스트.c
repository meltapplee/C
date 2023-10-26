#include <stdio.h>
#define MAX_LIST_SIZE 5

struct ArrayListType {
    int array[MAX_LIST_SIZE]; // ����Ʈ�� ����� �迭 ����
    int size; // ���� ����Ʈ�� ����� �׸���� ����
};

void init_list(struct ArrayListType* L) {
    L->size = 0;
}

int is_full(struct ArrayListType* L) {
    return L->size == MAX_LIST_SIZE;
}

int is_empty(struct ArrayListType* L) {
    return L->size == 0;
}

void print_list(struct ArrayListType* L) {
    for (int i = 0; i < L->size; i++) {
        printf("%d -> ", L->array[i]);
    }
    printf("\n");
}

void insert_last(struct ArrayListType* L, int item) {
    if (is_full(L)) {
        printf("��ȭ����\n");
    }
    else {
        L->array[L->size++] = item;
    }
}

void insert(struct ArrayListType* L, int pos, int item) {
    if (is_full(L)) {
        printf("��ȭ����\n");
    }
    else if (pos >= 0 && pos <= L->size) {
        for (int i = L->size; i > pos; i--) {
            L->array[i] = L->array[i - 1];
        }
        L->array[pos] = item;
        L->size++;
    }
    else {
        printf("��ġ����\n");
    }
}

int delete_val(struct ArrayListType* L, int pos) {
    int item;
    if (is_empty(L)) {
        printf("�������\n");
        return 0;
    }
    else if (pos < 0 || pos >= L->size) {
            printf("��ġ����\n");
        return 0;
    }
    item = L->array[pos];
    for (int i = pos; i < L->size - 1; i++) {
        L->array[i] = L->array[i + 1];
    }
    L->size--;
    return item;
}

int main() {
    struct ArrayListType list;

    init_list(&list);
    insert(&list, 0, 10);
    print_list(&list);
    insert(&list, 0, 20);
    print_list(&list);
    insert(&list, 0, 30);
    print_list(&list);
    insert_last(&list, 40);
    print_list(&list);
    delete_val(&list, 0);
    print_list(&list);

    return 0;
}
