/*
Faça um programa em C que analise compras realizadas por clientes de uma operadora de cartões.
Estrutura
Crie uma struct chamada Compra com os seguintes campos:
char cliente[40]
float valor
int tentativasSenha
int internacional
(1 = compra internacional, 0 = compra nacional)

Regras
O programa deve considerar uma compra suspeita se:
o valor for maior que 5000
OU
o número de tentativas de senha for maior ou igual a 3
OU
a compra for internacional E o valor for maior que 3000

Programa
No main:
Declare um array para armazenar 5 compras.
Leia os dados de cada compra.

Exiba:

os nomes dos clientes com compras suspeitas;
o total de compras suspeitas;
o maior valor entre todas as compras;
a média dos valores apenas das compras não suspeitas.
*/

#include <stdio.h>

typedef struct {
    char cliente[40];
    float valor;
    int tentativasSenha;
    int internacional;
} Compra; 

int main () {
    Compra compras[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%s %f %d %d", compras[i].cliente, &compras[i].valor, 
        &compras[i].tentativasSenha, &compras[i].internacional);
    }
    int total_suspeitas = 0;
    float maior_valor = 0.0;
    int cont_nao_suspeita = 0;
    float soma_n_suspeitas = 0.0;
    
    printf("Compras suspeitas: ");
    
    for (int i = 0; i < 5; i++) {
        int suspeita = 0;
        
        if (compras[i].valor > 5000 || compras[i].tentativasSenha >= 3 || 
        compras[i].internacional == 1 && compras[i].valor > 3000) {
            suspeita = 1;
        } 
        
        if(suspeita) {
            printf("%s\n", compras[i].cliente);
            total_suspeitas++;
        }
        else {
            soma_n_suspeitas += compras[i].valor;
            cont_nao_suspeita++;
        }
    }
    for (int i = 0; i < 5; i++) {
        if(compras[i].valor > maior_valor) {
            maior_valor = compras[i].valor;
        }
    }
    printf("\n");
    printf("Total de suspeitas: %d\n", total_suspeitas);
    printf("Maior compra: %.2f\n", maior_valor);
    
    if (cont_nao_suspeita > 0) {
        printf("Media das compras seguras: %.2f\n", soma_n_suspeitas / cont_nao_suspeita);
    } else {
        printf("Media das compras seguras: 0.00\n");
    }
    return 0;
}


Caso todas as compras sejam suspeitas, exiba: 
