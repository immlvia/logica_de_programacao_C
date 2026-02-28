// Utilizando repetição, escreva um programa em C que receba um número e calcule o fatorial. Exiba o resultado.

#include <stdio.h>

int main(){
    
    int numero, cont;
    
    scanf("%d", &numero);
    cont = numero;
    
    while (cont!=1){
        numero*=(cont-1);
        cont--;
    }    
    printf("%d", numero);
    
    return 0;
    
}
