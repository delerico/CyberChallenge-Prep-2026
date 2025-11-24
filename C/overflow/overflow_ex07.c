/**
 * Overflow Exercise 07 – Unsigned char addition overflow (mod 256)
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare come la somma di due unsigned char venga eseguita modulo 256.
 *  Poiché un unsigned char può rappresentare valori nell’intervallo
 *  0…255, un risultato superiore a 255 viene ridotto tramite wrap-around.
 *
 *      100 + 200 = 300
 *      300 mod 256 = 44
 */

#include <stdio.h>

int main() {
    unsigned char x = 100;
    unsigned char y = 200;

    unsigned char z = x + y;   // Overflow → 300 mod 256 = 44

    printf("z = %u\n", z);     // Output: 44

    return 0;
}
