// Crie um programa em C que peça 10 números, armazene eles em um vetor e diga qual elemento é o maior, qual é o menor e quais são suas posições. Obs: Caso o vetor tenha números repetidos, considere o maior/menor como o primeiro a aparecer.

#include <stdio.h>

int main() {
    
    int x[10];
    int tamanho = sizeof(x) / sizeof(x[0]);
    int maior, menor, pos_maior, pos_menor;
    
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &x[i]);
    }
    
    maior = x[0];
    menor = x[0];
    pos_maior = 0;
    pos_menor = 0;
    
 
    for (int i = 1; i < tamanho; i++) {
        if (x[i] > maior) {
            maior = x[i];
            pos_maior = i;
        }
        
        if (x[i] < menor) {
            menor = x[i];
            pos_menor = i;
        }
            
    }    
    
    printf("Maior valor: %d - Posicao %d\n", maior, pos_maior);
    printf("Menor valor: %d - Posicao %d\n", menor, pos_menor);
    
    return 0;
}
