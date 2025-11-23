/**
 * Pointer Level 2 – Modifica dell'elemento successivo tramite p++
 * Created by delerico on 23/11/2025
 *
 * Obiettivo:
 *  Mostrare come un puntatore passato a una funzione venga copiato,
 *  ma continui a puntare agli stessi dati. L’operazione p++ sposta
 *  la copia locale del puntatore all’elemento successivo dell’array,
 *  permettendo di modificarlo tramite dereferenziazione.
 */

#include <stdio.h>

void inc_second(int *p) {
    p++;              // p passa da &a[0] → &a[1]
    *p = *p + 10;     // modifica a[1] → 10 + 10 = 20
}

int main() {
    int a[3] = {5, 10, 15};

    inc_second(a);    // equivale a passare &a[0]

    // Risultato: 5 20 15
    printf("%d %d %d\n", a[0], a[1], a[2]);

    return 0;
}
