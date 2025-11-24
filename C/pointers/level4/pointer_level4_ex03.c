/**
 * Pointer Level 4 – Modifica del solo primo byte di un int tramite char*
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare come la scrittura su un singolo byte (tramite char*) modifichi
 *  in modo significativo il valore intero, in base alla rappresentazione
 *  little-endian della memoria.
 */

#include <stdio.h>

int main() {
    int x = 1000;          // 0x000003E8
    char *p = (char*)&x;   // p legge/scrive un byte alla volta

    *p = 0;                // Cambia il primo byte (0xE8 → 0x00)

    // Nuova rappresentazione in memoria: 00 03 00 00
    // Che corrisponde al valore decimale 768.
    printf("%d\n", x);     // Output: 768

    return 0;
}
