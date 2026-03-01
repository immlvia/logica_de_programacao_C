/*
Questão: Número de Armstrong (Narcisista)

Um número de Armstrong é aquele que é igual à soma dos seus
dígitos elevados ao número de algarismos.

Exemplos:

153 = 1^3 + 5^3 + 3^3
9474 = 9^4 + 4^4 + 7^4 + 4^4

Enunciado:
Faça um programa em C que:

- Leia um número inteiro positivo N.
- Determine se ele é um número de Armstrong.
- Utilize um laço for para calcular a potência de cada dígito.
- Utilize if...else para exibir se o número é Armstrong ou não.
*/

#include <stdio.h>
#include <math.h>
int main() {
    
    int N;
    scanf("%d", &N);
    
    
    if (N < 0) {
        printf("Inválido\n");
    } else {
        int original = N;
        int num_digitos = 0;
        int temp = N;
            
        while (temp > 0) {
            num_digitos += 1;
            temp /=10;
                
        } 
            
        int soma = 0;
        temp = N;
        
        for (int i = 0; i < num_digitos; i++) {
            int digito = temp % 10;
            soma += pow(digito, num_digitos);
            temp/=10;
            }
            
        if (soma == original) {
            printf("%d eh um numero de Armstrong!\n", original);
        
        } else {
            printf("%d nao eh um numero de Armstrong.\n", original);
        } 
    }
    
    return 0;
}
