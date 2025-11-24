/**
 * Overflow Exercise 10 – Mixed signed/unsigned comparison trap
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare il comportamento del C quando si confrontano valori
 *  signed e unsigned. In un'espressione mista, il valore signed viene
 *  convertito in unsigned prima del confronto.
 *
 *  int a  = -1;              // 0xFFFFFFFF
 *  unsigned int b = 1;
 *
 *  Confronto:
 *      a < b  → 4294967295 < 1 → false
 */

#include <stdio.h>

int main() {
    int a = -1;          // 0xFFFFFFFF → 4294967295 come unsigned
    unsigned int b = 1;

    if ((unsigned int)a < b)
        printf("yes\n");
    else
        printf("no\n");  // Output: no

    return 0;
}
