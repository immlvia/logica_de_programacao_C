/*
Crie um programa que leia duas variáveis inteiras a e b, e declare um ponteiro p. Siga os seguintes passos:

1 - Faça p apontar para a e imprima o valor de a usando o ponteiro.
2 - Faça p apontar para b e altere o valor de b para 35 através do ponteiro.
3 - Imprima a e b após as alterações.
*/

#include <stdio.h>

int main() {
    
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int *p = &a;
    
    printf("Valor de a (via ponteiro): %d\n", *p);

    p = &b;
    *p = 35;
    
    printf("Valor final de a: %d\n", a);
    printf("Valor final de b: %d\n", b);

    
    
    return 0;
}
