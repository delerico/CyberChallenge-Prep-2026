/**
 * Pointer Level 1 – Spostarsi di tre posizioni nell'array con p + 3
 * Created by delerico on 20/11/2025
 *
 * Obiettivo:
 *  Mostrare come un puntatore possa essere spostato di i elementi
 *  utilizzando p = p + i, accedendo così all'elemento corrispondente dell'array.
 */

#include <stdio.h>

int main() {
    int a[4] = {7, 14, 21, 28};
    int *p = a;    // p punta a a[0] (valore = 7)

    // p + 3 sposta il puntatore di tre elementi:
    // p passa da &a[0] → &a[3]
    // Ogni int = 4 byte, quindi lo spostamento totale è 3 * 4 = 12 byte.
    p = p + 3;

    printf("%d\n", *p);   // Output: 28

    return 0;
}
