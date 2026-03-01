// Crie uma função chamada tabuada que recebe como parâmetro: um número inteiro n e um limite m. A função deve gerar a tabuada de n x 1 até n x m.

#include <stdio.h>

void tabuada(int n, int m) { 
    
    printf("==============================\n\n");
    printf("TABUADA\n\n");
    printf("==============================\n\n");
    printf("Número base: %d\n", n);
    printf("\nLimite: %d", m);
    printf("\n\n------------------------------\n\n");
    
    for (int i = 1; i<m+1; i++) {
        printf("%d x %d = %d\n\n",n, i, n * i);
    }
    printf("==============================\n");
}
int main() {
    
    int n, m;
    scanf("%d %d", &n, &m);
    tabuada(n, m);
    
    return 0;
}
