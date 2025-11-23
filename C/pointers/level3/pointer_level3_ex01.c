/**
 * Pointer Level 3 – Il puntatore passato in funzione non cambia nel chiamante
 * Created by delerico on 23/11/2025
 *
 * Obiettivo:
 *  Mostrare che quando un puntatore viene passato a una funzione,
 *  esso viene passato per valore. Modificare il puntatore localmente
 *  (p = p + 1) non modifica il puntatore originale nel main.
 */

#include <stdio.h>

void jump(int *p) {
    p = p + 1;   // Modifica solo la copia locale di p
}

int main() {
    int a[3] = {10, 20, 30};
    int *p = a;  // p punta a a[0]

    jump(p);

    // L'array rimane invariato, perché *p non è mai stato modificato.
    // E p nel main non cambia, poiché è stato passato per valore.
    printf("%d %d %d\n", a[0], a[1], a[2]);  // Output: 10 20 30

    return 0;
}
