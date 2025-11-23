/**
 * Pointer Level 2 – Somma cumulativa tramite accesso p[i]
 * Created by delerico on 23/11/2025
 *
 * Obiettivo:
 *  Mostrare come p[i] permetta di accedere e modificare direttamente
 *  gli elementi di un array, e come la modifica di p[1] influenzi
 *  la successiva modifica di p[2].
 */

#include <stdio.h>

void accumulate(int *p) {
    // Modifica del secondo elemento: a[1] = a[0] + a[1]
    p[1] = p[0] + p[1];

    // Modifica del terzo elemento usando il nuovo valore di a[1]
    // a[2] = a[1] (aggiornato) + a[2]
    p[2] = p[1] + p[2];
}

int main() {
    int a[3] = {2, 3, 4};

    accumulate(a);

    // Risultato finale: 2 5 9
    printf("%d %d %d\n", a[0], a[1], a[2]);

    return 0;
}
