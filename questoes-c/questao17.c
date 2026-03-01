// Crie um programa que peça ao usuário para digitar uma nota entre 0 e 10. O programa deve usar do..while para forçar o usuário a digitar apenas valores válidos e, ao final, exibir a nota validada.

#include <stdio.h>

int main(){
    
    int nota;
    
    do{
        scanf("%d", &nota);
        
    } while (nota>10 || nota<0);
    
    printf("Nota valida: %d", nota);
    
    return 0;
}
