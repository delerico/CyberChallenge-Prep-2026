/**
 *  Pointer Level 1 – Array Access via Pointer Arithmetic
 *  Created by delerico on 20/11/2025
 */

#include <stdio.h>

int main() {

    int a[4] = {5, 7, 9, 11};
    int *p = a;

    // *(p+3) accede al quarto elemento dell'array (indice 3)
    // a[3] = 11
    // In pointer arithmetic: p parte dall'indirizzo di a[0], quindi p+3 avanza di 3 interi
    // Ogni intero occupa 4 byte, quindi p+3 si sposta di 12 byte nella memoria
    // *(p+3) dereferenzia quel valore → 11
  
    printf("%d\n", *(p+3));

    return 0;
}
