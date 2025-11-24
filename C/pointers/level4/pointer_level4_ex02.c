/**
 * Pointer Level 4 – Lettura del secondo byte di un int tramite char*
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare come l'aritmetica dei puntatori applicata a un char* permetta
 *  di accedere ai singoli byte di un int. Su architetture little-endian,
 *  il byte meno significativo è in p[0], quello successivo in p[1], ecc.
 */

#include <stdio.h>

int main() {
    int x = 0x55667788;     // Rappresentazione esadecimale a 4 byte
    char *p = (char*)&x;    // Cast a char* per leggere un byte alla volta

    // In memoria (little-endian):
    // Byte 0 → 0x88
    // Byte 1 → 0x77
    // Byte 2 → 0x66
    // Byte 3 → 0x55
    //
    // *(p + 1) legge 0x77 = 119 in decimale.
    printf("%d\n", *(p + 1));   // Output: 119

    return 0;
}
