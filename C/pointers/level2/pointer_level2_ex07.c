/**
 * Pointer Level 2 – Modifica di elementi non consecutivi tramite p[i]
 * Created by delerico on 23/11/2025
 *
 * Obiettivo:
 *  Mostrare come p[i] permetta di accedere direttamente a elementi specifici
 *  di un array senza spostare il puntatore. In questo caso vengono modificati
 *  il primo e il terzo elemento dell’array.
 */

#include <stdio.h>

void triple(int *p) {
    p[0] *= 3;   // a[0] = 1 * 3 = 3
    p[2] *= 3;   // a[2] = 9 * 3 = 27
}

int main() {
    int a[3] = {1, 5, 9};

    triple(a);

    // Risultato finale: 3 5 27
    printf("%d %d %d\n", a[0], a[1], a[2]);

    return 0;
}
