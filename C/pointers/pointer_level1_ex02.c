/**
 * Pointer Level 1 – Dereferencing and Updating a Variable
 * Created by delerico on 20/11/2025
 */

#include <stdio.h>

int main() {

    int x = 4;
    int *p = &x;

    // *p accede al valore contenuto all'indirizzo di x.
    // L'istruzione *p = *p + 6 incrementa x di 6.
    // Quindi x passa da 4 → 10.

    *p = *p + 6;

    printf("%d\n", x);

    return 0;
}
