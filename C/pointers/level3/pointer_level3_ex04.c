/**
 * Pointer Level 3 – Alias multipli sullo stesso dato
 * Created by delerico on 23/11/2025
 *
 * Obiettivo:
 *  Mostrare cosa accade quando due puntatori puntano alla stessa variabile.
 *  Qualsiasi modifica effettuata tramite *p o *q modifica lo stesso valore x.
 */

#include <stdio.h>

int main() {
    int x = 7;

    int *p = &x;   // p punta a x
    int *q = &x;   // q punta allo stesso x

    *p = *p + 5;   // x = 7 + 5 = 12
    *q = *q * 2;   // x = 12 * 2 = 24

    printf("%d\n", x);   // Output: 24

    return 0;
}
