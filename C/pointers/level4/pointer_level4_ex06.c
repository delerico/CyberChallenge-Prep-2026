/**
 * Pointer Level 4 – Modifica del byte più significativo tramite char*
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare come l’aritmetica dei puntatori applicata a un char* consenta
 *  di modificare singoli byte di un intero. In little-endian, *(p+3)
 *  corrisponde al byte più significativo.
 */

#include <stdio.h>

int main() {
    int x = 0x000000FF;     // Bytes in memoria: FF 00 00 00 (little-endian)
    char *p = (char*)&x;    // p permette accesso byte-level

    *(p + 3) = 1;           // Modifica il byte più significativo: 00 → 01

    // Nuovo valore: 01 00 00 FF → 0x010000FF
    printf("0x%x\n", x);    // Output: 0x10000ff

    return 0;
}
