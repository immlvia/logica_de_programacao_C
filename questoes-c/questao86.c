/*
Uma empresa deseja registrar pagamentos realizados por seus clientes. Cada pagamento pode ser feito em dinheiro, cartão ou pix, e apenas os dados do tipo escolhido devem ser armazenados. Para otimizar o uso de memória, utilize union para guardar essas informações.

Crie um enum TipoPagamento com os valores:
1 → DINHEIRO
2 → CARTAO
3 → PIX
Crie uma union DadosPagamento contendo:
Dinheiro
valorRecebido (float)
valorCompra (float)

Cartão
valorCompra (float)
parcelas (int)

Pix
valorCompra (float)

Crie uma struct Pagamento com:
nome do cliente (char[50])
tipo do pagamento (enum)
dados (union)

Regras do sistema
Dinheiro:
Se o valor recebido for menor que o valor da compra, exiba:
Pagamento insuficiente
e não some esse pagamento ao total arrecadado.

Cartão:
Até 3 parcelas → sem juros
Mais de 3 parcelas → acréscimo de 5% sobre o valor da compra

Pix:
Não possui juros.

O programa deve:
Cadastrar exatamente 3 pagamentos.
Mostrar, após cada pagamento válido:
Cliente: (nome)
Valor final: R$ X.XX
Ao final, exibir:

Total recebido: R$ X.XX
Quantidade em dinheiro: X
Quantidade no cartao: X
Quantidade no pix: X

Utilize duas casas decimais para valores monetários.
*/

#include <stdio.h>

typedef enum {
    DINHEIRO = 1,
    CARTAO = 2,
    PIX
} TipoPagamento;


typedef union {
    struct {
        float valor_recebido;
        float valor_compra;
    } d;
    
    struct {
        float valor_compra;
        int parcelas;
    } c;
    
    struct {
        float valor_compra;
    } p;
} DadosPagamento;

typedef struct {
    char nome[50];
    TipoPagamento tipo;
    DadosPagamento dados;
} Pagamento;

int main() {
    Pagamento pagamento[3];
    float valor_final = 0;
    float total_recebido = 0;
    int qtd_dinheiro = 0, qtd_cartao = 0, qtd_pix = 0;
    
    for (int i=0; i<3; i++) {
        scanf(" %[^\n]", pagamento[i].nome);
        scanf("%d", &pagamento[i].tipo);
        
        if(pagamento[i].tipo == DINHEIRO) {
            scanf("%f", &pagamento[i].dados.d.valor_recebido);
            scanf("%f", &pagamento[i].dados.d.valor_compra);
        }
        else if (pagamento[i].tipo == CARTAO) {
            scanf("%f", &pagamento[i].dados.c.valor_compra);
            scanf("%d", &pagamento[i].dados.c.parcelas);
        }
        else {
            scanf("%f", &pagamento[i].dados.p.valor_compra);
        }
    }
    
    for (int i=0; i<3; i++) {
        int valido = 0;
        
        if(pagamento[i].tipo == DINHEIRO) {
            if (pagamento[i].dados.d.valor_recebido < pagamento[i].dados.d.valor_compra) {
                printf("Pagamento insuficiente\n");
            }
            else {
                valor_final = pagamento[i].dados.d.valor_compra;
                total_recebido += valor_final;
                qtd_dinheiro++;
                valido = 1;
            }
        }
        else if (pagamento[i].tipo == CARTAO) {
            valor_final = pagamento[i].dados.c.valor_compra;
            if(pagamento[i].dados.c.parcelas > 3) {
                valor_final = pagamento[i].dados.c.valor_compra * 1.05;
            }
            qtd_cartao++;
            total_recebido+=valor_final;
            valido = 1;
        }
        else if (pagamento[i].tipo == PIX) {
            valor_final = pagamento[i].dados.p.valor_compra;
            qtd_pix++;
            total_recebido+=valor_final;
            valido = 1;
        }
        
        if(valido) {
            printf("Cliente: %s\n", pagamento[i].nome);
            printf("Valor final: R$ %.2f\n\n", valor_final);
        }
    }
    
    printf("Total recebido: R$ %.2f\n", total_recebido);
    printf("Quantidade em dinheiro: %d\n", qtd_dinheiro);
    printf("Quantidade no cartao: %d\n", qtd_cartao);
    printf("Quantidade no pix: %d\n", qtd_pix);

    return 0;
    
}
