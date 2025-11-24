/**
 * Pointer Level 5 – sizeof e padding nelle struct
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Dimostrare come il compilatore inserisca padding per allineare i campi
 *  di una struct. In questo caso:
 *
 *      char a;   // 1 byte
 *      int  b;   // 4 byte
 *
 *  L'int richiede allineamento a 4 byte. Dopo 'a' vengono inseriti
 *  automaticamente 3 byte di padding, portando la struct a 8 byte totali.
 */

#include <stdio.h>

struct S {
    char a;   // 1 byte
    int  b;   // 4 byte, allineato tramite padding
};

int main() {
    printf("%zu\n", sizeof(struct S));   // Output: 8
    return 0;
}
