/**
 * Overflow Exercise 08 – Integer promotion prevents overflow
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare che durante un'operazione aritmetica, i tipi più piccoli di int
 *  (come unsigned char) vengono promossi automaticamente a int prima della
 *  somma. Questo impedisce l’overflow durante l'operazione:
 *
 *      unsigned char x = 250;
 *      unsigned char y = 10;
 *
 *      x + y viene calcolato come int → 250 + 10 = 260
 *
 *  Nessun overflow avviene, perché l'operazione non viene eseguita modulo 256,
 *  ma in aritmetica intera a 32 bit.
 */

#include <stdio.h>

int main() {
    unsigned char x = 250;
    unsigned char y = 10;

    int z = x + y;   // integer promotion → somma sicura

    printf("z = %d\n", z);   // Output: 260

    return 0;
}
