/**
 * Overflow Exercise 09 – Signed int underflow (INT_MIN - 1)
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare cosa accade quando si sottrae 1 da INT_MIN (-2147483648).
 *
 *  Dal punto di vista dello standard C, questo è undefined behavior:
 *  l’overflow dei tipi signed non è definito formalmente.
 *
 *  Tuttavia, sulle architetture reali basate su two’s complement,
 *  l’operazione produce un wrap-around che porta al valore INT_MAX
 *  (2147483647).
 */

#include <stdio.h>

int main() {
    int x = -2147483648;    // INT_MIN
    x--;                    // Underflow → undefined behavior (ma wrap-around nella pratica)

    printf("x = %d\n", x);  // Su two’s complement: 2147483647

    return 0;
}
