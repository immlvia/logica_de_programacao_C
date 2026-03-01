// Crie um programa que leia um conjunto de números reais, armazenando-o em vetor e calcule o quadrado das componentes deste vetor, armazenando o resultado em outro vetor. 
// Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.

#include <stdio.h>

int main() {
    float num, A[10], B[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%f", &num);
        A[i] = num;
    }
    
    for (int i = 0; i < 10; i++) {
        B[i] = A[i] * A[i];
    }
    
    
    printf("Vetor A (original): ");
        for (int i = 0; i < 10; i++) {
            printf("%.0f ", A[i]);
        }
    
    printf("\nVetor B (quadrados): ");
        for (int i = 0; i < 10; i++) {
            printf("%.0f ", B[i]);
        }

    
    return 0;
}    
