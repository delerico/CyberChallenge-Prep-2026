/**
 * Pointer Level 2 – Passing a Variable by Reference
 * Created by delerico on 20/11/2025
 *
 * Obiettivo:
 *  Mostrare come una funzione può modificare una variabile
 *  ricevendo il suo indirizzo come argomento.
 */

#include <stdio.h>

// La funzione inc riceve un puntatore a int.
// *p accede al contenuto dell'indirizzo passato.
// *p = *p + 1 incrementa il valore a quell'indirizzo.
void inc(int *p) {
    *p = *p + 1;
}

int main() {
    int x = 10;

    // Passiamo l'indirizzo di x alla funzione.
    // inc(&x) modifica direttamente x, senza restituirlo.
    inc(&x);

    // Ora x è diventato 11.
    printf("%d\n", x);

    return 0;
}
