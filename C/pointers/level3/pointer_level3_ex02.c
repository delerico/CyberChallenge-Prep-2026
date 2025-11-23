/**
 * Pointer Level 3 – Puntatore copiato, dati originali modificati
 * Created by delerico on 23/11/2025
 *
 * Obiettivo:
 *  Mostrare che, anche se un puntatore passato a una funzione viene copiato
 *  (p = p + 1 non cambia p nel chiamante), la dereferenziazione *p modifica
 *  i dati originali dell'array.
 */

#include <stdio.h>

void edit(int *p) {
    p = p + 1;     // p locale → &a[1]
    *p = 999;      // Modifica a[1] nell'array originale
}

int main() {
    int a[3] = {5, 6, 7};

    edit(a);

    // Risultato: modificato solo il secondo elemento.
    printf("%d %d %d\n", a[0], a[1], a[2]);  // Output: 5 999 7

    return 0;
}
