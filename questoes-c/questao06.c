/*Escreva um programa em C que:

Leia o salário bruto de um funcionário (float).

Calcule o desconto do INSS (11% do salário).

Calcule o desconto do IR (15% sobre o salário menos INSS).

Imprima o salário líquido (salário bruto menos INSS e IR) com duas casas decimais.
*/

#include <stdio.h>

int main(){
    
    float salario_bruto, inss, ir, salario_liquido;
    
    scanf("%f", &salario_bruto);
    
    inss = salario_bruto * 0.11;
    ir = (salario_bruto-inss)*0.15;
    salario_liquido = salario_bruto - inss - ir;
    
    printf("%.2f - %.2f (INSS) - %.2f (IR) = %.2f", salario_bruto, inss, ir, salario_liquido);

    return 0;
}
