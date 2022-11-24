#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}node;

void insert(node **lista, int data) {
    node *nodNou = malloc(sizeof(node));
    nodNou->data = data;
    nodNou->next = *lista;
    *lista = nodNou;
}

void deletePrim(node **lista) {
    node *temp = *lista;
    if (*lista == NULL) {
        printf("Lista nu are noduri!\n");
    } else {
		*lista = (*lista)->next;
	}
    free(temp);
	return;
}

void afisare(node *lista) {
    printf("Afisare: ");
    while (lista != NULL) {
        printf("%d ", lista->data);
        lista = lista->next;
    }
    printf("\n");
}

int main() {
    node *prim = NULL;
    insert(&prim, 100);
    insert(&prim, 80);
    insert(&prim, 60);
    insert(&prim, 40);
    insert(&prim, 20);
    afisare(prim);
    deletePrim(&prim);
    deletePrim(&prim);
    afisare(prim);
    return 0;
}