// Escreva um programa que calcule o fatorial de um número inteiro N (N ≥ 0) usando for. O programa deve também imprimir o processo de multiplicação, por exemplo:

#include <stdio.h>

int main(){
    int N, i;
    int fatorial = 1;
   
    
    scanf("%d", &N);
    printf("%d! = ", N);
    for (i = N; i >=1; i--) {
        
        fatorial *= i;
        printf("%d", i);
        
        if (i > 1){
            printf(" x ");
        }

    }
    printf(" = %d\n", fatorial);
    return 0;
}
