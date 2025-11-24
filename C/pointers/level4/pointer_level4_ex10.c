/**
 * Pointer Level 4 – Modifica del byte meno significativo di un intero
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare come modificare il singolo byte LSB (Least Significant Byte)
 *  tramite un char*, e come questo influisca sul valore intero finale.
 */

#include <stdio.h>

int main() {
    int a[2] = {10, 20};      // 20 dec = 0x00000014
    char *p = (char*)&a[1];   // p punta al byte meno significativo di a[1]

    *p = 0xFF;                // Modifica solo il primo byte → diventa 0x000000FF

    printf("%d\n", a[1]);     // Output: 255

    return 0;
}
