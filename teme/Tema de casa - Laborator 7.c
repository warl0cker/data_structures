// 7.1 Descrieți o structură de date care defineste două stive utilizand  o structură liniara statica. Implementati operațiunile Pop() și Push().
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int arr[SIZE];
int top = 0;
void push() {
    int element;
    if (top == SIZE) printf("Stiva este plina!\n");
    else {
        printf("Introduceti un element: ");
        scanf("%d", &element);
        arr[top++] = element;
    }
}
void pop() {
    int element;
    if (top == 0) printf("Stiva este goala!\n");
    else {
        printf("Am sters elementul: %d\n", arr[top]);
        element = arr[top--];
    }
}
void print() {
    if (top == 0) printf("Stiva este goala!\n");
    else {
        printf("Elementele din stiva sunt:\n");
        for (int i = top - 1; i >= 0; i--) {
            if (i == 0) printf("%d", arr[i]);
            else printf("%d, ", arr[i]);
        }
        printf("\n");
    }
}
int main() {
    int optiune;
    do {
        printf("\n1. Adauga\n2. Sterge\n3. Printeaza\n4. Exit\n\n");
        printf("Alege o optiune: ");
        scanf("%1d", &optiune);
        switch (optiune) {
            case 1: push();    break;
            case 2: pop();     break;
            case 3: print();   break;
            case 4: exit(0);   break;
            default:
                printf("Optiune invalida!\n");
                break;
        }
    } while (optiune != 4);
    return 0;
}

// 7.2. Scrieți o secventa de cod care citește un sir de caractere și il afiseaza  în ordine inversă. Alege  structura de date optima.
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    char character;
    struct node *next;
} node;
void push(node **list, char character) {
    node *ch = malloc(sizeof(node));
    ch->character = character;
    ch->next = (*list);
    (*list) = ch;
}
int main() {
    char string[100];
    scanf("%99s", string);
    node *lista = NULL;
    for (int i = 0; string[i] != '\0'; i++)
        push(&lista, string[i]);
    for (node *temp = lista; temp != NULL; temp = temp->next)
        printf("%c", temp->character);
    return 0;
}

// 7.3. Scrieți o secventa de cod  care citește un număr întreg pozitiv și afiseaza reprezentarea binara a acelui număr întreg. Alege  structura de date optima.
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int number;
    struct node *next;
} node;
void push(node **list, int number) {
    node *nr = malloc(sizeof(node));
    nr->number = number;
    nr->next = (*list);
    (*list) = nr;
}
int main() {
    int nr;
    do {
        scanf("%d", &nr);
    } while (nr <= 0);
    node *lista = NULL;
    while (nr != 0) {
        push(&lista, (nr % 2));
        nr /= 2;
    }
    for (node *temp = lista; temp != NULL; temp = temp->next)
        printf("%d", temp->number);
    return 0;
}

// 7.4. Scrieti o secventa de cod pentru prelucrarea urmatorului sir de caractere: INTREBARE SIMPLA, dupa regula: la fiecare 4 litere se introduce progresiv cate o steluta un asterisk, ca in exemplul: ABCD*ABCD**ABCD***... O literă înseamnă push(), iar un asterisk înseamnă pop(). Care este succesiunea de valori returnate de operațiile pop() când această secvență de operații este efectuată pe o stivă LIFO inițial goală.
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    char character;
    struct node *next;
}node;
void push(node **lista, char character) {
    node *nodNou = malloc(sizeof(node));
    nodNou->character = character;
    nodNou->next = (*lista);
    (*lista) = nodNou;
    return;
}
void pop(node **lista) {
    node *temp = *lista;
    *lista = (*lista)->next;
    free(temp);
    return;
}
int main() {
    int stars = 1, cnt = 0;
    const char string[] = "INTREBARE SIMPLA";
    node *lista = NULL;
    for (int i = 0; string[i] != '\0'; i++) {
        push(&lista, string[i]);
        if (cnt == 3) {
            for (int j = 0; j < stars; j++) pop(&lista);
            // for (int j = 0; j < stars; j++) push(&lista, '*');
            stars++;
            cnt = 0;
        } else {
            cnt++;
        }
    }
    for (node *temp = lista; temp != NULL; temp = temp->next)
        printf("%c ", temp->character);
    return 0;
}

// 7.5. Scrieti o secventa de cod pentru prelucrarea urmatorului sir de caractere: INTREBARE SIMPLA, dupa regula: la fiecare 4 litere se introduce progresiv cate un asterisk, ca in exemplul: ABCD*ABCD**ABCD***... O literă înseamnă push(), iar un asterisk înseamnă pop() în  următoarea secvență. Dați succesiunea de valori returnate de operațiile pop() când această secvență de operații este efectuată pe o stivă FIFO inițial goală.
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char character;
    struct node *next;
}node;

void push(node **lista, char character) {
    node *nodNou = malloc(sizeof(node));
    nodNou->character = character;
    nodNou->next = NULL;
    if(*lista == NULL) *lista = nodNou;
    else {
        node *temp = *lista;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = nodNou;
    }
}

void pop(node **lista) {
    node *temp = *lista;
    *lista = (*lista)->next;
    free(temp);
}

int main() {
    int stars = 1, cnt = 0;
    const char string[] = "INTREBARE SIMPLA";
    node *lista = NULL;
    for (int i = 0; string[i] != '\0'; i++) {
        push(&lista, string[i]);
        if (cnt == 3) {
            for (int j = 0; j < stars; j++) pop(&lista);
            // for (int j = 0; j < stars; j++) push(&lista, '*');
            stars++;
            cnt = 0;
        } else {
            cnt++;
        }
    }
    for (node *temp = lista; temp != NULL; temp = temp->next)
        printf("%c ", temp->character);
    return 0;
}
