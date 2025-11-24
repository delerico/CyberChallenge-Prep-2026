/**
 * Pointer Level 5 – sizeof con padding finale
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare che anche se i campi occupano 4 + 1 byte, il compilatore
 *  aggiunge 3 byte di padding alla fine della struct per rispettare
 *  l’allineamento a 4 byte. Dimensione finale: 8 byte.
 *
 *  %zu è lo specifier corretto per stampare un valore di tipo size_t,
 *  che è il tipo restituito da sizeof.
 */

#include <stdio.h>

struct S {
    int  a;   // 4 byte
    char b;   // 1 byte + 3 byte di padding finale
};

int main() {
    printf("%zu\n", sizeof(struct S));   // Output: 8
    return 0;
}
