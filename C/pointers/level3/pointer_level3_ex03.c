/**
 * Pointer Level 3 – Differenza tra p++ e (*p)++
 * Created by delerico on 23/11/2025
 *
 * Obiettivo:
 *  Mostrare la distinzione tra:
 *   - p++  : sposta il puntatore all'elemento successivo
 *   - (*p)++ : incrementa il valore puntato, senza spostare il puntatore
 *
 *  In questo caso:
 *   1) p++ porta p da &a[0] a &a[1]
 *   2) (*p)++ incrementa il valore di a[1]
 */

#include <stdio.h>

void diff(int *p) {
    p++;        // p ora punta a a[1]
    (*p)++;     // incrementa il valore di a[1]
}

int main() {
    int a[3] = {1, 2, 3};

    diff(a);

    // Risultato finale: 1 3 3
    printf("%d %d %d\n", a[0], a[1], a[2]);

    return 0;
}
