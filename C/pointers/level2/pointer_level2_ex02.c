/**
 * Pointer Level 2 – Il puntatore passato alla funzione non cambia nel chiamante
 * Created by delerico on 23/11/2025
 *
 * Obiettivo:
 *  Mostrare che quando un puntatore viene passato a una funzione come parametro,
 *  viene passato per valore. Questo significa che p = p + 2 modifica solo la
 *  copia locale del puntatore, senza alterare il puntatore originale nel main.
 */

#include <stdio.h>

void move_pointer(int *p) {
    p = p + 2;   // Modifica SOLO la copia locale del puntatore
}

int main() {
    int a[4] = {1, 2, 3, 4};
    int *p = a;  // p punta a a[0]

    move_pointer(p);  
    // p NON è cambiato: punta ancora a a[0]

    printf("%d\n", *p);   // Output: 1

    return 0;
}
