// Tema  4.1. Pentru o matrice pătratică de ordin n ( 1 ≤ n ≤ 100) să se afişeze elementele aflate  pe diagonală principală.
#include <stdio.h>
int main() {
    int n, nr = 0;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = nr;
            nr++;
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j)
                printf("%d ", arr[i][j]);
    return 0;
}

// Tema 4.2. Pentru o matrice pătratică de ordin n ( 1 ≤ n ≤ 100) calculaţi suma elementelor de pe diagonala secundară.
#include <stdio.h>
int main() {
    int n, s = 0, nr = 0, cnt = 0;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = nr;
            nr++;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++)
            if (cnt == j) s = s + arr[i][j];
        cnt++;
    }
    printf("Suma este: %d\n", s);
    return 0;
}

// Tema 4.3. Pentru o matrice pătratică de ordin n ( 1 ≤ n ≤ 100) număraţi elementele nule de sub diagonala secundară.
#include <stdio.h>
int main() {
    int n, cnt = 0, nulls = 0;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("arr[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (cnt < j) {
                if (arr[i][j] == 0) nulls++;
            }
        }
        cnt++;
    }
    printf("Numarul elementelor nule de sub diagonala secundara sunt: %d\n", nulls);
    return 0;
}

// Tema 4.4. Pentru o matrice pătratică de ordin n ( 1 ≤ n ≤ 100) calculaţi media aritmetică a elementelor de deasupra diagonalei principale.
#include <stdio.h>
int main() {
    int n, nr = 0, cnt = 0;
    float s = 0;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = nr;
            nr++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i) {
                s = s + arr[i][j];
                cnt++;
            }
        }
    }
    s /= cnt;
    printf("Media aritmetica este: %f\n", s);
    return 0;
}

// Tema 4.5. Ducând cele două diagonale într-o matrice pătratică se obţin patru zone triunghiulare. Afişaţi suma componentelor din interiorul fiecărei zone.
#include <stdio.h>
int main() {
    int n, nr = 0, nord = 0, sud = 0, vest = 0, est = 0;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = nr;
            nr++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j && i + j < n - 1) nord += arr[i][j];
            if (i > j && i + j > n - 1) sud += arr[i][j];
            if (i > j && i + j < n - 1) vest += arr[i][j];
            if (i < j && i + j > n - 1) est += arr[i][j];
        }
    }
    printf("Sumele pentru fiecare zona sunt:\nNord: %d, Sud: %d, Vest: %d, Est: %d\n", nord, sud, vest, est);
    return 0;
}

// Tema 4.6.* Implementati un algoritm de deplasare a unui obiect punctiform dintr-un  punct in plan A(xA,yA) in unul final B(xB,yB), considerand ca acesta se poate deplasa unitar, in toate cele 4 directii. Afisati fiecare pas in parte ( Hint: notati cu 1 pozitiile parcurse si cu 0 celelalte, pastrand istoricul mutarilor) 
#include <stdio.h>
int main() {
    int n, i, j, x, y, movea, moveb;
    printf("size of matrix=");
    scanf("%d", &n);
    int matrix[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            matrix[i][j] = 0;
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nTo start please insert a position between 1,1 and %d,%d\nInsert row no.: ", n, n);
    scanf("%d", &x);
    printf("Insert column no.: ");
    scanf("%d", &y);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (x == i + 1 && y == j + 1) matrix[i][j] = 1;
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
    do {
        printf("To exit insert 9,9\nTo move please insert a position between 1,1 and %d,%d\nInsert row no.: ", n, n);
        scanf("%d", &movea);
        printf("Insert column no.: ");
        scanf("%d", &moveb);
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (movea == i + 1 && moveb == j + 1) matrix[i][j] = 1;
                printf("%d  ", matrix[i][j]);
            }
            printf("\n");
        }
    } while (movea != 9 && moveb != 9);
    printf("Exiting. Thank you for playing.");
    return 0;
}


/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//
/**//**//**//**//**//**//**//* SUPLIMENT TEMA DE CASA *//**//**//**//**//**//**//**//
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//


