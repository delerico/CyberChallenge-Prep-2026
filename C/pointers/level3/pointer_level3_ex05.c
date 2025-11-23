/**
 * Pointer Level 3 – Funzione che restituisce un puntatore
 * Created by delerico on 23/11/2025
 *
 * Obiettivo:
 *  Mostrare come una funzione possa restituire un puntatore a un elemento
 *  di un array. In questo caso la funzione middle() restituisce un puntatore
 *  all'elemento centrale dell'array (p + 1).
 */

#include <stdio.h>

int* middle(int *p) {
    return p + 1;   // Restituisce un puntatore a p[1]
}

int main() {
    int a[3] = {10, 20, 30};

    int *m = middle(a);   // m punta a a[1]

    printf("%d\n", *m);   // Output: 20

    return 0;
}
