// Reescreva o exercício anterior, mas agora a função deve receber um ponteiro para a struct e alterar diretamente o salário do funcionário, sem necessidade de retorno.

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float salario;
} Funcionario;

void aumentarSalario(Funcionario *a, float percentual) {
    a->salario = a->salario + (a->salario * percentual / 100.0);  
}

int main () {
    Funcionario a1;
    float percentual;
    float salario_antigo;
    fgets(a1.nome, sizeof(a1.nome), stdin);
    scanf("%f", &a1.salario);
    scanf("%f", &percentual);
    
    salario_antigo = a1.salario;
    aumentarSalario(&a1, percentual);
    
    printf("Funcionário: %s", a1.nome);
    printf("Salário Antigo: %.2f\n", salario_antigo);
    printf("Salário Novo: %.2f\n", a1.salario);
    
    
    
    return 0;
}
