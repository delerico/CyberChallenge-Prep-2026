/**
 * Overflow Exercise 06 – Unsigned int wrap-around (0xFFFFFFFF + 1)
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare il comportamento dell’overflow nel tipo unsigned int.
 *  L'intervallo di un unsigned a 32 bit è:
 *
 *      0 … 4294967295 (0x00000000 … 0xFFFFFFFF)
 *
 *  Incrementare 0xFFFFFFFF produce un wrap-around al valore 0.
 */

#include <stdio.h>

int main() {
    unsigned int x = 0xFFFFFFFF;   // Valore massimo per un unsigned 32 bit
    x++;                           // 0xFFFFFFFF + 1 = 0x00000000

    printf("%u\n", x);             // Output: 0

    return 0;
}
