/*
Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma equação do segundo grau e retorne o valor do delta, que é dado por 'b^2 - 4ac'. 

OBS: Ao mostrar o resultador, considere apenas 2 casas decimais.
*/

#include <stdio.h>

float equacao(float a, float b, float c) {
    float delta = b * b - 4*a*c;
    return delta;
}

int main () {
    float n1, n2, n3;
    scanf("%f %f %f", &n1, &n2, &n3);
    
    float delta = equacao(n1, n2, n3);
    printf("Delta = %.2f\n", delta);
    return 0;
}
