// Escreva um programa em C que leia um número inteiro x e um número inteiro y e calcule x^y

#include <stdio.h>
#include <math.h>

int main(){
    
    int x, y, resultado;
    
    scanf("%d %d", &x, &y);
    resultado = pow(x,y);
    printf("%d", resultado);
    
    return 0;
}
