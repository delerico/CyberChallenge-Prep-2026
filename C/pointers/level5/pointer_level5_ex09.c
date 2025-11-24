/**
 * Pointer Level 5 – Byte-level access inside a struct with padding
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare come accedere ai singoli byte del campo 'b' all'interno di una
 *  struct che contiene padding. Il campo:
 *
 *      char a;   // offset 0
 *      int  b;   // offset 4 (allineamento a 4 byte)
 *
 *  La struct contiene 3 byte di padding tra 'a' e 'b'. L'int b = 0x11223344
 *  viene memorizzato in little-endian come: 44 33 22 11.
 *
 *  p + 5 → byte con valore 0x33 (secondo byte del campo b).
 */

#include <stdio.h>

struct S {
    char a;   // offset 0
    int  b;   // offset 4 (dopo padding)
};

int main() {
    struct S x = { 0xAA, 0x11223344 };
    char *p = (char*)&x;

    // p + 5 → 0x33
    printf("%x\n", *(p + 5));   // Output: 33

    return 0;
}
