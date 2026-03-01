/*
Crie um programa que leia dois números reais e uma opção de operação (1 = soma, 2 = subtração, 3 = multiplicação, 4 = divisão).

Use switch para decidir a operação.

Use if..else para tratar divisão por zero.
*/

#include <stdio.h>

int main(){
    
    float num1, num2, soma, subtracao, multiplicacao, divisao;
    int operacao;
    
        scanf("%f %f", &num1, &num2);
    
        printf("\n1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n");
        scanf("%d", &operacao);
       
        switch(operacao){
            case 1:
                soma = num1 + num2;
                printf("Resultado: %.2f", soma);
                break;
                
            case 2:
                subtracao = num1 - num2;
                printf("Resultado: %.2f", subtracao);
                break;
    
            case 3:
                multiplicacao = num1 * num2;
                printf("Resultado: %.2f", multiplicacao);
                break;
                
            case 4:
                if (num2 ==0){
                    printf("Erro: divisao por zero!");
                }
                else{
                   divisao = num1/(num2*1.00);
                   printf("Resultado: %.2f", divisao);
                }
                break;
            default:
                printf("Opcao invalida.");
        }

            
    return 0;
    
}
    
