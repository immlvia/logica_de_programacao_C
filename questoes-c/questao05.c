// Escreva um programa em C que leia o salário atual de um funcionário e um percentual de aumento. Calcule e exiba o novo salário.

#include <stdio.h>

int main(){
    
    int salario, aumento;
    float novo_salario;
    
    scanf("%d %d", &salario, &aumento);
    
    novo_salario = salario*(1 + (aumento/100.0));
    
    printf("Novo salário = %.2f", novo_salario);
    
    return 0;
}
