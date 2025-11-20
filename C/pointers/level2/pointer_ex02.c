/**
 * Pointer Level 2 – Passing an array to a function and modifying elements
 * Created by delerico on 20/11/2025
 *
 * Obiettivo:
 *  Mostrare che un puntatore passato a una funzione è ricevuto per valore,
 *  ma punta comunque agli stessi dati. Modificando *p, modifichiamo l'array originale,
 *  anche se spostiamo la copia locale del puntatore.
 */

#include <stdio.h>

void shift(int *p) {
    // p è una COPIA del puntatore originale, ma punta agli stessi dati
    p = p + 1;    // ci spostiamo al secondo elemento dell'array (a[1])
    *p = 777;     // modifichiamo il contenuto di a[1]
}

int main() {
    int a[3] = {5, 10, 15};

    shift(a);  // equivale a passare &a[0]

    // Risultato: 5 777 15
    printf("%d %d %d\n", a[0], a[1], a[2]);

    return 0;
}
