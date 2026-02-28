/*
Questão:
Escreva um programa em C que:

- Leia as coordenadas de dois pontos no plano cartesiano: (x1, y1) e (x2, y2)
- Calcule a distância entre os pontos usando a fórmula:

    d = sqrt((x2 - x1)^2 + (y2 - y1)^2)

Dica: utilizar #include <math.h> e a função sqrt().
*/

#include <stdio.h>
#include <math.h>

int main(){
    
    float x1, y1, x2, y2, distancia_x, distancia_y, soma, resultado;
    
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    
    distancia_x = x1 - x2;
    distancia_y = y1 - y2;
    soma = pow(distancia_x, 2) + pow(distancia_y, 2);
    resultado = sqrt(soma);
    
    printf("%.2f", resultado);
    
    return 0;
}
