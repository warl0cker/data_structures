// 1. Scrieți o secventa de cod care citește un numar intreg și afiseaza cifrele numarului în ordine inversa, folosind o stivă.
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
    int nr, rest = 0;
    scanf("%d", &nr);
    node *lista = NULL;
    while (nr != 0) {
        rest = nr % 10;
        nr /= 10;
        push(&lista, rest);
    }
    for (node *tmp = lista; tmp != NULL; tmp = tmp->next) {
        printf("%c ", tmp->number);
    }
    return 0;
}

// 2. Scrieți o secventa de cod care citește o expresie aritmetica și determină dacă parantezele sale sunt „echilibrate”. Sugestie: pentru paranteza stanga adaugati in stiva; pentru dreapta extrageti din stiva
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char character;
    struct node *next;
}node;

void push(node **list, char character) {
    node *ch = malloc(sizeof(node));
    ch->character = character;
    ch->next = (*list);
    (*list) = ch;
}

void deleteNode(node **list, char character) {
    node *temp = *list, *prev;
    if (temp != NULL && temp->character == character) {
        *list = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->character != character) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    free(temp);
    return;
}

int main() {
    char expression[100];
    scanf("%99s", expression);
    node *lista = NULL;
    for (int i = 0; expression[i] != '\0'; i++) {
        if (expression[i] == '(') push(&lista, expression[i]);
        if (expression[i] == ')') deleteNode(&lista, expression[i]);
    }
    (lista == NULL) ? printf("expresia este valida\n") : printf("expresia este invalida\n");
    return 0;
}

// 3. Scrieți o secventa de cod care citește un număr întreg pozitiv și imprimă reprezentarea in baza 8 a acelui număr întreg.
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
    scanf("%d", &nr);
    
    node *lista = NULL;
    while (nr != 0) {
        push(&lista, (nr % 8));
        nr /= 8;
    }
    for (node *tmp = lista; tmp != NULL; tmp = tmp->next) {
        printf("%d", tmp->number);
    }
    return 0;
}

// 4. Scrieti o secventa de cod pentru generarea primelor 50 de numere ale seriei de numere:  S1 = N, S2 = S1 + 1, S3 = 2*S1 + 1, S4 = S1 + 2, S5 = S2 + 1, S6 = 2*S2 + 1, S7 = S2 + 2, …
#include <stdio.h>

int main() {
    int tmp, sum[50], cnt = 1, s = 0;
    scanf("%d", &tmp);
    for (int i = 0; i < 50; i++) {
        if (cnt == 4) {
            cnt = 1;
            tmp = sum[s++];
        }
        if (cnt == 1) sum[i] = tmp + 1;
        if (cnt == 2) sum[i] = 2 * tmp + 1;
        if (cnt == 3) sum[i] = tmp + 2;
        ++cnt;
    }
    for (int i = 0; i < 50; i++) {
        printf("%d ", sum[i]);
        if (i != 49) printf(", ");
    }
    return 0;
}

// 5. Se dau numerele n și m și următoarele operații:
// a) n = n + 1 ; b) n = n + 2 ; c) n = n * 2
// Scrieți o secventa de cod  care găsește cea mai scurtă secvență de operații din lista de mai sus, care începe de la n și se termină la m. Dacă există mai multe secvențe afisati doar prima dintre ele. Sugestie: folositi coada.
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next;
}node;

void push(node **list, int number) {
    node *nr = malloc(sizeof(node));
    nr->number = number;
    nr->next = (*list);
    (*list) = nr;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a >= b) printf("nu exista solutie\n");
    else {
        int stop = b;
        node *lista = NULL;
        push(&lista, b);
        for (int i = 0; i < b / 2; i++) {
            if (b / 2 >= a) push(&lista, (b /= 2));
            else if (b - 2 >= a) push(&lista, (b -= 2));
            else if (b - 1 >= a) push(&lista, (b -= 1));
            else break;
        }
        for (node *temp = lista; temp != NULL; temp = temp->next) {
            if (temp->number == stop) printf("%d\n", temp->number);
            else printf("%d -> ", temp->number);
        }
    }
    return 0;
}
