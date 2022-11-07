// Tema  2.1. Să se verifice dacă un număr este palindrom (un număr este palindrom dacă este egal cu inversul său, de exemplu, 1221, 2332, 7, 313 sunt palindrom).
#include <stdio.h>
int main() {
    int n, s, check, rez = 0;
    scanf("%d", &n);
    check = n;
    while (n > 0) {
        s = n % 10;
        rez = (rez * 10) + s;
        n /= 10;
    }
    (check == rez) ? printf("Number is palindrome: %d\n", check) : printf("Number is not a palindrome: %d\n", check);
    return 0;
}

// Tema 2.2. Să se citească de la tastatură un număr natural n şi o cifră k. Eliminaţi din număr cifra k. De exemplu, dacă se introduc n = 121157 şi k = 1, trebuie să rezulte numărul 257.
#include <stdio.h>
int main() {
    int n, k, r, m, contor1 = 0, contor2 = 0;
    scanf("%d", &n);
    scanf("%1d", &k);
    m = n;
    while (m > 0) {
        m /= 10;
        ++contor1;
    }
    int s[contor1 - 1];
    while (n > 0) {
        r = n % 10;
        n /= 10;
        if (r != k) {
            s[contor2] = r;
            ++contor2;
        }
    }
    while (contor2 != 0) {
        --contor2;
        printf("%d", s[contor2]);
    }
    printf("\n");
    return 0;
}

// Tema 2.3. Să se afişeze toate numerele impare cuprinse între 21 şi 70.
#include <stdio.h>
int main() {
    int i = 21;
    do {
        if (i % 2 != 0) printf("%d\n", i);
        i++;
    } while (i < 70);
    return 0;
}

// Tema 2.4. Să se genereze si sa se afiseze toate numerele de forma 3xx3 care sunt divizibile cu 3.
#include <stdio.h>
int main() {
    int i = 3003;
    do {
        if (i % 3 == 0) printf("%d\n", i);
        i = i + 10;
    } while (i <= 3993);
    return 0;
}

// Tema 2.5. Să se afişeze toate perechile de numere x şi y cu proprietatea  x + y = 150, x este divizibil cu 7 şi y cu 11.
#include <stdio.h>
int main() {
    int i, j, cntx = 0, cnty = 0, x[22], y[14];
    for (i = 1; i < 150; i++) {
        if (i % 7 == 0) {
            x[cntx] = i;
            cntx++;
        }
        if (i % 11 == 0) {
            y[cnty] = i;
            cnty++;
        }
    }
    for (i = 0; i < cntx; i++)
        for (j = 0; j < cnty; j++)
            if ((x[i] + y[j]) == 150)
                printf("sum:150=%d+%d\n", x[i], y[j]);
    return 0;
}

// Tema 2.6. Să se afişeze toţi divizorii naturali ai unui număr natural n.
#include <stdio.h>
int main() {
    int i, n;
    scanf("%d", &n);
    for (i = 1; i < n; i++)
        if (n % i == 0)
            printf("%d\n", i);
    return 0;
}


/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//
/**//**//**//**//**//**//**//* SUPLIMENT TEMA DE CASA *//**//**//**//**//**//**//**//
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//


// Tema 3.7. Să se verifice dacă un număr natural n este prim (un număr este prim dacă are exact doi divizori, pe 1 şi pe el însuşi).
#include <stdio.h>
int main() {
    int n, notPrime = 0;
    scanf("%d", &n);
    if (n == 0 || n == 1) notPrime = 1;
    if (!notPrime) {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                notPrime = 1;
                break;
            }
        }
    }
    if (!notPrime) printf("%d\n", n);
    return 0;
}

// Tema 3.8. Să se afişeze primele n numere prime.
#include <stdio.h>
int main() {
    int n = 100;
    for (int i = 2; i <= n; i++) {
        int notPrime = 0;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                notPrime = 1;
                break;
            }
        }
        if (!notPrime) printf("%d\n", i);
    }
    return 0;
}

// Tema 3.9. Să se citească de la tastatură un număr natural n şi un număr prim k. Să se calculeze la ce putere apare k ^în descompunerea în factori primi a numărului n.
#include <stdio.h>
int main() {
    int n, k, d = 2;
    scanf("%d", &n);
    scanf("%d", &k);
    while (n > 1) {
        int p = 0;
        while (n % d == 0) {
            ++p;
            n /= d;
        }
        if (d == k) printf("%d^%d ", d, p);
        ++d;
        if (n > 1 && d * d > n) d = n;
    }
    return 0;
}

