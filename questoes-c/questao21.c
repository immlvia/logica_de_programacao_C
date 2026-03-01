/*
Implemente um programa que simule um caixa eletrônico.

O usuário começa com saldo de R$1000 e deve poder escolher no menu
(switch dentro de um while ou do..while):

Ver saldo

Sacar valor (não pode sacar mais que o saldo, use if..else)

Depositar valor

Sair

O menu deve se repetir até que o usuário escolha a opção de sair.
*/

#include <stdio.h>

int main(){
    
    float saldo = 1000.0, saque, depositar;
    int operacao;
    
    do{
        printf("\n1-Ver saldo\n2-Sacar\n3-Depositar\n4-Sair\n");
        scanf("%d", &operacao);
       
        switch(operacao){
            case 1:
                printf("Saldo atual: R$%.2f\n", saldo);
                break;
                
            case 2:
                scanf("%f", &saque);
                if (saque>saldo){
                    printf("Saque invalido.\n");
                    break;
                } 
                else{
                   saldo -= saque;
                   break;
                }
            case 3:
                scanf("%f", &depositar);
                saldo += depositar;
                break;
                
            case 4:
                printf("Saindo...");
                break;
            
            default:
                printf("Opcao invalida.");
        }
    }while(operacao!=4);
            
  
    return 0;
    
}
