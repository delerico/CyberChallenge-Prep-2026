/**
 * Pointer Level 2 – Modifica di un elemento tramite p++
 * Created by delerico on 20/11/2025
 */

#include <stdio.h>

void move(int *p) {
    p++;            // p passa da &a[0] a &a[1]
    *p = *p + 3;    // modifica a[1] → 4 + 3 = 7
}

int main() {
    int a[4] = {2, 4, 6, 8};

    move(a);

    // Risultato: 2 7 6 8
    printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);

    return 0;
}
