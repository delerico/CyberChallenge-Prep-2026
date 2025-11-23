/**
 * Pointer Level 2 – Modifica di un elemento tramite indice
 * Created by delerico on 23/11/2025
 *
 * Obiettivo:
 *  Mostrare come sia possibile modificare un elemento specifico di un array
 *  passato a una funzione utilizzando l'aritmetica dei puntatori: *(p + index).
 */

#include <stdio.h>

void modify_at(int *p, int index) {
    *(p + index) = 1234;   // Modifica p[index], cioè a[index]
}

int main() {
    int a[4] = {10, 20, 30, 40};

    modify_at(a, 2);       // Modifica a[2] → 30 diventa 1234

    // Risultato finale: 10 20 1234 40
    printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);

    return 0;
}
