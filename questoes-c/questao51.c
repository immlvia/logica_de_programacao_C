// Faça um programa que leia um valor inteiro T e preencha um vetor N[20] com a sequência de valores de 0 até T-1 repetidas vezes, conforme exemplo abaixo. Após isso, Imprima o vetor N. 
// Para a saída, para cada posição do vetor, escreva "N[i] = x", onde i é a posição do vetor e x é o valor armazenado naquela posição. 
// OBS: Adicione uma verificação que impeça que a entrada seja zero ou um número negativo.

#include <stdio.h>

int main() {
    int T, aux = 0, N[20];
    scanf("%d", &T);
    
    if (T <= 0) {
        printf("Entrada invalida!\n");
        
    } else {
        for (int i = 0; i < 20; i++) {
            N[i] = aux;
            printf("N[%d] = %d\n", i, aux);
            aux++;
            
            if (aux == T) {
                aux = 0;
            }
        }
    }
    return 0;
}    
