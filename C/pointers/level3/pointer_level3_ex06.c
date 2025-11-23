/**
 * Pointer Level 3 – Modifica del puntatore nel chiamante tramite int**
 * Created by delerico on 23/11/2025
 *
 * Obiettivo:
 *  Utilizzare un puntatore a puntatore (int**) per modificare realmente p
 *  nel chiamante. L’istruzione *pp = *pp + 2 aggiorna il valore di p
 *  spostandolo avanti di due elementi nell’array.
 */

#include <stdio.h>

void move(int **pp) {
    *pp = *pp + 2;   // Sposta p da &a[0] a &a[2]
}

int main() {
    int a[4] = {3, 6, 9, 12};
    int *p = a;   // p punta a a[0]

    move(&p);     // p ora punta a a[2]

    printf("%d\n", *p);   // Output: 9

    return 0;
}
