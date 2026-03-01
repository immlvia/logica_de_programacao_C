/*
Uma transportadora cobra seus serviços de acordo com o tipo de entrega realizada. Para otimizar o uso de memória, cada entrega deve armazenar apenas o dado necessário para o cálculo do preço. Utilize enum para representar o tipo de entrega e union para armazenar as informações específicas.

Crie o seguinte enum:
enum TipoEntrega {
    PACOTE = 1,
    DOCUMENTO,
    COMIDA
};
Crie uma union para armazenar:
float peso → para PACOTE
int paginas → para DOCUMENTO
float distancia → para COMIDA

Crie uma struct Entrega contendo:
char nomeCliente[50]
enum TipoEntrega tipo
union com os dados da entrega

Regras de cálculo
O preço deve ser calculado da seguinte forma:
Pacote: R$10.00 + R$2.00 por kg
Documento: R$5.00 + R$0.10 por página
Comida: R$8.00 + R$1.50 por km

O programa deve:
Cadastrar exatamente 4 entregas.
Para cada entrega, ler:
Nome do cliente
Tipo da entrega
1 → Pacote
2 → Documento
3 → Comida

O dado necessário para o cálculo do preço
Calcular o preço de cada entrega.
Exibir o preço individual de cada entrega.
Mostrar o valor total arrecadado ao final.
Todos os valores monetários devem ser exibidos com duas casas decimais.
*/

#include <stdio.h>

typedef enum {
    PACOTE = 1,
    DOCUMENTO = 2,
    COMIDA 
} TipoEntrega;

typedef union {
    float peso; 
    float paginas; 
    float distancia; 
} Dados;

typedef struct {
    char nomeCliente[50];
    TipoEntrega tipo;
    Dados dados;
} Entrega;

int main() {
    Entrega entrega[4];
    float preco, total = 0;
    
    for(int i =0;i<4;i++) {
        scanf(" %[^\n]", &entrega[i].nomeCliente);
        scanf("%d", &entrega[i].tipo);
        
        if(entrega[i].tipo == PACOTE) {
            scanf("%f", &entrega[i].dados.peso);
        }
        else if(entrega[i].tipo == DOCUMENTO) {
            scanf("%f", &entrega[i].dados.paginas);
        }
        else {
            scanf("%f", &entrega[i].dados.distancia);
        }
    }
        
        for(int i =0;i<4;i++) {
            if(entrega[i].tipo == PACOTE) {
            preco = (10.00 + (2.0*entrega[i].dados.peso));
            total += preco;
            printf("Entrega %d: R$ %.2f\n", (i+1), preco);
        }
            else if(entrega[i].tipo == DOCUMENTO) {
            preco = (5.00 + (0.10*entrega[i].dados.paginas));
            total += preco;
            printf("Entrega %d: R$ %.2f\n", (i+1), preco);
        }
            else {
            preco = (8.00 + (1.50*entrega[i].dados.distancia));
            total += preco;
            printf("Entrega %d: R$ %.2f\n", (i+1), preco);
        }
    }
    printf("Total arrecadado: R$ %.2f\n", total);
    return 0;
}
