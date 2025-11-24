/**
 * Overflow Exercise 05 – Conversione signed → unsigned
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare come un valore signed negativo venga reinterpretato quando
 *  assegnato a un tipo unsigned. Il byte 0xFF rappresenta:
 *
 *      signed char   → -1
 *      unsigned char → 255
 *
 *  Stampare con %d forza una interpretazione signed, mentre %u mostra il
 *  valore unsigned reale.
 */

#include <stdio.h>

int main() {
    signed char x = -1;        // 0xFF interpretato come signed → -1
    unsigned char y = x;       // 0xFF interpretato come unsigned → 255

    printf("y unsigned = %u\n", y);  // 255
    printf("x signed   = %d\n", x);  // -1

    return 0;
}
