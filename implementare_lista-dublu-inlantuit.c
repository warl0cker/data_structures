#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
    struct node *prev;
}node;

void insertPrim(node **lista, int data) {
    node *nodNou = malloc(sizeof(node));
    nodNou->data = data;
    nodNou->next = *lista;
    nodNou->prev = NULL;
    if (*lista != NULL) (*lista)->prev = nodNou;
    *lista = nodNou;
}

void insertFinal(node **lista, int data) {
    node *nodNou = malloc(sizeof(node));
    nodNou->data = data;
    nodNou->next = NULL;
    nodNou->prev = NULL;
    if (*lista == NULL) {
        *lista = nodNou;
        nodNou->next = NULL;
        return;
    }
    node *temp = *lista;
    // parcurgere lista (se poate si fara)
    while (temp->next != NULL) temp = temp->next;
    temp->next = nodNou;
    nodNou->prev = temp;
}

void deletePrim(node **lista) {
    node *temp = *lista;
    if (*lista == NULL) {
        printf("Lista nu are noduri!\n");
        return;
    }
    *lista = (*lista)->next;
    free(temp);
}

void afisare(node *lista) {
    node *temp;
    printf("Parcurgere in sens direct: ");
    while (lista != NULL) {
        printf("%d ", lista->data);
        temp = lista;
        lista = lista->next;
    }
    printf("\n");
    printf("parcurgere in sens invers: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
}

int main() {
    node *prim = NULL;
    insertPrim(&prim, 1);
    insertPrim(&prim, 2);
    insertPrim(&prim, 3);
    afisare(prim);
    return 0;
}
