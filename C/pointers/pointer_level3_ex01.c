/**
 * Pointer Level 3 – Incremento del contenuto e salto di elementi
 * Created by delerico on 20/11/2025
 *
 * Obiettivo:
 *  Mostrare:
 *   - uso di (*p)++ per modificare il valore iniziale
 *   - uso di p += 2 per spostarsi di due elementi nell'array
 *   - modifica del terzo elemento tramite dereferenziazione
 */

#include <stdio.h>

void edit(int *p) {
    (*p)++;       // Incrementa a[0]: 1 → 2
    p += 2;       // p ora punta ad a[2]
    *p = 100;     // a[2] diventa 100
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};

    edit(a);

    // Risultato: 2 2 100 4 5
    for (int i = 0; i < 5; i++)
        printf(" %d ", a[i]);

    return 0;
}
