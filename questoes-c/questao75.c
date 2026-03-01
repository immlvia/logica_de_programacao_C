/*
Crie uma struct chamada Produto com:
char nome[40]
float preco
Implemente uma função que receba dois ponteiros para Produto e retorne um ponteiro para o produto com maior preço.
No main, leia os dados de dois produtos e exiba os dados do produto retornado.
*/

#include <stdio.h>

typedef struct {
    char nome[41];
    float preco;
} Produto;

Produto* maior_preco(Produto *p1, Produto *p2) {
    if (p1->preco >= p2->preco) {
        return p1;
    }
    else {
        return p2;
    }
}

int main() {
    
    Produto pro1, pro2;
    Produto *mais_caro;
    scanf("%s %f", &pro1.nome, &pro1.preco);
    scanf("%s %f", &pro2.nome, &pro2.preco);
    
    mais_caro = maior_preco(&pro1, &pro2);
    
    printf("Produto mais caro: %s\n", mais_caro->nome);
    printf("Preco: %.2f", mais_caro->preco);
    
    return 0;
}
