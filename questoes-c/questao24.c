// Crie uma função chamada “ehPar” que receba um número inteiro e retorne 0 se ele for par e 1 se for ímpar.

#include <stdio.h>

int ehPar(int a) {
    if (a % 2 == 0) {
        printf("0");
    } else {
        printf("1");
    }
}

int main() {
    
    int n;
    scanf("%d", &n);
    ehPar(n);
    
    return 0;
}
