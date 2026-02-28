/*Leia uma temperatura em Celsius e converta para Fahrenheit usando a fórmula:

F = 9×C/5+32
Exiba o resultado.
*/

#include <stdio.h>

int main(){
    
    int celsius; 
    float resultado_f;
    
    scanf("%d", &celsius);
    resultado_f = (1.8 * celsius) + 32;
    printf("%.2f", resultado_f);
    
    return 0;
}
