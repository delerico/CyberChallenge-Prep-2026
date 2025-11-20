/**
 * Pointer Level 1 – Basic Dereferencing
 * Created by delerico on 20/11/2025
 *
 * Obiettivo:
 *  Mostrare come un puntatore può accedere al valore di una variabile
 *  tramite dereferenziazione (*p).
 */

#include <stdio.h>

int main() {
    int x = 12;
    int *p = &x;

    // *p accede al valore contenuto all'indirizzo di x.
    // Poiché p contiene &x, *p è equivalente a x.
    printf("%d\n", *p);   // Output: 12

    return 0;
}
