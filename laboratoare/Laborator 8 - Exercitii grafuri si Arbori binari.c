**************************************************************************************
Exercitiul 8.2
Sa se scrie parcurgerile in preordine, inordine si postordine pentru
fiecare din arborii de mai jos.

         T1.             T2.        T3.
          A               A          A
        /   \            /|           \
       /     \          / |            \
      /       \        /  |             \
     B         H      B   C              B
    / \       /           |\            /
   /   \     /            | \          /
  /     \   /             |  \        /
 C       E I              D   E      C
  \     / \               |           \
   \   /   \              |            \
    \ /     \             |             \
    D F      G            F              D

T1 =   InOrdine: A B C D E F G H I
      PreOrdine: A B C D E F H I G
     PostOrdine: D C F E B G I H A

T2 =   InOrdine: A B C D E F
      PreOrdine: A B C D F E
     PostOrdine: B F D E C A

T3 =   InOrdine: A B C D
      PreOrdine: A B C D
     PostOrdine: D C B A

**************************************************************************************
Exercitiul 8.3
Sa se scrie arborele asociat urmatoarelor expresii aritmetice:
    E1 = a*b+c/d–e
    E2 = a*(b+c)/(d–e)
    E3 = (a+b)*(b+c)*(c+a)
    E4 = a/(a+b)+(a+b)/b
    E5 = x/(y+z)+y/(x+z)+z/(x+y)

-----------------------------------
E1       -
        / \
       /   \
      +     e
     / \
    /   \
   *     :
  / \   / \
 a   b c   d
-----------------------------------
E2     ___:___
      /       \
     /         \
    *           -
   / \         / \
  /   \       /   \
 a     +     d     e
      / \
     b   c
-----------------------------------
E3           ______*______
            /             \
           /               \
       ___*___              +
      /       \            / \
     /         \          /   \
    +           +        c     a
   / \         / \
  /   \       /   \
 a     b     b     c
-----------------------------------
E4     ____+____
      /         \
     /           \
    :             :
   / \           / \
  /   \         /   \
 a     +       +     b
      / \     / \
     /   \   /   \
    a     b a     b
-----------------------------------
E5                ___________+___________
                 /                       \
                /                         \
           ____+____                       :
          /         \                     / \
         /           \                   /   \
        :             :                 z     +
       / \           / \                     / \
      /   \         /   \                   /   \
     x     +       y     +                 x     y
          / \           / \
         /   \         /   \
        y     z       x     z

**************************************************************************************
Exercitiul 8.4
Sa se scrie forma poloneza postfixata asociat urmatoarelor expresiilor aritmetice de
la execitiul 8.3

E1 = PostOrdine: a b * c d / + e -
E2 = PostOrdine: a b c + * d e - /
E3 = PostOrdine: a b + b c + * c a + *
E4 = PostOrdine: a a b + / a b + b / +
E5 = PostOrdine: x y z + / y x z + / + z x y + / +

**************************************************************************************