**************************************************************************************
Exercitiul 13.1
Construiti arborele binar asociat codului Huffman pentru textul: text de comprimat

               __________15__________
              |                      |
       _______8_______             __7__
      |               |           |     |
   ___4___         ___4___       _4_    3
  |       |       |       |     |   |   t
 _2_     _2_     _2_     _2_    2   2
|   |   |   |   |   |   |   |   e   m
1   1   1   1   1   1   1   1
x   d   c   o   p   r   i   a

**************************************************************************************
Exercitiul 13.2
Pentru  arborele Huffman de mai jos:
Determinati forma decomprimata a secventei: 11000101001000101100111001100100100011

                       ____________________24___________________
                      |                                         |
       _______________16_____________                 __________8__________
      |                              |               |                     |
 _____8_____                    _____8_____     _____4_____           _____4_____
|           |                  |           |   |           |         |           |
4       ____4____          ____4____       4   2        ___2___   ___2___     ___2___
_      |         |        |         |      T   A       |       | |       |   |       |
       2     ____2____    2     ____2____              1       1 1       1   1       1
       E    |         |   M    |         |             D       N C       L   U       X
            1         1        1         1
            I         R        O         P

Forma decomprimata a secventei este: COMPRIMAT

**************************************************************************************
Exercitiul 13.3
Fisierul date.in contine un text format numai din literele mari ale alfabetului latin.
1. Scrieti un program C prin care caculati frecventa de aparitie a fiecarui caracter
din text continut de fisier.

#include <stdio.h>
#include <string.h>
int main(){
    char matrix[] = "C ESTE UN LIMBAJ DE PROGRAMARE STANDARDIZAT. ESTE IMPLEMENTAT PE "
                    "MAJORITATEA PLATFORMELOR DE CALCUL EXISTENTE AZI SI ESTE CEL MAI "
                    "POPULAR LIMBAJ DE PROGRAMARE PENTRU SCRIEREA DE SOFTWARE DE SISTE"
                    "M. ESTE APRECIAT PENTRU EFICIENTA CODULUI OBIECT GENERAT DE COMPI"
                    "LATOARELE C SI PENTRU PORTABILITATEA SA.\n\nA FOST DEZVOLTAT LA I"
                    "NCEPUTUL ANILOR 1970 DE KEN THOMPSON SI DENNIS RITCHIE, CARE AVEA"
                    "U NEVOIE DE UN LIMBAJ SIMPLU SI PORTABIL PENTRU SCRIEREA NUCLEULU"
                    "I SISTEMULUI DE OPERARE UNIX.\n\nSINTAXA LIMBAJULUI C A STAT LA B"
                    "AZA MULTOR LIMBAJE CREATE ULTERIOR SI INCA POPULARE AZI: C++, JAV"
                    "A, JAVASCRIPT, C#, D.\n\nC ESTE UN LIMBAJ DE PROGRAMARE RELATIV M"
                    "INIMALIST CE OPEREAZA IN STRANSA LEGATURA CU HARDWARE-UL, FIIND C"
                    "EL MAI APROPIAT DE LIMBAJUL DE ASAMBLARE FATA DE MAJORITATEA CELO"
                    "RLALTE LIMBAJE DE PROGRAMARE.";
    int length = strlen(matrix);
    int freq[length];
    int count;
    for (int i = 0; i < length; i++) freq[i] = -1;
    for (int i = 0; i < length; i++) {
        count = 1;
        for (int j = i + 1; j < length; j++) {
            if (matrix[i] == matrix[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) freq[i] = count;
    }
    for (int i = 0; i < length; i++)
        if (freq[i] != 0) printf("[%c] = %d aparitii\n", matrix[i], freq[i]);
    return 0;
}

**************************************************************************************
Exercitiul 13.4
Construiti apoi codul Huffman si arborele asociat acestuia.

                                                                    ______________________________________804______________________________________
                                                                   |                                                                               |
                                __________________________________454____________________________________                                      ___350___
                               |                                                                         |                                    |         |
                _______________42________________                                      _________________412________________                 _144_     _206_
               |                                 |                                    |                                    |               |     |   |     |
        _______8_______                 ________34________                   ________119________                   _______293_______       58   86   87   119
       |               |               |                  |                 |                   |                 |                 |      I     E   A     _
    ___4___         ___4___         ___10___         ____24____         ____30____         ____89____         ___115___         ___178___
   |       |       |       |       |        |       |          |       |          |       |          |       |         |       |         |
  _2_     _2_     _2_     _2_     _4_      _6_     _12_      _12_     _12_      _18_     _35_      _54_     _56_     _59_     _74_     _104_
 |   |   |   |   |   |   |   |   |   |    |   |   |    |    |    |   |    |    |    |   |    |    |    |   |    |   |    |   |    |   |     |
 1   1   1   1   1   1   1   1   2   2    3   3   6    6    6    6   6    6    6   12   13  22    27  27   27  28   29  30   31  43   52   52
 1   9   7   0   K   :   #   -   W   +    X   H   G    Z    .    F   \N   V    ,    J   B    D    C    N   P    M   O    U   S    L   T     R

**************************************************************************************
