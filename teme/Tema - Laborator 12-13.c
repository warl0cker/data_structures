***********************************************************************************************************************************************
12.1 Pentru expresia: the quick brown fox jumps over the lazy dog:
a) generati Arborele Huffman asociat
b) determinati pentru fiecare caracter codul de substitutie
c) scrieti forma comprimata a textului: fox on the field

a)                          __________________________43_________________________
                           |                                                     |
              _____________16____________                             ___________27________
             |                           |                           |                     |
       ______8______               ______8______               ______12_____             __15__
      |             |             |             |             |             |           |      |
    __4___        __4___        __4___        __4___        __4___        __8___       _7__    8  
   |      |      |      |      |      |      |      |      |      |      |      |     |    |   _
  _2_    _2_    _2_    _2_    _2_    _2_    _2_    _2_    _2_    _2_    _4_    _4_    3    4  
 |   |  |   |  |   |  |   |  |   |  |   |  |   |  |   |  |   |  |   |  |   |  |   |   e    o
 1   1  1   1  1   1  1   1  1   1  1   1  1   1  1   1  1   1  1   1  2   2  2   2
 q   i  c   k  b   w  n   f  x   j  m   p  s   v  l   a  z   y  d   g  t   h  u   r

b)  q = 00000          m = 01010          t = 10100
    i = 00001          p = 01011          h = 10101
    c = 00010          s = 01100          u = 10110
    k = 00011          v = 01101          r = 10111
    b = 00100          l = 01110          e = 1100
    w = 00101          a = 01111          o = 1101
    n = 00110          z = 10000          _ = 111
    f = 00111          y = 10001
    x = 01000          d = 10010
    j = 01001          g = 10011

c) 00111 1101 01000 111 1101 00110 111 10100 10101 1100 111 00111 00001 1100 01110 10010

***********************************************************************************************************************************************
12.2 Fie urmatorul arbore binar Huffman:
a) decodificati urmatoarea secventa: 0111000101010000110
b) decodificati urmatoarea secventa: 01000011000011110111100
c) codificati urmatorul sir de caractere: TAMNEENMAT

           Start
            / \
          1/   \0
          /     \
         E      /\
              1/  \0
              /    \
             /\     A
           1/  \0
           /    \
          /\     M
        1/  \0
        /    \
       T      N

a) T A M E M A N
b) M A N A T E T E A
c) 0111 00 010 0110 1 1 0110 010 00 0111

***********************************************************************************************************************************************
12.3 Pentru urmatorul sir de caractere: UN TEXT DE TEST PENTRU INDEXARE SI TABELE DE DISPERSIE,
avand functia de dispersie: h(x) = x % 10
a) generati tabela de dispersie, la nivel de litera
b) determinati numarul de coliziuni ( daca exista)
c) specificati modul de cautare al cuvintelor: DE si ED

a)____________________________________________________________________________________________________________________________________________
|Text  | U| N| T| E| X| T| D| E| T| E| S| T| P| E| N| T| R| U| I| N| D| E| X| A| R| E| S| I| T| A| B| E| L| E| D| E| D| I| S| P| E| R| S| I| E|
|------|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|
|Hash  | 5| 8| 4| 9| 8| 4| 8| 9| 4| 9| 3| 4| 0| 9| 8| 4| 2| 5| 3| 8| 8| 9| 8| 5| 2| 9| 3| 3| 4| 5| 6| 9| 6| 9| 8| 9| 8| 3| 3| 0| 9| 2| 3| 3| 9|
|------|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|
|ASCII |85|78|84|69|88|84|68|69|84|69|83|84|80|69|78|84|82|85|73|78|68|69|88|65|82|69|83|73|84|65|66|69|76|69|68|69|68|73|83|80|69|82|83|73|69|
 ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾

b)______________________________
|h| 0| 1| 2| 3| 4| 5| 6| 7| 8| 9|
'-|--|--|--|--|--|--|--|--|--|--|
  | P|  | R| S| T| U| B|  | N| E|
  |--|--|--|--|--|--|--|--|--|--|
  | P|  | R| I| T| U| L|  | X| E|
  |--|--|--|--|--|--|--|--|--|--|
  |  |  | R| S| T| A|  |  | D| E|
  |--|--|--|--|--|--|--|--|--|--|
  |  |  |  | I| T| A|  |  | N| E|
  |--|--|--|--|--|--|--|--|--|--|
  |  |  |  | I| T|  |  |  | N| E|
  |--|--|--|--|--|--|--|--|--|--|
  |  |  |  | S| T|  |  |  | D| E|
  |--|--|--|--|--|--|--|--|--|--|
  |  |  |  | S|  |  |  |  | X| E|
  |--|--|--|--|--|--|--|--|--|--|
  |  |  |  | I|  |  |  |  | D| E|
  |--|--|--|--|--|--|--|--|--|--|
  |  |  |  |  |  |  |  |  | D| E|
  |--|--|--|--|--|--|--|--|--|--|
  |  |  |  |  |  |  |  |  |  | E|
  |--|--|--|--|--|--|--|--|--|--|
  |  |  |  |  |  |  |  |  |  | E|
   ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾

c)_______________________________________________________________________
|Text  | UN| TEXT| DE| TEST| PENTRU| INDEXARE| SI| TABELE| DE| DISPERSIE |
|------|---|-----|---|-----|-------|---------|---|-------|---|-----------|
|Hash  | 3 |  5  | 7 |  0  |   8   |    2    | 6 |   9   | 7 |     0     |
|------|---|-----|---|-----|-------|---------|---|-------|---|-----------|
|ASCII |163| 325 |137| 320 |  478  |   592   |156|  429  |137|    680    |
 ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 ________________________________________________________________
|h|         0| 1 |    2    | 3 | 4 |  5  | 6 | 7 |   8   |   9   |
'-|----------|---|---------|---|---|-----|---|---|-------|-------|
  |      TEST|   | INDEXARE| UN|   | TEXT| SI| DE| PENTRU| TABELE|
  |----------|---|---------|---|---|-----|---|---|-------|-------|
  | DISPERISE|   |         |   |   |     |   | DE|       |       |
   ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
DE => 68+69 => 137 % 10 => pozitia 7 [l-a gasit]
ED => 69+68 => 137 % 10 => pozitia 7 [coliziune]

***********************************************************************************************************************************************
