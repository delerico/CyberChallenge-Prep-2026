/**
 * Pointer Level 1 – Modifica del primo elemento dell'array tramite *p
 * Created by delerico on 20/11/2025
 *
 * Obiettivo:
 *  Mostrare come un puntatore che punta a un array possa modificare
 *  direttamente il valore del primo elemento tramite dereferenziazione.
 */

#include <stdio.h>

int main() {
    int a[3] = {3, 9, 27};
    int *p = a;    // p punta a a[0]

    // *p accede a a[0] e lo modifica.
    // *p = *p + 100 equivale a a[0] = a[0] + 100.
    *p = *p + 100;

    // Risultato: 103 9 27
    printf("%d %d %d\n", a[0], a[1], a[2]);

    return 0;
}
