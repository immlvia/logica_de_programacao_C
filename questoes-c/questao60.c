// Leia 4 números inteiros em um array. Utilizando um ponteiro para ponteiro, transforme todos os números positivos em negativos.
// Imprima o array resultante.

#include <stdio.h>

int main () {
    
    int array[4];
    int *p;
    int **pp;
    
    for (int i = 0; i < 4; i++) {
        scanf("%d", &array[i]);
    }
    
    p = array;
    pp = &p;
    printf("Valores apos modificacao: \n");
    
    for (int i = 0; i < 4; i++) {
        if(*(*pp + i) > 0) {
            *(*pp + i) *= -1;
        }    
        printf("%d\n", *(*pp + i));
        
    }
    
    return 0;
}
