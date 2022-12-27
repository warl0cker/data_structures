**************************************************************************************
Exerciţiul 2.1.
Să se afişeze mesajul formatat de mai jos, pentru n introdus de la tastatura. Spre
exemplu dacă n=4, se afişează:
* 
**
***
****
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++) printf("*");
        printf("\n");
    }
    return 0;
}

**************************************************************************************
Exerciţiul 2.2.
Fie a şi b două valori naturale, a >b. Să se simuleze împărţirea cu rest a lui a la b
(prin scăderi repetate), a si b diferite de zero.Să  se determine câtul şi restul
împărţirii.
#include <stdio.h>
int main() {
    int a, b, rest;
    do {
        scanf("%d%d", &a, &b);
    } while ((a <= 0 && b <= 0) && a > b);
    while (a != 0) {
        printf("Rezultatul impartirii lui %d la %d este: ", a, b);
        rest = a % b;
        printf("%d.%d\n", a /= b, rest);
    }
    return 0;
}

**************************************************************************************
Exerciţiul 2.3.
Să se calculeze suma primelor n numere naturale utilizând instrucţiunile "while",
prima variantă şi apoi "do while". 
#include <stdio.h>
int main() {
    int n, contor = 1, suma = 0;
    scanf("%d", &n);
    while (contor != n) {
        suma += contor;
        contor++;
    }
    printf("Suma elementelor este: %d\n", suma);
    return 0;
}
#include <stdio.h>
int main() {
    int n, contor = 1, suma = 0;
    scanf("%d", &n);
    do {
        suma += contor;
        contor++;
    } while (contor != n);
    printf("Suma elementelor este: %d\n", suma);
    return 0;
}

**************************************************************************************
Exerciţiul 2.4.
Să se calculeze expresia S=1+1*2+1*2*3+...+1*2*...*n, pentru n citit de la tastatură.
#include <stdio.h>
int main() {
    int n, suma = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int produs = 1;
        for (int j = 1; j <= i; j++) produs *= j;
        suma += produs;
    }
    printf("Suma este: %d\n", suma);
    return 0;
}

**************************************************************************************
Exerciţiul 2.5.
Citiţi de la tastatură un număr întreg, format cel putin din 3 cifre. Afişaţi cifrele
din care se compune numărul. Discuţii: În ce ordine putem afişa cifrele?
#include <stdio.h>
int main() {
    int n;
    do {
        scanf("%d", &n);
    } while (n < 99);
    while (n != 0) {
        printf("%d ", n % 10);
        n /= 10;
    }
    return 0;
}

**************************************************************************************
Exerciţiul 2.6.
Determinaţi și afișaţi cea mai mare cifră care apare într-un număr natural, citit de
la tastatură. 
#include <stdio.h>
int main() {
    int n, rest, max = 0;
	scanf("%d", &n);
    while (n != 0) {
        rest = n % 10;
        if (max < rest) max = rest;
        n /= 10;
    }
    printf("Cea mai mare cifra este: %d\n", max);
    return 0;
}

**************************************************************************************
Exerciţiul 2.7.
Pentru un număr natural n, sa se genereze numărul obtinut prin eliminarea cifrelor
divizibile cu 3, fără a inversa numărul iniţial.
#include <stdio.h>
int main() {
    int n, contor = 0;
    scanf("%d", &n);
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        contor++;
    }
    int v[contor];
    contor = 0;
    while (n != 0) {
        int rest = n % 10;
        if (rest % 3 > 0) v[contor++] = n % 10;
        n /= 10;
    }
    for (int i = contor-1; i >= 0; i--)
        printf("%d", v[i]);
    return 0;
}

**************************************************************************************
Exerciţiul 2.8.
Sa se genereze temperaturile exprimate in grade Fahrenheit - Celsius, din plaja
temperaturilor exprimate in grade Fahrenheit este 0 la 300, cu pasul 20. Formula de
conversie este  C = (F - 32) /1.8
#include <stdio.h>
int main(){
    for(int i=0; i<=300; i+=20)
        printf("Fahrenheit:%d - Celsius:%f\n", i, ((i-32)/1.8));
    return 0;
}

**************************************************************************************