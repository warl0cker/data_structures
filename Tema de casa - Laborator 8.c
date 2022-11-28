/*
 * 8.1 Transformati expresia artimetica formati infix in Prefix si Post fix, folosind un arbore binar.
 * A + B - C*D + (E^F) * G/H/I * P + Q
 * am notat E^F E la puterea F.
 * sau 8.2 Fiind expresia de la exercitiul 8.1 efectuati transformarea solicitata dar folosind o structura stiva.
 */

/*
 * Reprezentare grafica a arborelui:
                 +
                / \
               +   Q
              / \
             /   \
            /     \
           /       \
          /         \
         /           \
        -             *
       / \           / \
      /   \         /   \
     +     *       :     P
    /\     /\     / \
   /  \   /  \   /   \
  A    B C    D :     I
               / \
              /   \
             *     H
            / \
           /   \
          ^     G
         / \
        /   \
       E     F
 *
 * Prefix  (NSD): ++-+AB*CD*//*^EFGHIPQ
 * Postfix (SDN): AB+CD*-EF^G*H/I/P*+Q+
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    char data;
    struct node * left;
    struct node * right;
    struct node * next;
}node;

// NSD, NLR
void PreOrdine(node *list) {
    if (list != NULL) {
        printf("%c ", list->data);
        PreOrdine(list->left);
        PreOrdine(list->right);
    }
}

// SDN, LRN
void PostOrdine(node *list) {
    if (list != NULL) {
        PostOrdine(list->left);
        PostOrdine(list->right);
        printf("%c ", list->data);
    }
}

int main(){
    char *expression = "A+B-C*D+(E^F)*G/H/I*P+Q";
    node *lista = NULL;

    printf("\nExpresia \"%s\" in format prefixat:\n", expression);
    PreOrdine(lista);
    printf("\nExpresia \"%s\" in format postfixat:\n", expression);
    PostOrdine(lista);
    return 0;
}