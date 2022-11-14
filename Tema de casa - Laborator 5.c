/*
5.2. Scrieti secventele  pseudocod specifice pentru o lista dublu inlantuit:
    1. adaugare la inceput 2 elemente
    2. adaugare la final 2 elemente
    3. afisare continut lista rezultata
    4. stergere primul element
    5. cautare un nod dupa o valoare
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
    struct node *prev;
}
node;

void push(node **list, int data) {
    node *n = malloc(sizeof(node));
    n->data = data;
    n->next = (*list);
    n->prev = NULL;
    if ((*list) != NULL) (*list)->prev = n;
    (*list) = n;
}

void append(node **list, int data) {
    node *n = malloc(sizeof(node));
    node *last = (*list);
    n->data = data;
    n->next = NULL;
    if ((*list) == NULL) {
        n->prev = NULL;
        (*list) = n;
        return;
    }
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = n;
    n->prev = last;
    return;
}

void deleteFirst(node **list) {
    if ((*list) != NULL) {
        node *toDelete = (*list);
        if (toDelete->next) {
            toDelete->next->prev = toDelete->prev;
        }
        *list = toDelete->next;
        free(toDelete);
    }
    return;
}

int main() {
    printf("[*] Initializam lista si cream un vector de 4 elemente\n");
    node *list = NULL;
    int n, arr[4] = {10, 20, 11, 21};
    printf("[*] Adaugam la final in lista elementul %d\n", arr[0]);
    append(&list, arr[0]);
    printf("[*] Adaugam la final in lista elementul %d\n", arr[1]);
    append(&list, arr[1]);
    printf("[*] Adaugam la inceput in lista elementul %d\n", arr[2]);
    push(&list, arr[2]);
    printf("[*] Adaugam la inceput in lista elementul %d\n", arr[3]);
    push(&list, arr[3]);
    printf("[+] Printam lista de la stanga la dreapta (inainte):\n   [-] ");
    for (node *tmp = list; tmp != NULL; tmp = tmp->next) {
        printf("%d ", tmp->data);
    }
    printf("\n");
    printf("[*] Stergem primul element din lista\n");
    deleteFirst(&list);
    printf("[+] Printam din nou lista de la stanga la dreapta (inainte):\n   [-] ");
    for (node *tmp = list; tmp != NULL; tmp = tmp->next) {
        printf("%d ", tmp->data);
    }
    printf("\n");
    printf("[+] Cautam in lista elementul %d\n", arr[2]);
    for (node *tmp = list; tmp != NULL; tmp = tmp->next) {
        if (tmp->data == arr[2]) {
            printf("   [-] Elementul %d a fost gasit: [%d]\n", arr[2], tmp->data);
        }
    }
    printf("[*] Golim ramul de datele folosite de program...\n");
    while (list != NULL) {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
    printf("[~] Sfarsit de executie.\n");
    return 0;
}