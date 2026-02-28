/*Escreva um programa em C que:

Leia um número inteiro representando segundos.

Converta para horas, minutos e segundos.

Imprima no formato "HH:MM:SS" */

#include <stdio.h>

int main(){
    
    int segundos, horas, minutos, novo_segundo;
    
    scanf("%d", &segundos);
    
    horas = segundos/3600;
    segundos -= horas*3600;
    minutos = segundos/60;
    segundos -= minutos*60;
    novo_segundo = segundos;
    
    printf("%02d:%02d:%02d", horas, minutos, novo_segundo);
    

    return 0;
}
