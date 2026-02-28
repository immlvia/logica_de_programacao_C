// Escreva um programa em C que leia números inteiros até que o usuário digite 0. Para cada número, informe se ele é par ou ímpar.

#include <stdio.h>

int main(){
    
    int parada;
    scanf("%d", &parada);
    
    while (parada!= 0){
        if (parada%2==0){
            printf("Par \n");
        }    
        else{
            printf("Ímpar \n");
        }
        scanf("%d", &parada);
        
    }
    return 0;
    
}
