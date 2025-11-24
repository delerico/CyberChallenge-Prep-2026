/**
 * Overflow Exercise 02 – Signed char overflow
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare il comportamento di overflow in un tipo signed char, che
 *  rappresenta valori nell'intervallo [-128, 127]. Incrementare 127
 *  porta al wrap-around a -128, secondo la rappresentazione two’s complement.
 */

#include <stdio.h>

int main() {
    signed char x = 127;   // Range: -128 to 127
    x++;                   // 127 + 1 → -128 (wrap-around)

    printf("x = %d\n", x);   // Output: x = -128

    return 0;
}
