/**
 * Pointer Level 1 – Cambiare la variabile puntata
 * Created by delerico on 20/11/2025
 *
 * Obiettivo:
 *  Mostrare come un puntatore possa essere riassegnato per puntare
 *  a variabili diverse e come *p rifletta sempre il valore
 *  della variabile correntemente puntata.
 */

#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;

    int *p = &x;   // p punta a x (valore = 10)
    p = &y;        // ora p punta a y (valore = 20)

    // *p dereferenzia il valore della variabile puntata:
    // poiché p ora punta a y, *p = 20.
    printf("%d\n", *p);   // Output: 20

    return 0;
}
