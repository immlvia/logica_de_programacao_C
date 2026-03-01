/*
Crie uma struct chamada Carro com os seguintes campos:
char modelo[40]
int ano
float preco
Implemente uma função chamada trocarCarros que receba dois ponteiros para struct Carro e troque todos os dados entre eles.

No main:
Leia os dados de dois carros.
Exiba os dados antes da troca.
Chame a função.
Exiba os dados após a troca.
*/
#include <stdio.h>

typedef struct {
    char modelo[40];
    int ano;
    float preco;
} Carro;

void trocarCarros(Carro *p1, Carro *p2) {
    Carro temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    Carro c1, c2;
    scanf("%s %d %f", c1.modelo, &c1.ano, &c1.preco);
    scanf("%s %d %f", c2.modelo, &c2.ano, &c2.preco);
    
    printf("Antes da troca:\n");
    printf("%s %d %.2f\n", c1.modelo, c1.ano, c1.preco);
    printf("%s %d %.2f\n", c2.modelo, c2.ano, c2.preco);
    trocarCarros(&c1, &c2);
    printf("Depois da troca:\n");
    printf("%s %d %.2f\n", c1.modelo, c1.ano, c1.preco);
    printf("%s %d %.2f\n", c2.modelo, c2.ano, c2.preco);
    
    return 0;
}
