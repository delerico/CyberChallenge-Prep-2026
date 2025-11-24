/**
 * Overflow Exercise 03 – Signed char negative wrap-around
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare cosa accade quando si decrementa il valore minimo di un
 *  signed char. La rappresentazione two’s complement permette il wrap-around:
 *
 *      -128 - 1  →  127
 *
 *  Questo comportamento è tipico dei tipi a 8 bit con segno.
 */

#include <stdio.h>

int main() {
    signed char x = -128;   // Range: -128 to 127
    x--;                    // -128 - 1 → 127 (wrap-around)

    printf("x = %d\n", x);  // Output: x = 127

    return 0;
}
