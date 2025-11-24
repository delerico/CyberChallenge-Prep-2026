/**
 * Pointer Level 5 – Padding e allineamento con char, short e int
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare come il compilatore allinei i campi di una struct quando
 *  contengono tipi con diversi requisiti di allineamento:
 *
 *      char  a;   // 1 byte
 *      short b;   // 2 byte
 *      int   c;   // 4 byte
 *
 *  Dopo 'b', il compilatore inserisce 1 byte di padding per far sì che
 *  'c' inizi a un indirizzo multiplo di 4. Dimensione finale: 8 byte.
 */

#include <stdio.h>

struct S {
    char  a;   // offset 0
    short b;   // offset 2 (dopo allineamento)
    int   c;   // offset 4 (dopo 1 byte di padding)
};

int main() {
    printf("%zu\n", sizeof(struct S));   // Output: 8
    return 0;
}
