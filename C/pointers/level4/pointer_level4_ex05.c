/**
 * Pointer Level 4 – Interpretazione signed/unsigned nella lettura di byte
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare che leggere un byte di un intero negativo tramite char*
 *  porta alla rappresentazione signed di quel byte. Su architetture
 *  little-endian e con char signed, 0xFF viene interpretato come -1.
 */

#include <stdio.h>

int main() {
    int x = -1;           // Rappresentazione: 0xFFFFFFFF
    char *p = (char*)&x;  // p legge solo il primo byte (0xFF)

    // Poiché char è signed per default, 0xFF viene interpretato come -1.
    printf("%d\n", *p);   // Output: -1

    return 0;
}
