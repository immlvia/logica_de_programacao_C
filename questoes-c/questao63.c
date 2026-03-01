/*
Crie um programa em C que leia 10 números reais fornecidos pelo usuário e os armazene em um vetor. 
Depois, implemente uma função que receba esse vetor como parâmetro e retorne a quantidade de valores negativos contidos nele. Essa função deve obedecer ao seguinte protótipo:
int negativos(float *vet, int N);
Ao final, mostre o resultado.
*/

#include <stdio.h>

int negativos(float *vet, int N) {
    int qtd = 0;
    float *fim = vet + N; 
    
    for (float *p = vet; p < fim; p++) {
        if (*p < 0) {
            qtd++;
        }
    }
    
    return qtd; 
}

int main() {
    
    float array[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%f", &array[i]);
    }
    
    int resultado = negativos(array, 10);
    printf("Quantidade de numeros negativos: %d", resultado);
    
    return 0;
}
