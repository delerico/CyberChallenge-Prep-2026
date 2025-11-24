/**
 * Pointer Level 4 – Lettura del primo byte di un int tramite cast a char*
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare come il cast (char*) applicato a un int* permetta di leggere
 *  il contenuto byte per byte. Su architetture little-endian, il primo byte
 *  corrisponde al meno significativo.
 */

#include <stdio.h>

int main() {
    int x = 0x11223344;     // Valore espresso in esadecimale
    char *p = (char*)&x;    // Cast a char* per lettura del singolo byte

    // Su architetture little-endian la memoria contiene i byte: 44 33 22 11
    // *p legge il primo byte, quindi 0x44 = 68 in decimale
    printf("%d\n", *p);     // Output: 68

    return 0;
}
