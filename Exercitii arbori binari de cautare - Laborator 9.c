**************************************************************************************
Exercitiul 9.1. 
Introduceți elemente cu următoarele chei (în ordinea dată) într-un ABC inițial NULL:
30, 40, 24, 58, 48, 26, 11, 13. Reprezentati arborele după oricare două inserții.
Scrieti parcurgerile InOrdine, PreOrdine si PostOrdine pentru arborele generat.

                30
                / \
               /   \
              24   40
             / \     \
            /   \    58
           11   26   /
            \       48
            13

  InOrder: 11 13 24 26 30 40 48 58
 PreOrder: 30 24 11 13 26 40 58 48
PostOrder: 13 11 26 24 48 58 40 30

**************************************************************************************
Exercitiul 9.2. 
Având în vedere succesiunea preordine a unui ABC  {13,5,3,2,11,7,19,23}, reprezentati
acest ABC și determinați dacă  este același cu cel descris de {2,3, 7,11,5,23,19,13}.

                  13
                  / \
                 /   \
                5    19
               / \     \
              /   \    23
             3    11
            /     /
           2     7

 PreOrder: 13 5 3 2 11 7 19 23 |
                               |  => este acelasi.
PostOrder: 2 3 7 11 5 23 19 13 |

**************************************************************************************
Exercitiul 9.3.
a. Sa se insereze intr-un arbore binar de cautare, initial vid, urmatoarele chei, in
ordinea data (reprezentati prin desen): 20, 5, 40, 1, 23, 15, 7, 6, 9, 0, 33, 20, 3,
10, 5, 6, 26, 4, 41.
b. Scrieti parcurgerile arborelui binar generat: PreOrdine, InOrdine, PostOrdine.
c. Sa se stearga succesiv nodurile avand cheile: 10, 15 si 7.

                        20
                        / \
                       /   \
                      /     \
                     /       \
                    /         \
                   5          40
                  / \         / \
                 /   \       /   \
                /     \     23   41
               /       \     \
              /         \    33
             1          15   /
            / \         /   26
           0   3       7
                \     / \
                 4   6   9
                          \
                          10

  InOrder: 0 1 3 4 5 6 7 9 10 15 20 23 26 33 40 41
 PreOrder: 20 5 1 0 3 4 15 7 6 9 10 40 23 33 26 41
PostOrder: 0 4 3 1 6 10 9 7 15 5 26 33 23 41 40 20

**************************************************************************************