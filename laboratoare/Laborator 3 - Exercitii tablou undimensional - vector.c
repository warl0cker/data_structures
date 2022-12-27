**************************************************************************************
Exerciţiul 3.2.
Să se citească de la tastatură n numere întregi, cu 1 < n < 50 şi să se memoreze
într-un vector. Calculaţi produsul elementelor aflate pe  poziţii pare în vector.
#include <stdio.h>
int main() {
    int n, suma = 0;
    do {
        scanf("%d", &n);
    } while (n < 1 || n > 50);
    int v[n];
    for (int i = 1; i <= n; i++) {
        scanf("%d", &v[i]);
        if (i % 2 == 0) suma += v[i];
    }
    printf("Suma elementelor pare este: %d\n", suma);
    return 0;
}

**************************************************************************************
Exerciţiul 3.3.
Să se scrie un program care citeşte de la tastatură un şir de numere nenule (citirea
se termină la introducerea primului 0), care vor fi stocate intr-un vector, avand
dimensiunea maxima 50. Verificaţi dacă:
(a) şirul este strict crescător
(b) şirul este strict descrescător
(c) şirul este o progresie aritmetică
(d) şirul este o progresie geometrică
(e) şirul conţine toate valorile identice
(f)* determinati care valoare nu respecta regula sirului. Spre exemplu, fie sirul:
1,1,2,2,4,4,5,5,6,7,7,8,8. Elementul cu valoarea 6 nu respecta regula de formare a
sirului.
Nota: Exerctiile marcate cu * sunt optionale
#include <stdio.h>
int main() {
    int n, v[50], contor = 0;
    do {
        scanf("%d", &n);
        v[contor] = n;
        contor++;
    } while (n != 0 && contor < 50);
    int crescator = 0, descrescator = 0, identic = 0, aritmetic = 0, p = 1;
    for (int i = 0; i < contor; i++) {
        if (v[i] < v[i + 1]) crescator++;
        else if (v[i] > v[i + 1]) descrescator++;
        else if (v[i] == v[i + 1]) identic++;
        else if (v[i + 1] == ((v[i] + v[i + 2]) / 2)) aritmetic++;
    }
    if      (   crescator == contor - 1) printf("sirul este strict crescator\n");
    else if (descrescator == contor - 1) printf("sirul este strict descrescator\n");
    else if (     identic == contor - 1) printf("sirul contine toate valorile identice\n");
    else if (   aritmetic == contor - 2) printf("sirul este o progresie aritmetica\n");
    for (int i = 2; i < contor - 1; i++) if (v[i] / v[1] != v[i - 1]) p = 0;
    if      (           p == 1         ) printf("sirul este o progresie geometrica\n");
    return 0;
}

**************************************************************************************
Exerciţiul 3.4.
Căutare secvenţială. Fiind dat un şir de n numere întregi memorate într-un vector şi o
valoare x, să se verifice dacă x aparţine vectorului şi, în caz afirmativ, să se
afişeze prima poziţie pe care a fost găsit. Modificati programul pentru a afisa ultima
pozitie pe care este gasita valoarea de cautat x.
#include <stdio.h>
int main() {
    int n, x;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++) scanf("%d", &v[i]);
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            printf("%d a fost gasit la prima pozitie %d\n", x, i);
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
        if (v[i] == x) {
            printf("%d a fost gasit la ultima pozitie %d\n", x, i);
            break;
        }
    return 0;
}

**************************************************************************************