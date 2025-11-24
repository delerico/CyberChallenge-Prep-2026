/**
 * Pointer Level 5 – Padding intermedio per allineamento dell'int
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare l'inserimento di padding automatico in presenza di campi
 *  di dimensioni diverse. Qui:
 *
 *      char a;   // 1 byte
 *      char b;   // 1 byte
 *      int  c;   // 4 byte
 *
 *  Dopo i due char, il compilatore inserisce 2 byte di padding per
 *  rendere l'indirizzo di 'c' un multiplo di 4. Dimensione finale: 8 byte.
 */

#include <stdio.h>

struct S {
    char a;   // offset 0
    char b;   // offset 1
    int  c;   // offset 4 (dopo 2 byte di padding)
};

int main() {
    printf("%zu\n", sizeof(struct S));   // Output: 8
    return 0;
}
