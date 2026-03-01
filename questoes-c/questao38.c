// Escreva um programa em C que leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso.

#include <stdio.h>

int main() {
    int N, quadrado = 2;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            printf("%d^%d = %d\n", i, quadrado, i*i);
        }
    }
    
    
    return 0;
}
