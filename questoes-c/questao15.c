// Escreva um programa em C que leia um número inteiro N e use um laço while para imprimir todos os números primos entre 2 e N.

#include <stdio.h>

int main(){
    
    int N;
    scanf("%d", &N);
    
    int numero = 2;
    
    while (numero <= N){
        int eh_primo = 1;
        int divisor = 2;
        
        while (divisor < numero && eh_primo){
            if (numero % divisor == 0){
                eh_primo = 0;
            }
            divisor++;
            
        }
        
        if (eh_primo){
            printf("%d \n", numero);
        } 
        
        numero++;
    }
    
    
    return 0;
    
}
