// Faça uma função recursiva que calcule e retorne o fatorial de um número inteiro N. Imprima uma mensagem de 'erro' na tela caso sua entrada seja um número negativo (lembre de adicionar o '\n').

#include <stdio.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    
    int a, resultado;
    scanf("%d", &a);
    
    if (a < 0) {
        printf("Erro, tentativa de fatorial com números negativos\n");
    } else {
        resultado = fatorial(a);
        printf("%d! = %d", a, resultado);
    }
    return 0;
}
