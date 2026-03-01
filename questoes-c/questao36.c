// Escreva um programa em C que leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números ímpares entre eles.

#include <stdio.h>

int main() {
    
    int x, y, soma = 0, maior, menor;
    
    scanf("%d %d", &x, &y);
    maior = y;
    menor = x;
    
    if(y < menor) {
        menor = y;
        maior = x;
    }
    
    for (int i = (menor + 1); i<maior; i++) {
        if(i % 2 != 0) {
            soma += i;
        }
    }
    
    printf("%d\n", soma);
    
    
    
    return 0;
}
