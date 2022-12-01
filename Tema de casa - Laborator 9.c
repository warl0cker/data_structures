********************************************************************
9.1. Pentru urmatoarea lista de cuvinte:
good, bool, cool, incandescent, gabby, drunk, match, pumped,
crayon, undo, flap, memory, line, trashy, elite, kind, amusing.
a) Generati Arborele Binar de Cautare
b) Scrieti parcurgerile: InOrdine, PreOrdine si PostOrdine
c) Descrieti succesiunea de stergere a nodului cu cheia drunk
                          good
                          /  \
                         /    \
                        /      \
                       /        \
                      /          \
                     /            \
                    /              \
                  bool         incandescent
                  / \                \
                 /   \                \
                /     \                \
               /       \                \
           amusing    cool             match
                         \              / \
                          \            /   \
                           \          /     \
                            \        /       \
                          gabby    line    pumped
                            /      /         / \
                           /      /         /   \
                          /      /         /     \
                         /      /         /       \
                      drunk   kind     memory    undo
                       / \                        /
                      /   \                      /
                     /     \                    /
                    /       \                  /
                 crayon    flap             trashy
                            /
                           /
                          /
                         /
                      elite

  InOrdine: amusing,bool,cool,crayon,drunk,elite,flap,gabby,good,
            incandescent,kind,line,match,memory,pumped,trashy,undo
 PreOrdine: good,bool,amusing,cool,gabby,drunk,crayon,flap,elite,
            incandescent,match,line,kind,pumped,memory,undo,trashy
PostOrdine: amusing,crayon,elite,flap,drunk,gabby,cool,bool,kind,
            line,memory,trashy,undo,pumped,match,incandescent,good
            
********************************************************************
9.2. Pentru un Arbore Binar de Cautare avand cheia un numar intreg
(a) Scrieți o secventa de cod care returnează numărul elementelor
(nodurilor) din arbore.
(b) Scrieți o secventa de cod care returnează suma tuturor cheilor
din arbore.
(c) Scrieți o secventa de cod care returnează cheia cu valoarea
maximă din arbore, sau -1 daca arborele este vid.  Presupunem că
toate valorile sunt pozitive.

typedef struct node{
    int nr;
    struct node *next;
}node;
int problema_a(node **list) {
    int total = 0;
    for (node *temp = *list; temp != NULL; temp = temp->next)
        total++;
    return total;
}
int problema_b(node **list) {
    int suma = 0;
    for (node *temp = *list; temp != NULL; temp = temp->next)
        suma += temp->nr;
    return suma;
}
int problema_c(node **list) {
    if (*list == NULL) return -1;
    int max = 0;
    for (node *temp = *list; temp != NULL; temp = temp->next)
        if (max < temp->nr) max = temp->nr;
    return max;
}

********************************************************************
9.3.  Reprezentati Arborele Binar de Cautare pentru cheile
reprezentand literele din sirul de caractere: INTREBARESIMPLA,
in ordinea impusa considerand ca arborele este initial nul.
                   I
                  / \
                 /   \
                /     \
               /       \
              E         N
             / \      /   \
            /   \    /     \
           B     E  I       T
          /          \     /
         /            \   /
        A              M  R
         \            /  / \
          \          /  /   \
           A        L  P     R
                              \
                               \
                                S

********************************************************************
