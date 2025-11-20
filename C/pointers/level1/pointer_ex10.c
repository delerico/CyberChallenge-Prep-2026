/**
 * Pointer Level 1 – Modifica di più elementi tramite dereferenziazione
 * Created by delerico on 20/11/2025
 *
 * Obiettivo:
 *  Mostrare come un puntatore possa modificare più elementi di un array
 *  utilizzando *p e *(p + i) senza spostare il puntatore stesso.
 */

#include <stdio.h>

int main() {
    int a[3] = {1, 5, 9};
    int *p = a;  // p punta a a[0]

    // Modifica del primo elemento: a[0] = a[0] * 2 → 2
    *p = *p * 2;

    // *(p + 1) accede al secondo elemento (a[1]) senza spostare p.
    // a[1] = a[1] + 3 → 5 + 3 = 8
    *(p + 1) = *(p + 1) + 3;

    // Risultato finale: 2 8 9
    printf("%d %d %d\n", a[0], a[1], a[2]);

    return 0;
}
