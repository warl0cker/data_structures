// Tema 3.1. Să se citească de la tastatură n numere întregi, cu 1 < n < 50 şi să se memoreze într-un vector. Calculaţi numărul de elemente nule din vector.
#include <stdio.h>
int main() {
    int n, count = 0;
    printf("Introdu un numar de intre 1 si 50: ");
    do {
        scanf("%d", &n);
    } while (n <= 1 || n >=50);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) count++;
    }
    printf("Numarul de elemente nule din vector este: %d\n", count);
    return 0;
}

// Tema 3.2. Să se citească de la tastatură n numere întregi, cu 1 < n < 50 şi să se memoreze într-un vector. Calculaţi valoarea maximă din vector.
#include <stdio.h>
int main() {
    int n;
    printf("Introdu un numar de intre 1 si 50: ");
    do {
        scanf("%d", &n);
    } while (n <= 1 || n >= 50);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int max = arr[0];
    for (int i = 0; i < n; i++)
        if (max < arr[i]) max = arr[i];
    printf("Valoarea maxima din vector este: %d\n", max);
    return 0;
}

// Tema 3.3. Să se citească de la tastatură n numere întregi, cu 1 < n < 50 şi să se memoreze într-un vector. Afişaţi poziţiile pe care se află valoarea minimă din vector.
#include <stdio.h>
int main() {
    int n;
    printf("Introdu un numar intre 1 si 50: ");
    do {
        scanf("%d", &n);
    } while (n <= 1 || n >= 50);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int min = arr[0];
    for (int i = 0; i < n; i++)
        if (min > arr[i]) min = arr[i];
    printf("Pozitiile pe care se afla valoarea minima sunt: ");
    for (int i = 0; i < n; i++)
        if (min == arr[i]) printf("%d ", i);
    return 0;
}

// Tema 3.4. Să se citească de la tastatură n numere întregi, cu 1 < n < 100 şi să se memoreze într-un vector. Afişaţi numerele stocate în vector  în ordinea inversă memorării acestora.
#include <stdio.h>
int main() {
    int n;
    printf("Introdu un numar de intre 1 si 50: ");
    do {
        scanf("%d", &n);
    } while (n <= 1 || n >= 100);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = n; i >= 0; i--)
        printf("%d ", arr[i]);
    return 0;
}

// Tema 3.5. Se introduc succesiv numere până la întâlnirea lui 0, dar nu mai multe de 1000. Să se memoreze numerele introduse într-un vector şi să se calculeze media lor aritmetică.
#include <stdio.h>
int main() {
    int arr[1000], s = 0, count = 0;
    for (int i = 0; i < 1000; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) break;
        s = s + arr[i];
        count++;
    }
    s /= count;
    printf("Media aritmetica este: %d\n", s);
    return 0;
}

// Tema 3.6. Se introduc succesiv numere până la întâlnirea lui 0, dar nu mai multe de 100. Să se memoreze numerele introduse într-un vector şi să se calculeze numărul de elemente pare.
#include <stdio.h>
int main() {
    int arr[100], count = 0;
    for (int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) break;
        if (arr[i] % 2 == 0) count++;
    }
    printf("Numarul de elemente pare este: %d\n", count);
    return 0;
}


/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//
/**//**//**//**//**//**//**//* SUPLIMENT TEMA DE CASA *//**//**//**//**//**//**//**//
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//


// Tema  3.7. Se introduc succesiv numere până la întâlnirea lui 0, dar nu mai multe de 100. Să se memoreze numerele introduse într-un vector şi să se calculeze numărul de elemente pare si impare continute de acesta.
#include <stdio.h>
int main() {
    int arr[100], par = 0, impar = 0;
    for (int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) break;
        (arr[0] % 2 == 0) ? par++ : impar++;
    }
    printf("Avem %d numere pare, si %d numere impare\n", par, impar);
    return 0;
}

// Tema 3.8. Fiind date două şiruri de numere întregi v şi u cu n, respectiv m elemente (m < n), să se verifice dacă u este subşir al lui v.
#include <stdio.h>
int main() {
    int m, n, count = 0;
    printf("Introduceti cat de mare va fi sirul v: ");
    scanf("%d", &n);
    printf("Introduceti cat de mare va fi sirul u: ");
    scanf("%d", &m);
    int u[m], v[n];
    if (m < n) {
        printf("Introduceti sirul v: ");
        for (int i = 0; i < n; i++)
            scanf("%d", &v[i]);
        printf("Introduceti sirul u: ");
        for (int i = 0; i < m; i++)
            scanf("%d", &u[i]);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (u[i] == v[j]) {
                    count++;
                    break;
                }
            }
        }
        (count == m) ? printf("Sirul 'u' ESTE subsir al lui 'v'\n") : printf("Sirul 'u' NU este subsir al lui 'v'\n");
    } else printf("sirul 'u' este mai mic decat sirul 'v'\n");
    return 0;
}

