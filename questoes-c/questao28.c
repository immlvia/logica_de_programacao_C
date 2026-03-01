/*
Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o número de divisores desse valor. Caso o número seja 0, ou seja negativo, retorne 0.

Exemplo: O número 4 é divisível por 1, por 2, e por ele mesmo. Logo, tem 4 divisores.
*/

#include <stdio.h>

int divisores(int a) {
    if (a < 0 || a == 0) {
        return 0;
    }
    
    int resultado = 0;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            resultado++;
        }
    }
    return resultado;
    
}

int main() {
    
    int n;
    scanf("%d", &n);
    
    int resultado = divisores(n);
    printf("%d", resultado);
    return 0;
}
