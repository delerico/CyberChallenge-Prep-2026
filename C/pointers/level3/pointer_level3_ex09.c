/**
 * Pointer Level 3 – Uso combinato di int** per spostare il puntatore e modificare il valore
 * Created by delerico on 23/11/2025
 *
 * Obiettivo:
 *  Dimostrare come un puntatore a puntatore (int**) consenta sia di modificare
 *  il puntatore originale nel chiamante (*pp = *pp + 1), sia di modificare il
 *  valore puntato tramite **pp.
 */

#include <stdio.h>

void shift_and_set(int **pp) {
    *pp = *pp + 1;   // Sposta p da &a[0] a &a[1]
    **pp = 500;      // Modifica a[1]
}

int main() {
    int a[4] = {10, 20, 30, 40};
    int *p = a;      // p punta a a[0]

    shift_and_set(&p);

    // Risultato finale: 10 500 30 40
    printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);

    return 0;
}
