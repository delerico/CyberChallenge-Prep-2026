/**
 * Pointer Level 2 – Scorrere un array con p[i] e modificarne gli elementi
 * Created by delerico on 23/11/2025
 *
 * Obiettivo:
 *  Mostrare come un puntatore a int possa essere utilizzato insieme a p[i]
 *  per accedere e modificare sequenzialmente gli elementi di un array.
 */

#include <stdio.h>

void walk(int *p) {
    // Per i = 0, 1, 2:
    // p[i] accede rispettivamente ad a[0], a[1], a[2].
    // Ogni elemento viene raddoppiato.
    for (int i = 0; i < 3; i++) {
        p[i] = p[i] * 2;
    }
}

int main() {
    int a[3] = {1, 2, 3};

    walk(a);

    // Risultato finale: 2 4 6
    printf("%d %d %d\n", a[0], a[1], a[2]);

    return 0;
}
