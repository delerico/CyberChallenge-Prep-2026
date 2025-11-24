/**
 * Pointer Level 5 – Byte-level access inside an array of structs (with padding)
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Comprendere il layout in memoria di un array di struct che contiene tipi
 *  con allineamento diverso. In particolare:
 *
 *      short a;   // 2 byte
 *      int   b;   // 4 byte
 *
 *  Per allineare 'b' a un indirizzo multiplo di 4, il compilatore inserisce
 *  2 byte di padding dopo 'a'. Ogni struct S occupa quindi:
 *
 *      2 (short) + 2 (padding) + 4 (int) = 8 byte
 *
 *  In un array di due struct, l'offset 14 corrisponde al terzo byte del campo
 *  'b' del secondo elemento. Il valore assegnato è 0x99AABBCC, che in
 *  little-endian diventa: CC BB AA 99.
 *
 *  p + 14 → byte con valore 0xAA.
 */

#include <stdio.h>

struct S {
    short a;   // offset 0
    int   b;   // offset 4 (dopo 2 byte di padding)
};             // 8 byte totali

int main() {
    struct S arr[2] = {
        { 0x1122, 0x33445566 },
        { 0x7788, 0x99AABBCC }
    };

    char *p = (char*)arr;

    // Offset 14 = terzo byte (0xAA) del campo b del secondo elemento
    printf("%x\n", (unsigned char)*(p + 14));   // Output: aa

    return 0;
}
