/**
 * Pointer Level 4 – Lettura del secondo byte di un intero tramite char*
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare come un char* permetta di leggere i singoli byte di un int.
 *  Nel caso del valore 1000 (0x000003E8), su architetture little-endian
 *  i byte in memoria sono: E8 03 00 00.
 */

#include <stdio.h>

int main() {
    int x = 1000;          // 0x000003E8
    char *p = (char*)&x;   // Accesso ai singoli byte

    // p[1] è il secondo byte: 0x03 = 3
    printf("%d\n", p[1]);  // Output: 3

    return 0;
}
