/**
 * Pointer Level 2 – Scambio del primo e dell'ultimo elemento tramite puntatore
 * Created by delerico on 23/11/2025
 *
 * Obiettivo:
 *  Mostrare come effettuare uno swap tra due elementi di un array
 *  utilizzando un puntatore e l'aritmetica dei puntatori.
 */

#include <stdio.h>

void swap_first_last(int *p) {
    int temp = *p;        // Salva a[0] in temp
    *p = *(p + 3);        // a[0] diventa a[3]
    *(p + 3) = temp;      // a[3] diventa il valore originale di a[0]
}

int main() {
    int a[4] = {1, 2, 3, 4};

    swap_first_last(a);

    // Risultato finale: 4 2 3 1
    printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);

    return 0;
}
