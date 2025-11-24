/**
 * Pointer Level 4 – Scrittura dei singoli byte di un int
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare come un intero possa essere costruito manualmente scrivendo
 *  i singoli byte tramite un char*. La rappresentazione finale dipende
 *  dall'ordine little-endian della memoria.
 */

#include <stdio.h>

int main() {
    int x = 0;            // 0x00000000 in memoria (4 byte)
    char *p = (char*)&x;  // Cast a char* per accedere ai singoli byte

    p[0] = 1;
    p[1] = 1;
    p[2] = 1;
    p[3] = 1;

    // Byte order (little-endian): 01 01 01 01
    // Valore decimale: 1 + 256 + 65536 + 16777216 = 16843009
    printf("%d\n", x);    // Output: 16843009

    return 0;
}