// Tema 3.9. Să se citească de la tastatură n numere întregi, cu 1 < n < 50 şi să se memoreze într-un vector. Introduceţi de la tastatură un număr întreg x şi găsiţi prima apariţie între elementele vectorului  (căutare secvenţială). 
#include <stdio.h>
int main() {
    int n, x;
    printf("Introdu un numar de intre 1 si 50: ");
    do {
        scanf("%d", &n);
    } while (n <= 1 || n >= 50);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (x == arr[i]) {
            printf("Prima aparitie a lui %d este la pozitia %d\n", x, i);
            break;
        }
    }
    return 0;
}

// Tema 3.10. Să se citească de la tastatură n numere întregi, cu 1 < n < 50 şi să se memoreze într-un vector. Introduceţi de la tastatură un număr întreg x şi calculaţi frecvenţa de apariţie a acestuia în vector. Afişaţi poziţiile  pe care a fost găsit. 
#include <stdio.h>
int main() {
    int n, x, count = 0;
    printf("Introdu un numar de intre 1 si 50: ");
    do {
        scanf("%d", &n);
    } while (n <= 1 || n >= 50);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
        if (x == arr[i]) count++;
    printf("Frecventa de aparitie a lui %d este %d\nPozitii gasite: ", x, count);
    for (int i = 0; i < n; i++)
        if (x == arr[i]) printf("%d ", i);
    return 0;
}

// Tema 3.11. Fie un vector de valori întregi, cu 1 < n < 50, introdus de la tastatură. Să se insereze numărul 0 pe prima poziţie a vectorului. Elementele iniţiale vor fi mutate cu o poziţie la dreapta.
#include <stdio.h>
int main() {
    int n, x, count = 0;
    printf("Introdu un numar de intre 1 si 50: ");
    do {
        scanf("%d", &n);
    } while (n <= 1 || n >= 50);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = n; i >= 0; i--)
        arr[i + 1] = arr[i];
    arr[0] = 0;
    for (int i = 0; i <= n; i++)
        printf("%d ", arr[i]);
    return 0;
}

// Tema 3.12. Se citesc de la tastatură n numere întregi în ordine crescătoare şi un număr k. Să se insereze k în şirul dat astfel încât acesta să rămână sortat crescător.
#include <stdio.h>
int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);
    arr[n] = k;
    for (int i = 0; i <= n; i++)
        printf("%d ", arr[i]);
    return 0;
}

// Tema 3.13. Fiind dat un vector cu n numere reale diferite, mutaţi maximul din vector pe ultima poziţie a vectorului (prin interschimbarea maximului cu ultimul element).
#include <stdio.h>
int main() {
    int n, pos;
    scanf("%d", &n);
    float arr[n];
    for (int i = 0; i < n; i++)
        scanf("%f", &arr[i]);
    float max = arr[0], temp;
    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
            pos = i;
        }
    }
    temp = arr[n - 1];
    arr[n - 1] = arr[pos];
    arr[pos] = temp;
    printf("BIG:%f de pe pozitia %d s-a mutat pe ultima pozitie in locul lui LAST:%f\n", max, pos, arr[pos]);
    return 0;
}

// Tema 3.14. Să se mute toate elementele dintr-un şir de n numere întregi egale cu un număr k la sfârşitul şirului.
#include <stdio.h>
int main() {
    int n, k, temp;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);
    for (int i = 0; i < n; i++) {
        if (k == arr[i]) {
            temp = arr[i];
            for (int j = i; j < n - 1; j++)
                arr[j] = arr[j + 1];
            arr[n - 1] = temp;
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

// Tema 3.15. Compactaţi elementele unui vector cu n numere întregi. Prin compactare înţelegem eliminarea elementelor nule din vector.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            for (int j = i; j < n; j++)
                arr[j] = arr[j + 1];
            n--;
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

// Tema  3.16. Fiind dat un vector cu n elemente, numere întregi citite de la tastatură, mutaţi primul element pe poziţia pe care ar trebui să se găsească dacă vectorul ar fi sortat crescător. Mutaţi de asemenea, toate elemente mai  mici în stânga acestuia, nu neapărat în ordine crescătoare şi toate numerele mai mari în dreapta. Folosiţi o singură parcurgere a vectorului.
#include <stdio.h>
int main () {
    int n, c = 0, aux;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    for (int i = 1; i < n; i++) {
        if (v[i] < v[c]) {
            aux = v[i];
            v[i] = v[c];
            v[c] = aux;
            c = i;
            if (v[i - 1] > v[c]) {
                int cnt = i - 1;
                if (v[cnt] > v[c]) {
                    while (v[cnt] > v[c] && cnt >= 1) {
                        aux = v[cnt];
                        v[cnt] = v[c];
                        v[c] = aux;
                        cnt--;
                        c--;
                    }
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
        printf("%d ", v[i]);
    return 0;
}
