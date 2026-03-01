/*
Escreva um programa em C que leia 7 números inteiros fornecidos pelo usuário e os armazene em um vetor. Em seguida, implemente uma função que receba esse vetor e exiba todos os seus elementos. 
Na implementação da função, não utilize índices para percorrer o vetor, apenas aritmética de ponteiros. Dicas: considere também passar o tamanho do vetor como parâmetro da função.
*/

#include <stdio.h>

void armazena(int *vetor, int tamanho) {
    int *fim = vetor + tamanho;
    printf("Vetor digitado:\n");
    for (int *p = vetor; p < fim; p++) {
        printf("%d ", *p); 
    }
}
int main() {
    
    int vetor[7];
    
    for (int i = 0; i < 7; i++) {
        scanf("%d", &vetor[i]);
    }
    
    armazena(vetor, 7);
    return 0;
}
