/**
 * Pointer Level 5 – Accesso agli elementi di un array di struct tramite offset
 * Created by delerico on 24/11/2025
 *
 * Obiettivo:
 *  Mostrare come, dato un array di struct, sia possibile accedere ai campi
 *  interni usando calcoli sugli offset. Ogni struct S occupa 8 byte
 *  (due int consecutivi), quindi l’elemento arr[1] inizia esattamente a
 *  offset 8 rispetto all'inizio dell’array.
 *
 *  La sequenza:
 *
 *      (p + 8)          → sposta l’indirizzo di 8 byte in avanti
 *      (int*)(p + 8)    → interpreta quell’indirizzo come puntatore a int
 *      *(int*)(p + 8)   → legge il valore intero in arr[1].a
 *
 *  Questo permette di accedere al campo 'a' della seconda struct.
 */

#include <stdio.h>

struct S {
    int a;   // 4 byte
    int b;   // 4 byte
};           // 8 byte totali, nessun padding

int main() {
    struct S arr[2] = { {10, 20}, {30, 40} };
    char *p = (char*)&arr;   // Accesso byte-level alla memoria dell’array

    // Offset 8 = inizio di arr[1]
    // (int*)(p + 8) interpreta quell’indirizzo come int*
    // *(...) dereferenzia e legge arr[1].a = 30
    printf("%d\n", *(int*)(p + 8));   // Output: 30

    return 0;
}
