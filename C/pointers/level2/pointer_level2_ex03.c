/**
 * Pointer Level 2 – Modifica di due elementi consecutivi tramite p++ e *(p + 1)
 * Created by delerico on 23/11/2025
 *
 * Obiettivo:
 *  Mostrare come un puntatore passato a una funzione possa essere spostato
 *  (p++) per modificare l'elemento successivo e, tramite *(p + 1),
 *  anche l'elemento ancora successivo nell'array.
 */

#include <stdio.h>

void edit_two(int *p) {
    p++;              // p passa da &a[0] → &a[1]
    *p = 100;         // modifica a[1]
    *(p + 1) = 200;   // modifica a[2]
}

int main() {
    int a[4] = {9, 8, 7, 6};

    edit_two(a);

    // Risultato finale: 9 100 200 6
    printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);

    return 0;
}
