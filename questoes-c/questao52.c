// Crie um programa que leia 3 números inteiros digitados pelo usuário e os armazene em um array. Use um ponteiro para percorrer o array.
// Após isso, imprima apenas os índices dos números ímpares digitados.

#include <stdio.h>

int main () {
    
    int numeros[3];
    
    for (int i = 0; i < 3; i++) {
        scanf("%d", &numeros[i]);
    }
    
    printf("Indices dos numeros impares:\n");
    
    int *pont = numeros; 
    
    for (int i = 0; i < 3; i++) {
        
        if (*pont % 2 != 0) {
            printf("%d\n", i);
        }
        pont++;
    }
    
    
    return 0;
}
