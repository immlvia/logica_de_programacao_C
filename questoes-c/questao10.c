// Escreva um programa em C que leia números inteiros até que seja digitado um número negativo. Calcule e mostre a soma apenas dos positivos.

#include <stdio.h>

int main(){
    
   int numeros, soma = 0;
   
   scanf("%d", &numeros);
   
   while (numeros>=0){
       if (numeros>0){
           soma += numeros;
       }
       scanf("%d", &numeros);
   }
   
    printf("%d", soma);
    
    return 0;
    
}
