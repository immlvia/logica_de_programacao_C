// Crie um programa que leia uma variável inteira x e declare um ponteiro que aponte para ela. Após isso, imprima o valor de x usando o ponteiro.
// Ainda com uso do ponteiro, multiplique o valor de x por 3 e imprima o novo valor.

#include <stdio.h>

int main() {
    
    int x;
    scanf("%d", &x);
    
    int *p = &x;
    printf("Valor inicial: %d\n", *p);
    
    *p = *p * 3;
    
    printf("Novo valor: %d", *p);
    
    return 0;
}
