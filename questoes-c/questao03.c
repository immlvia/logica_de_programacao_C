// Escreva um programa em C que leia dois números inteiros e exiba o quociente e o resto da divisão inteira entre eles.

#include <stdio.h>

int main(){
    
    int n1, n2, quociente, resto;
    
    scanf("%d %d", &n1, &n2);
    quociente = n1/n2;
    resto = n1%n2;
    
    printf("Quociente = %d, Resto = %d", quociente, resto);
    
    return 0;
}
