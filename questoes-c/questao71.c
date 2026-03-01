/*
Represente um retângulo por meio de uma estrutura contendo largura e altura.
Implemente uma função responsável por calcular a área dessa figura geométrica a partir da estrutura criada. No main, realize a leitura dos valores, utilize a função e mostre o resultado.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    float largura;
    float altura;
} Retangulo;

float calcularRetangulo (Retangulo a) {
    return a.largura * a.altura;
}

int main() {
    Retangulo a;
    scanf("%f %f", &a.largura, &a.altura);
    
    float area = calcularRetangulo(a);
    printf("Largura: %.2f\n", a.largura);
    printf("Altura: %.2f\n", a.altura);
    printf("Área: %.2f\n", area);
    
    
    return 0;
}