// Tema 3.10. Să se afişeze descompunerea în factori primi a unui număr natural n.
#include <stdio.h>
int main() {
    int n, d = 2;
    scanf("%d", &n);
    printf("%d= ", n);
    while (n > 1) {
        int p = 0;
        while (n % d == 0) {
            ++p;
            n /= d;
        }
        if (p) printf("%d^%d ", d, p);
        ++d;
        if (n > 1 && d * d > n) d = n;
    }
    return 0;
}

// Tema 3.11. Să se citească de la tastatură n numere întregi şi să se calculeze media arimetică a acestora.
#include <stdio.h>
int main() {
    int n, s = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        s = s + arr[i];
    }
    s /= n;
    printf("%d", s);
    return 0;
}

// Tema  3.12. Să se citească de la tastatură n numere întregi şi să se calculeze valoarea minimă introdusă.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", arr[i]);
    int min = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    printf("%d", min);
    return 0;
}

// Tema 3.13. Pentru n dat, să se afişeze la consolă următoarele n linii, unde pe ultima linie sunt n caractere *.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}

// Tema 3.14. Pentru n dat, să se afişeze la consolă următoarele n linii, unde pe ultima linie este un singur caracter *.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 0; i--) {
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}

// Tema 3.15. Să se citească de la tastatură două numere întregi, n şi x. Să se introducă de la tastatură alte n numere întregi şi să se calculeze de câte ori apare valoarea lui x în şirul de numere (frecvenţa de apariţie a unui număr într-un şir de numere).
#include <stdio.h>
int main() {
    int n, k, count = 0;
    scanf("%d", &n);
    scanf("%d", &k);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == k) count++;
    }
    if (count) printf("%d", count);
    return 0;
}

// Tema 3.16. Să se citească de la tastatură numere întregi până la întâlnirea valorii  0 şi să se calculeze suma acestora.
#include <stdio.h>
int main() {
    int n, s = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) break;
        s = s + arr[i];
    }
    printf("%d", s);
    return 0;
}

// Tema 3.17. Să se citească de la tastatură numere întregi până la întâlnirea lui 0 şi să se calculeze valoarea maximă introdusă.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int max = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    printf("%d", max);
    return 0;
}

/*
Tema  3.18. Scrieţi un program care afişează la consolă un meniu după următorul scenariu:
    1. la rularea programului, utilizatorului i se va afişa meniul
        (a) apăsaţi tasta 1 pentru a introduce un număr de la tastatură
        (b) apăsaţi tasta 2 pentru a verifica dacă ultimul număr introdus este par
        (c) apăsaţi tasta 3 pentru a verifica dacă ultimul număr introdus este palindrom
        (d) apăsaţi tasta 0 pentru ieşire
    2. În cazul apăsării tastei 1, utilizatorului i se va permite să introducă un număr şi i se va afişsa din nou meniul de mai sus
    3. În cazul apăsării tastelor 2 sau 3, se vor face verificările cerute şi se va afişa un mesaj corespunzător; dacă nu a fost introdus nici un număr până la apăsarea tastelor 2 sau 3 se va afişa un mesaj corespunzător;
    În ambele cazuri se va afişa din nou meniul de mai sus
    4. programul se opreşte la apăsarea tastei 0.
Indicaţie. Programul poate fi structurat astfel: se afişază meniul şi i se permite utilizatorului să introducă o opţiune; cât timp opţiunea introdusă de utilizator este diferită de 0 (while), se verifică valoarea introdusă şi se aplică unul dintre paşii descrişi mai sus; înainte de a se încheia iteraţia se mai afişează încă o dată meniul şi utilizatorul introduce o opţiune nouă.
*/
#include <stdio.h>
int main() {
    int n = 4, num = 0, even, palindrome, s, rez = 0, check = 0;
    do {
        printf("\n(a) Press 1 to insert a number\n");
        printf("(b) Press 2 to check if no. is even\n");
        printf("(c) Press 3 to check if no. is palindrome\n");
        printf("(d) Press 0 to exit\n\n");
        scanf("%i", &n);
        switch (n) {
            case 1:
                printf("[*] Please insert a number: ");
                scanf("%d", &num);
                break;
            case 2:
                even = num;
                (even % 2 == 0) ? printf("[+] Number %d is even!\n", even) : printf("[-] Number %d is NOT even!\n", even);
                break;
            case 3:
                palindrome = num;
                while (palindrome > 0) {
                    s = palindrome % 10;
                    rez = (rez * 10) + s;
                    palindrome /= 10;
                }
                (check == rez) ? printf("[+] Number is palindrome: %d\n", check) : printf("[-] Number is not a palindrome: %d\n", check);
            case 0:
                printf("[x] Goodbye\n\n");
                break;
            default:
                printf("[!] Wrong input!\n");
                break;
        }
    } while (n != 0);
    return 0;
}

