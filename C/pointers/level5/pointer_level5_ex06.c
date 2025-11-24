/**
 * Pointer Level 5 – Lettura di un byte di padding da una struct
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare che tra un char e un int in una struct vengono inseriti
 *  3 byte di padding per allineare l'int all'offset 4. Accedere ai
 *  byte di padding produce valori non inizializzati.
 */

#include <stdio.h>

struct S {
    char a;   // offset 0
    int  b;   // offset 4 (dopo 3 byte di padding)
};

int main() {
    struct S x = { 0x11, 0x22334455 };
    char *p = (char*)&x;

    // p[1] accede a un byte di padding → valore NON definito
    printf("%x\n", p[1]);

    return 0;
}
