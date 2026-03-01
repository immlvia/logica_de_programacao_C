/*
Faça uma função que receba 5 números positivos e retorne a média aritmética dos mesmos. Retorne -1 caso algum número seja negativo.
OBS: Ao mostrar o resultado, considere apenas uma casa decimal.
*/

#include <stdio.h>

float media(float a, float b, float c, float d, float e) {
    if (a < 0 || b < 0 || c < 0 || d < 0 || e < 0) {
        return -1;
    }
    float resultado = (a + b + c + d + e)/5;
    return resultado;
}

int main() {
    
    float n1, n2, n3, n4, n5;
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);
    float resultado = media(n1, n2, n3, n4, n5);
    printf("%.1f\n", resultado);
    
    return 0;
    
}
