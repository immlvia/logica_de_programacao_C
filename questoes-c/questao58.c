// Leia dois números inteiros e, utilizando ponteiros, descubra qual é o maior número. Imprima o resultado.

#include <stdio.h>

int main() {
    
    int a, b;
    int *p1;
    int *p2;
    
    scanf("%d %d", &a, &b);
    
    p1 = &a;
    p2 = &b;
    
    if (*p2 > *p1) {
        printf("Maior numero: %d\n", *p2);
    } else {
        printf("Maior numero: %d\n", *p1);
    }
    
    return 0;
}
