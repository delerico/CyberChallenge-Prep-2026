/**
 * Pointer Level 1 – p++ per accedere all'elemento successivo dell'array
 * Created by delerico on 20/11/2025
 *
 * Obiettivo:
 *  Mostrare come l'operazione p++ sposti il puntatore all'elemento successivo
 *  di un array e come dereferenziare il nuovo indirizzo per ottenere il valore.
 */

#include <stdio.h>

int main() {
    int a[5] = {5, 15, 25, 35, 45};
    int *p = a;

    // p punta inizialmente a a[0] (valore = 5).
    p++;  // Ora p punta a a[1] (valore = 15).

    printf("%d\n", *p);   // Output: 15

    return 0;
}
