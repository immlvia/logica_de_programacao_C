/*
Modele um funcionário com nome e salário.
Crie uma função chamada aumentarSalario que receba o funcionário e um percentual de aumento, retornando o salário atualizado.
Exiba o salário antes e depois da atualização.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[51];
    float salario;
} Funcionario;

float aumentarSalario(Funcionario a, float percentual) {
    return a.salario + (a.salario * percentual / 100.0);  
}

int main () {
    Funcionario a;
    float percentual;
    fgets(a.nome, sizeof(a.nome), stdin);
    scanf("%f", &a.salario);
    scanf("%f", &percentual);
    
    float novo_salario = aumentarSalario(a, percentual);
    printf("Funcionário: %s", a.nome);
    printf("Salário Antigo: %.2f\n", a.salario);
    printf("Salário Novo: %.2f\n", novo_salario);
    
    
    
    return 0;
}
