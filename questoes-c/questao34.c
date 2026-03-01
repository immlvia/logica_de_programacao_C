/*
Faça uma função recursiva que receba um número N e retorne o N-ésimo termo da sequência de tribonacci. Os números tribonacci são definidos pela seguinte recursão:

f(n) = 0 se n = 0

f(n) = 0 se n = 1 

f(n) = 1 se n = 2 

f(n) = f(n-1)+f(n-2)+f(n-3) se n > 3

Adicione uma verificação ao ler a entrada para caso ela seja negativa (lembre-se que a mensagem deve ser igual a do exemplo da tabela e conter o \n no final).
*/

#include <stdio.h>

int fib(int n) {
    
    if (n == 0 || n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        return fib(n-1) + fib(n-2) + fib(n-3);
    }
}

int main() {
    
    int a;
    long long resultado;
    scanf("%d", &a);
    
    if (a < 0) {
        printf("Erro: O indice deve ser um numero nao negativo.\n");
    } else {
        resultado = fib(a);
        printf("O %d-esimo termo da sequencia de Tribonacci e: %lld\n", a, resultado);
    }
    return 0;
}
