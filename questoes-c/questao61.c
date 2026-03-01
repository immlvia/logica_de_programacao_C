/*
Implemente um programa que contenha duas funções:

int soma(int a, int b) – retorna a soma dos números

int multiplica(int a, int b) – retorna o produto dos números

No main, leia dois números inteiros do usuário. Peça ao usuário que escolha se quer somar ou multiplicar (1 - soma, 2 - multiplica). Use um ponteiro para função para chamar dinamicamente a função escolhida e imprimir o resultado.

Obs: caso o usuário insira um número de operação inválido, exiba a mensagem Opcao invalida!
*/

#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int multiplica(int a, int b) {
    return a * b;
}


int main() {
    
    int num1, num2, escolha;
    int (*operacao)(int, int);
    scanf("%d %d", &num1, &num2);
    scanf("%d", &escolha);
    
    if (escolha == 1) {
        operacao = soma;
    } else if (escolha == 2) {
        operacao = multiplica;
    } else {
        printf("Opcao invalida!\n");
        return 1;
    }
    
    printf("Resultado: %d", operacao(num1, num2));
    
    return 0;
}
