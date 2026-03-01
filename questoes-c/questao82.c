/*
Implemente um programa em C que funcione como uma calculadora simples, utilizando enum e a estrutura de decisão switch.

Crie um enum chamado Operacao com os seguintes valores:
SOMA
SUBTRACAO
MULTIPLICACAO
DIVISAO

Associe cada operação aos números:
1 → SOMA  
2 → SUBTRACAO  
3 → MULTIPLICACAO  
4 → DIVISAO  

O programa deve:
Ler dois números reais (float).
Ler um número inteiro correspondente à operação desejada.
Utilizar switch com o enum para executar o cálculo.
Exibir o resultado com duas casas decimais.
*/

#include <stdio.h>

typedef enum {
    SOMA = 1,
    SUBTRACAO = 2,
    MULTIPLICACAO = 3,
    DIVISAO = 4
} Operacao;

int main() {
    float n1, n2;
    int op;
    
    scanf("%f %f", &n1, &n2);
    scanf("%d", &op);
    
    switch((Operacao)op) {
        case SOMA:
            printf("Resultado: %.2f", (n1+n2));
            break;
            
        case SUBTRACAO:
            printf("Resultado: %.2f", (n1-n2));
            break;
            
        case MULTIPLICACAO:
            printf("Resultado: %.2f", (n1*n2));
            break;
            
        case DIVISAO:
            printf("Resultado: %.2f", (n1/n2));
    }
    
    return 0;
}
