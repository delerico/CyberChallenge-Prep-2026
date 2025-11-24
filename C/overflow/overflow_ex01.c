/**
 * Overflow Exercise 01 – Unsigned char wrap-around
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare il comportamento di overflow di un tipo unsigned char,
 *  che rappresenta valori nell'intervallo [0, 255]. Quando il valore
 *  massimo (255) viene incrementato, avviene un wrap-around modulo 256.
 */

#include <stdio.h>

int main() {
    unsigned char x = 255;   // Range: 0–255
    x++;                     // 255 + 1 = 0 (wrap-around)

    printf("x = %u\n", x);   // Output: x = 0

    return 0;
}
