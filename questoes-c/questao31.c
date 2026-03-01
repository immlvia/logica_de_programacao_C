/*
Um número é chamado de perfeito quando a soma de seus divisores positivos, exceto ele mesmo, é igual ao próprio número (ex.: 6 → 1+2+3 = 6).

Crie uma função ehPerfeito(int n) que retorne 1 se o número for perfeito ou 0 caso contrário.
*/

#include <stdio.h>

int ehPerfeito(int n) {
    int soma = 0;
    
    for (int i = (n-1); i > 0; i--) {
        if (n % i == 0) {
            soma += i;
        }
    }
    
    if (soma == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    
    int numero, resultado;
    scanf("%d", &numero);
    resultado = ehPerfeito(numero);
    
    if (resultado == 1) {
        printf("%d é perfeito", numero);
    } else {
        printf("%d não é perfeito", numero);
    } 
    
    return 0;
}
