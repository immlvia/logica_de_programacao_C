// Faça um programa que receba do usuário dois vetores, A e B, com 5 números inteiros cada. Crie um novo vetor denominado C calculando C = A - B . Mostre na tela o vetor C.

#include <stdio.h>

int main() {

	int A[5], B[5], C[5];
	int tamanho = 5;

	for (int i = 0; i < tamanho; i++) {
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < tamanho; i++) {
		scanf("%d", &B[i]);
	}
	
	for (int i = 0; i < tamanho; i++) {
        C[i] = A[i] - B[i];
	}
    printf("C[] = ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", C[i]);
    }
	return 0;
}
