/**
 * Pointer Level 1 – Accesso a un elemento dell’array tramite *(p + i)
 * Created by delerico on 20/11/2025
 *
 * Obiettivo:
 *  Mostrare come un puntatore a int possa accedere agli elementi
 *  di un array utilizzando l’aritmetica dei puntatori.
 */

#include <stdio.h>

int main() {
    int a[4] = {2, 4, 6, 8};
    int *p = a;

    // p punta all'indirizzo di a[0].
    // *(p + 2) accede a a[2], il terzo elemento (valore = 6).
    // Poiché int occupa 4 byte, p + 2 avanza di 8 byte in memoria.
    printf("%d\n", *(p + 2)); // Output: 6

    return 0;
}
