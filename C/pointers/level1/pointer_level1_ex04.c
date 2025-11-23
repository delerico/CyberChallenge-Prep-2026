/**
 * Pointer Level 1 – Modifica del valore tramite dereferenziazione
 * Created by delerico on 20/11/2025
 *
 * Obiettivo:
 *  Mostrare come un puntatore, riferendosi all’indirizzo di una variabile,
 *  possa modificarne direttamente il valore tramite *p.
 */

#include <stdio.h>

int main() {
    int x = 20;
    int *p = &x;

    // *p accede al valore di x e lo modifica.
    // *p = *p - 5 equivale a x = x - 5.
    *p = *p - 5;

    printf("%d\n", x);   // Output: 15

    return 0;
}
