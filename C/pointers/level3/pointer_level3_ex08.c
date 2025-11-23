/**
 * Pointer Level 3 – Funzione che restituisce un puntatore spostato
 * Created by delerico on 23/11/2025
 *
 * Obiettivo:
 *  Mostrare come una funzione possa restituire un puntatore a un
 *  elemento successivo dell'array. In questo caso skip() restituisce p+2,
 *  cioè l'indirizzo di a[2].
 */

#include <stdio.h>

int* skip(int *p) {
    return p + 2;   // Restituisce un puntatore all'elemento p[2]
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};

    int *q = skip(a);   // q punta ad a[2]

    printf("%d\n", *q);  // Output: 3

    return 0;
}
