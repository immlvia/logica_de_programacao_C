/*
Quase todo estudante de Ciência da Computação recebe em algum momento
no início de seu curso de graduação algum problema envolvendo a sequência
de Fibonacci. Tal sequência tem como os dois primeiros valores 0 (zero)
e 1 (um) e cada próximo valor será sempre a soma dos dois valores
imediatamente anteriores.

Por definição, podemos apresentar a seguinte fórmula para encontrar
qualquer número da sequência de Fibonacci:

fib(0) = 0
fib(1) = 1
fib(n) = fib(n-1) + fib(n-2);

Uma das formas de encontrar o número de Fibonacci é através de chamadas
recursivas. Isto é ilustrado a seguir, apresentando a árvore de derivação
ao calcularmos o valor fib(4), ou seja o 5º valor desta sequência:
*/

#include <stdio.h>

long long numero_de_chamadas = -1;

int fib(int n) {
    
    numero_de_chamadas++;
    
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int main() {
    
    int a, resultado;
    scanf("%d", &a);
    
    resultado = fib(a);
    printf("O %dº número da sequência de Fibonacci é: %d\n\n", a, resultado);
    printf("Total de chamadas recursivas: %lld", numero_de_chamadas);
    return 0;
}
