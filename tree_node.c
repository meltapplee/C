#include<stdio.h>
#include<stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode *left, *right;
};

struct TreeNode n1 = { 4, NULL, NULL };
struct TreeNode n2 = { 5, NULL, NULL };
struct TreeNode n3 = { 6, NULL, NULL };
struct TreeNode n4 = { 2, &n1, &n2 };
struct TreeNode n5 = { 3, NULL, &n3 };
struct TreeNode n6 = { 1, &n4, &n5 };
struct TreeNode* root = &n6;//뭘로?;

void inorder(struct TreeNode* root) {
    if (root != NULL) {
        //중위 순회
        inorder(root->left);
        printf("%d -> ", root->data);
        inorder(root->right);
    }
}

void preorder1(struct TreeNode* root) {
    if (root != NULL) {
        //전위 순회
        printf("%d -> ", root->data);
        preorder1(root->left);
        preorder1(root->right);
    }
}

void postorder1(struct TreeNode* root) {
    if (root != NULL) {
        //후위 순회
        postorder1(root->left);
        postorder1(root->right);
        printf("%d -> ", root->data);
    }
}

int main() {
    printf("중위 순회 = ");
    inorder(root);
    printf("\n");

    printf("전위 순회 = ");
    preorder1(root);
    printf("\n");

    printf("후위 순회 = ");
    postorder1(root);
    printf("\n");

    return 0;
}
