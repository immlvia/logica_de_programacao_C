/*
Escreva um programa em C para ler as notas da primeira e a segunda avaliação de um aluno. Calcule e imprima a média semestral. 
O programa só deverá aceitar notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). 
Cada nota deve ser validada separadamente. No final deve ser impressa a mensagem “novo calculo (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2) indicando se ele deseja ou 
não executar o algoritmo novamente, (aceitar apenas os código 1 ou 2). Se for informado o código 1 deve ser repetida a execução de todo o programa para permitir um novo cálculo, 
caso contrário o programa deve ser encerrado.
*/

#include <stdio.h>

int main() {
    
    float n1, n2, media;
    int op;
    
    do {
        scanf("%f", &n1);
        
        while (n1<0 || n1>10) {
            printf("nota invalida\n");
            scanf("%f", &n1);
        }
        
        scanf("%f", &n2);
        while (n2<0 || n2>10) {
            printf("nota invalida\n");
            scanf("%f", &n2);
        }
        
        media = (n1+n2)/2.0;
        printf("media = %.2f\n", media);
        
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &op);
        
        while (op!=1 && op!=2) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &op);

        }
        
    } while (op == 1);
    
    return 0;
}