// Tema 3.1. Să se citească de la tastatură n numere întregi, cu 1 < n < 50 şi să se memoreze într-un vector. Calculaţi numărul de elemente nule din vector.
#include <stdio.h>
int main() {
    int n, count = 0;
    printf("Introdu un numar de intre 1 si 50: ");
    do {
        scanf("%d", &n);
    } while (n <= 1 || n >= 50);
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
        if (max < arr[i])
            max = arr[i];
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
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int min = arr[0];
    for (int i = 0; i < n; i++)
        if (min > arr[i])
            min = arr[i];
    printf("Pozitiile pe care se afla valoarea minima sunt: ");
    for (int i = 0; i < n; i++)
        if (min == arr[i])
            printf("%d ", i);
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
    printf("Avem % numere pare, si % numere impare\n", par, impar);
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
        if (x == arr[i])
            count++;
    printf("Frecventa de aparitie a lui %d este %d\nPozitii gasite: ", x, count);
    for (int i = 0; i < n; i++)
        if (x == arr[i])
            printf("%d ", i);
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
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
}

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

/*
5.2. Scrieti secventele  pseudocod specifice pentru o lista dublu inlantuit:
    1. adaugare la inceput 2 elemente
    2. adaugare la final 2 elemente
    3. afisare continut lista rezultata
    4. stergere primul element
    5. cautare un nod dupa o valoare
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
    struct node *prev;
}
        node;

void push(node **list, int data) {
    node *n = malloc(sizeof(node));
    n->data = data;
    n->next = (*list);
    n->prev = NULL;
    if ((*list) != NULL) (*list)->prev = n;
    (*list) = n;
}

void append(node **list, int data) {
    node *n = malloc(sizeof(node));
    node *last = (*list);
    n->data = data;
    n->next = NULL;
    if ((*list) == NULL) {
        n->prev = NULL;
        (*list) = n;
        return;
    }
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = n;
    n->prev = last;
    return;
}

void deleteFirst(node **list) {
    if ((*list) != NULL) {
        node *toDelete = (*list);
        if (toDelete->next) {
            toDelete->next->prev = toDelete->prev;
        }
        *list = toDelete->next;
        free(toDelete);
    }
    return;
}

int main() {
    printf("[*] Initializam lista si cream un vector de 4 elemente\n");
    node *list = NULL;
    int n, arr[4] = {10, 20, 11, 21};
    printf("[*] Adaugam la final in lista elementul %d\n", arr[0]);
    append(&list, arr[0]);
    printf("[*] Adaugam la final in lista elementul %d\n", arr[1]);
    append(&list, arr[1]);
    printf("[*] Adaugam la inceput in lista elementul %d\n", arr[2]);
    push(&list, arr[2]);
    printf("[*] Adaugam la inceput in lista elementul %d\n", arr[3]);
    push(&list, arr[3]);
    printf("[+] Printam lista de la stanga la dreapta (inainte):\n   [-] ");
    for (node *tmp = list; tmp != NULL; tmp = tmp->next) {
        printf("%d ", tmp->data);
    }
    printf("\n");
    printf("[*] Stergem primul element din lista\n");
    deleteFirst(&list);
    printf("[+] Printam din nou lista de la stanga la dreapta (inainte):\n   [-] ");
    for (node *tmp = list; tmp != NULL; tmp = tmp->next) {
        printf("%d ", tmp->data);
    }
    printf("\n");
    printf("[+] Cautam in lista elementul %d\n", arr[2]);
    for (node *tmp = list; tmp != NULL; tmp = tmp->next) {
        if (tmp->data == arr[2]) {
            printf("   [-] Elementul %d a fost gasit: [%d]\n", arr[2], tmp->data);
        }
    }
    printf("[*] Golim ramul de datele folosite de program...\n");
    while (list != NULL) {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
    printf("[~] Sfarsit de executie.\n");
    return 0;
}