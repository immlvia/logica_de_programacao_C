// Escreva um programa em C que leia 10 números inteiros e armazene-os em um array. Em seguida, exiba a soma de todos os elementos do array e também o maior e o menor elemento.

#include <stdio.h>

int main() {
    
    int x[10];
    int tamanho = sizeof(x) / sizeof(x[0]);
    int maior, menor, soma = 0;
    
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &x[i]);
    }
    
    maior = x[0];
    menor = x[0];
 
    for (int i = 1; i < tamanho; i++) {
        if (x[i] > maior) {
            maior = x[i];
        }
        
        if (x[i] < menor) {
            menor = x[i];
        }
            
    }
    
    for (int i = 0; i < tamanho; i++) {
        soma += x[i];
    }
    
    printf("Soma dos elementos: %d\n", soma);
    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);
    
    return 0;
}
