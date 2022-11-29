// Exercitiul 9.1. Introduceți elemente cu următoarele chei (în ordinea dată) într-un ABC inițial NULL: 30 , 40 , 24 , 58 , 48 , 26 , 11 , 13 . Reprezentati arborele după oricare două inserții. Scrieti parcurgerile InOrdine, PreOrdine si PostOrdine pentru arborele generat.
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int key;
    struct node *left, *right;
} node;

node* newNode(int item) {
    node* temp = malloc(sizeof(node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
node* insert(node* node, int key) {
    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    return node;
}
void inorder(node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}
void preorder(node* root) {
    if (root != NULL) {
        printf("%d ", root->key);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->key);
    }
}

int main() {
    node* root = NULL;
    root = insert(root, 30);
    insert(root, 40);
    insert(root, 24);
    insert(root, 58);
    insert(root, 48);
    insert(root, 26);
    insert(root, 11);
    insert(root, 13);
    printf("InOrdine:\n");
    inorder(root);
    printf("\n\n");
    printf("PreOrdine:\n");
    preorder(root);
    printf("\n\n");
    printf("PostOrdine:\n");
    postorder(root);
    printf("\n\n");
    return 0;
}
