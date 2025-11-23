/**
 * Pointer Level 3 – Modifica del puntatore tramite int** e ritorno del nuovo puntatore
 * Created by delerico on 23/11/2025
 *
 * Obiettivo:
 *  Mostrare come una funzione possa:
 *   1) modificare il puntatore originale nel chiamante tramite int**
 *   2) modificare il valore puntato dopo lo spostamento
 *   3) restituire il nuovo puntatore aggiornato
 *
 *  In questo esempio p viene spostato da a[0] a a[2], il valore a[2] viene
 *  incrementato di 100, e la funzione restituisce il nuovo puntatore.
 */

#include <stdio.h>

int* move_and_edit(int **pp) {
    *pp = *pp + 2;     // Sposta p da a[0] a a[2]
    **pp += 100;       // Modifica a[2] → 6 + 100 = 106
    return *pp;        // Restituisce il nuovo puntatore p
}

int main() {
    int a[5] = {2, 4, 6, 8, 10};
    int *p = a;

    int *q = move_and_edit(&p);  // p e q puntano entrambi a a[2]

    // Output: 106 106
    printf("%d %d\n", *p, *q);

    return 0;
}
