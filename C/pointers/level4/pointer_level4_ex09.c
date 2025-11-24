/**
 * Pointer Level 4 – Accesso byte-level a un array di int
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare come un array di int venga rappresentato in memoria come una
 *  sequenza continua di byte e come, tramite un char*, sia possibile
 *  accedere a un byte specifico usando l'aritmetica dei puntatori.
 */

#include <stdio.h>

int main() {
    int a[2] = {0x11223344, 0x55667788};
    char *p = (char*)a;

    /*
     * Rappresentazione in memoria (little-endian):
     *
     * a[0] = 0x11223344 → 44 33 22 11
     * a[1] = 0x55667788 → 88 77 66 55
     *
     * Indici:
     *  p[0] = 0x44
     *  p[1] = 0x33
     *  p[2] = 0x22
     *  p[3] = 0x11
     *  p[4] = 0x88
     *  p[5] = 0x77
     *  p[6] = 0x66
     *  p[7] = 0x55
     *
     * *(p + 5) quindi legge 0x77.
     */

    printf("%x\n", *(p + 5));   // Output: 77

    return 0;
}
