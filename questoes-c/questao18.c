/*
Um programa deve ler o valor de vendas realizadas em um dia (valores positivos). A entrada termina quando o usuário digita 0. Use do..while para:

Calcular o total de vendas;

Contar quantas vendas foram acima de R$ 1000;

Mostrar a média das vendas.
*/

#include <stdio.h>

int main(){
    
    float media, total_vendas = 0, venda;
    int quantidade = 0, cont = 0;
    
    do{
       scanf("%f", &venda);
       
       total_vendas += venda;
       
       if (venda > 0){
           quantidade +=1;
           
           if (venda > 1000){
               cont +=1;
           }
       }
       
       media = total_vendas/quantidade;
       
        
        
    } while(venda!=0);
    
    printf("Total de vendas: R$%.2f\n", total_vendas);
    printf("Quantidade acima de 1000: %d\n", cont);
    printf("Media das vendas: R$%.2f\n", media);
    
    return 0;
}