// Tema S.4.1. Fiind dată o matrice pătratică de ordin n ( 1 ≤ n ≤ 100), stabiliţi dacă este un pătrat magic. O matrice este pătrat magic dacă suma elementelor de pe fiecare linie este egală cu suma elementelor de pe fiecare coloană şi cu suma elementelor de pe diagonale. Exemplu: matricea 3x3 cu elementele: 4 9 2 3 5 7 8 1 6 este un patrat magic.
#include <stdio.h>
int main() {
    int n, c = 0, sumRows = 0, sumColumns = 0, sumDiag1 = 0, sumDiag2 = 0;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("arr[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            sumRows = sumRows + arr[i][j];
    for (int j = 0; j < n; j++)
        for (int i = 0; i < n; i++)
            sumColumns = sumColumns + arr[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j)
                sumDiag1 = sumDiag1 + arr[i][j];
    for (int i = n - 1; i >= 0; i--)
        for (int j = 0; j < n; j++)
            if (c == j)
                sumDiag2 = sumDiag2 + arr[i][j];
    if (sumDiag1 == sumDiag2 && (sumRows / n) == (sumColumns / n) && (sumColumns / n) == sumDiag2 && (sumRows / n) == sumDiag1 && (sumColumns / n) == sumDiag1 && (sumRows / n) == sumDiag2)
        printf("Matricea este un patrat magic\n");
    else
        printf("Matricea NU este un patrat magic\n");
    return 0;
}

// Tema  S.4.2. Să se citească de la tastatură două valori întregi m şi n ( 1 ≤ m ≤ 100) şi (1≤n≤100) şi elementele unei matrice de numere întregi cu m linii şi n coloane. Să se afişeze indicii coloanelor pentru care suma elementelor este maximă.
#include <stdio.h>
int main() {
    int m, n, s, cnt = 1, max = 0;
    do {
        printf("m=");
        scanf("%d", &m);
    } while (m <= 1 || m >= 100);
    do {
        printf("n=");
        scanf("%d", &n);
    } while (n <= 1 || n >= 100);
    int arr[m][n], colon[n];
    for (int j = 0; j < n; j++) {
        s = 0;
        for (int i = 0; i < m; i++) {
            printf("v[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
            s += arr[i][j];
        }
        if (max == s) colon[cnt++] = j;
        if (max < s) {
            max = s;
            colon[0] = j;
        }
    }
    printf("indicii coloanelor pentru care suma elementelor este maxima:\n");
    for (int j = 0; j < cnt; j++) {
        printf("[%d] Coloana %d: ", j, colon[j]);
        for (int i = 0; i < m; i++) {
            int x = colon[j];
            printf("%d ", arr[i][x]);
        }
        printf("\n");
    }
    return 0;
}

// Tema S.4.3. Pentru un n a cărei valoare este introdusă de la tastatură ( 3 ≤ n ≤ 10) creaţi un joc de X (calculatorul) şi 0 (utilizatorul). Atunci când este rândul utilizatorului, acesta introduce coordonatele (linia şi coloana) unde doreşte să plaseze un 0. Implementaţi 3 niveluri de dificultate pentru acest joc: uşor - calculatorul alege aleator poziţiile pe care va plasa X (vezi Anexa A; mediu - calculatorul urmăreşte să completeze linia/coloana/diagonala cu cele mai mari şanse de victorie (trebuie să aibă cât mai multe valori de X deja completate şi nici un 0); dificil- încercaţi să găsiţi o strategie cât mai bună.


/*
Tema S.4.4 Sa se scrie un program care citeste de la tastatura dimensiunile n si m (n,m<=100) ale unui tablou bidimensional (n x m). Programul va genera matricea din primele n x m numere prime consecutive aranjate in spirala, dupa urmatorul algoritm:
    1. incepand de la stanga la dreapta, 
    2. de sus in jos,
    3. de la dreapta la stanga 
    4. de jos in sus. 
La final programul va afisa matricea formata. Exemplu: n=3, m=4
 2   3   5  7 
79  83  89 11 
73  71  17 13
*/
#include <stdio.h>
int main() {
    int n, m, i = 2, j, cnt = 0, startRow = 0, startColumn = 0;
    do {
        printf("n=");
        scanf("%d", &n);
        printf("m=");
        scanf("%d", &m);
    } while ((n < 1 || n >= 100) && (m < 1 || m >= 100));
    int arr[n][m], prime[n * m];
    while (cnt < n * m) {
        int notPrime = 0;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                notPrime = 1;
                break;
            }
        }
        if (!notPrime) prime[cnt++] = i;
        i++;
    }
    cnt = 0;
    int endRow = n, endColumn = m;
    while (startRow < endRow && startColumn < endColumn) {
        for (i = startColumn; i < endColumn; ++i)
            arr[startRow][i] = prime[cnt++];
        startRow++;
        for (i = startRow; i < endRow; ++i)
            arr[i][endColumn - 1] = prime[cnt++];
        endColumn--;
        if (startRow < endRow) {
            for (i = endColumn - 1; i >= startColumn; --i)
                arr[endRow - 1][i] = prime[cnt++];
            endRow--;
        }
        if (startColumn < endColumn) {
            for (i = endRow - 1; i >= startRow; --i)
                arr[i][startColumn] = prime[cnt++];
            startColumn++;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}