/**
 * Pointer Level 3 – Combinazione di p++, (*p)++ e modifica sequenziale
 * Created by delerico on 23/11/2025
 *
 * Obiettivo:
 *  Mostrare la differenza tra l’incremento del valore puntato (*p)++
 *  e lo spostamento del puntatore p++. Dopo aver modificato il primo
 *  elemento, il puntatore avanza e modifica anche il secondo elemento.
 */

#include <stdio.h>

void combo(int *p) {
    (*p)++;        // Incrementa il primo elemento: 2 → 3
    p++;           // p ora punta al secondo elemento
    (*p) += 10;    // Incrementa il secondo elemento: 4 → 14
}

int main() {
    int a[3] = {2, 4, 6};

    combo(a);

    // Risultato finale: 3 14 6
    printf("%d %d %d\n", a[0], a[1], a[2]);

    return 0;
}
