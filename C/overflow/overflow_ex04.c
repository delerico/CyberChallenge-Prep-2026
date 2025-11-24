/**
 * Overflow Exercise 04 – Signed int overflow (INT_MAX + 1)
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare il comportamento dell'overflow in un tipo int. Quando si
 *  supera INT_MAX (2147483647) il risultato, su architetture two’s
 *  complement, diventa INT_MIN (-2147483648).
 *
 *  Nota: secondo lo standard C l’overflow dei tipi signed è undefined
 *  behavior, ma nella pratica il wrap-around avviene su tutte le
 *  architetture moderne.
 */

#include <stdio.h>

int main() {
    int x = 2147483647;   // INT_MAX su sistemi a 32 bit
    x++;                  // Overflow → wrap-around a INT_MIN

    printf("x = %d\n", x);  // Output: -2147483648 (su two’s complement)

    return 0;
}
