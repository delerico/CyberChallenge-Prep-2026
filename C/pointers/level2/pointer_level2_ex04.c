/**
 * Pointer Level 2 – Modifica di elementi estremi dell'array
 * Created by delerico on 23/11/2025
 *
 * Obiettivo:
 *  Mostrare come, tramite *p e *(p + i), sia possibile modificare
 *  elementi specifici di un array senza spostare il puntatore p.
 */

#include <stdio.h>

void edge_edit(int *p) {
    *p = *p + 5;                 // Modifica del primo elemento: a[0] = a[0] + 5
    *(p + 3) = *(p + 3) * 2;     // Modifica del quarto elemento: a[3] *= 2
}

int main() {
    int a[4] = {1, 10, 20, 30};

    edge_edit(a);   // p = &a[0], ma modifichiamo sia a[0] che a[3]

    // Risultato finale: 6 10 20 60
    printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);

    return 0;
}
