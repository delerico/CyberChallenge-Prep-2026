/**
 * Pointer Level 4 – Byte swapping tramite char*
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare come si possano scambiare singoli byte di un intero usando un
 *  char*. In little-endian, p[0] rappresenta il byte meno significativo,
 *  p[3] quello più significativo.
 */

#include <stdio.h>

int main() {
    int x = 0xAABBCCDD;     // In memoria (little-endian): DD CC BB AA
    char *p = (char*)&x;    // Accesso byte-level

    char tmp = p[0];        // tmp = 0xDD
    p[0] = p[3];            // p[0] = 0xAA
    p[3] = tmp;             // p[3] = 0xDD

    // Nuovo ordine dei byte: AA CC BB DD → 0xDD BB CC AA
    printf("0x%x\n", x);    // Output: 0xddbbccaa

    return 0;
}
