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
    (check == rez) ? printf("Numarul este un palindrom: %d\n", check) : printf("Numarul nu este un palindrom: %d\n", check);
    return 0;
}

// Tema 2.2. Să se citească de la tastatură un număr natural n şi o cifră k. Eliminaţi din număr cifra k. De exemplu, dacă se introduc n = 121157 şi k = 1, trebuie să rezulte numărul 257.
#include <stdio.h>
int main() {
    int n, k, rest, m, contor1 = 0, contor2 = 0;
    scanf("%d", &n);
    scanf("%1d", &k);
    m = n;
    while (m > 0) {
        m /= 10;
        ++contor1;
    }
    int s[contor1 - 1];
    while (n > 0) {
        rest = n % 10;
        n /= 10;
        if (rest != k) {
            s[contor2] = rest;
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
            if ((x[i] + y[j]) == 150) printf("sum:150=%d+%d\n", x[i], y[j]);
    return 0;
}

// Tema 2.6. Să se afişeze toţi divizorii naturali ai unui număr natural n.
#include <stdio.h>
int main() {
    int i, n;
    scanf("%d", &n);
    for (i = 1; i < n; i++)
        if (n % i == 0) printf("%d\n", i);
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
        if (arr[i] < min) min = arr[i];
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
        if (arr[i] > max) max = arr[i];
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
