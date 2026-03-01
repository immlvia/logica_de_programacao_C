// Faça um programa em C que leia um array de N números inteiros (N ≤ 30). O programa deve criar um novo array sem elementos repetidos, mantendo apenas a primeira ocorrência de cada número. 
// Após isso, exiba o array resultante.

#include <stdio.h>

int main() {
    
    int N, x[30], resultado[30];
    int tamanho_resultado = 0;
    scanf("%d", &N);
    
    while (N > 30) {
        scanf("%d", &N);
    }
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < N; i++) {
        int repetido = 0;
        for (int j = 0; j < tamanho_resultado; j++) {
            if (x[i] == resultado[j]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            resultado[tamanho_resultado] = x[i];
            tamanho_resultado++;
        }
    }

    
    printf("Array sem elementos repetidos: ");
    for (int i = 0; i < tamanho_resultado; i++) {
        printf("%d ", resultado[i]);
    }
    return 0;
}
