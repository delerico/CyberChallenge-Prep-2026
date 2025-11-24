/**
 * Pointer Level 5 – Accesso ai campi di una struct tramite puntatore
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare l’uso dell’operatore -> per accedere ai campi di una struct
 *  tramite puntatore. In questa struct, entrambi i campi sono int e quindi
 *  la dimensione totale è 8 byte senza padding extra.
 */

#include <stdio.h>

struct S {
    int a;   // 4 byte
    int b;   // 4 byte
};

int main() {
    struct S x = { 5, 10 };
    struct S *p = &x;   // p punta alla struct x

    // p->b accede direttamente al secondo campo della struct
    printf("%d\n", p->b);  // Output: 10

    return 0;
}
