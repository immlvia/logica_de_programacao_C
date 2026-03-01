// Crie um programa que declare uma variável int x, um ponteiro p para x e um ponteiro pp para p. O programa deve ler do usuário o valor inicial de x e um novo valor para alterar x usando pp. 
// Ao final, imprima o valor inicial e o valor final de x.

#include <stdio.h>

int main() {
    
    int x;
    int *p;
    int **pp;
    
    scanf("%d", &x);
    p = &x;
    printf("Valor inicial de x = %d\n", *p);
    
    pp = &p;
    scanf("%d", &*(*pp));
    printf("Valor final de x = %d", *(*pp));
    

    return 0;
}
