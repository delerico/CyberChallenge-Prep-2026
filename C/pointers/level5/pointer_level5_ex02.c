/**
 * Pointer Level 5 – Accesso ai campi di una struct tramite offset
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare come i campi di una struct siano disposti in memoria,
 *  includendo il padding automatico. In questo caso:
 *
 *      struct S {
 *          char a;   // 1 byte
 *          int  b;   // 4 byte, allineato a 4 byte
 *      };
 *
 *  Dopo 'a', il compilatore inserisce 3 byte di padding. Il campo 'b'
 *  inizia quindi all'offset 4.
 */

#include <stdio.h>

struct S {
    char a;   // offset 0
    int  b;   // offset 4 (dopo 3 byte di padding)
};

int main() {
    struct S x = { 'Z', 100 };
    char *p = (char*)&x;

    // p[0] = 'Z'
    // p + 4 punta all'inizio del campo int b
    printf("%c %d\n", p[0], *(int*)(p + 4));  // Output: Z 100

    return 0;
}
