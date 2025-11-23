/**
 * Pointer Level 2 – Combinazione di operazioni tramite *p, p++, e *(p + 1)
 * Created by delerico on 23/11/2025
 *
 * Obiettivo:
 *  Mostrare come un puntatore possa modificare più elementi consecutivi
 *  di un array tramite:
 *   - dereferenziazione diretta (*p)
 *   - p++ per avanzare all’elemento successivo
 *   - *(p + i) per accedere agli elementi successivi senza spostare p oltre
 */

#include <stdio.h>

void mix(int *p) {
    *p = 50;        // Modifica a[0] → 50

    p++;            // Ora p punta a a[1]
    *p += 20;       // Modifica a[1] → 10 + 20 = 30

    *(p + 1) -= 5;  // Modifica a[2] → 15 - 5 = 10
}

int main() {
    int a[3] = {5, 10, 15};

    mix(a);

    // Risultato finale: 50 30 10
    printf("%d %d %d\n", a[0], a[1], a[2]);

    return 0;
}
