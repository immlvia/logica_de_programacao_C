// Escreva um programa em C que leia um array de 10 números inteiros. O programa deve inverter a ordem dos elementos do array, de modo que o primeiro vire o último, o segundo vire o penúltimo, e assim por diante.
// Em seguida, exiba o array invertido.

#include <stdio.h>

int main() {

	int A[10], I[10], num, j = 9;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num);
		A[i] = num;
	}
	
	for (int i = 0; i < 10; i++) {
	    I[j] = A[i];
	    j--;
	}
	
	printf("Array invertido: ");
	
	for (int i = 0; i < 10; i++) {
	    printf("%d ", I[i]);
	}
	
	return 0;
}
