// Crie um programa que leia um número inteiro A e um vetor com 10 elementos inteiros. Após isso, procure A dentro do vetor.  
// Se for encontrado, seu programa deverá exibir a posição do vetor em que o número A apareceu pela útima vez; Caso A não seja encontrado, exiba uma mensagem avisando “Numero nao encontrado no vetor.”.

#include <stdio.h>

int main() {
    int A, vetor[10], num, verifica = 0; 
    scanf("%d", &A);
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        vetor[i] = num;
    }
    
    for (int i = 9; i >= -1; i--) {
        if (vetor[i] == A) {
            printf("O numero %d foi encontrado na posicao %d do vetor.\n", A, i);
            verifica = 1;
            break;
        } 
    }
    
    if (verifica!=1) {
         printf("Numero nao encontrado no vetor.\n");
    }
    
    return 0;
}    
