// Escreva um programa em C que leia 5 valores inteiros (utilizando repetição).
// A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.

#include <stdio.h>

int main() {
    
    int num, pares = 0, impares = 0, pos = 0, neg = 0;
    
    for (int i = 0; i<5; i++) {
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        
        if (num>0) {
            pos++;
        } else if (num<0) {
            neg++;
        }
    }
    
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;   
}
