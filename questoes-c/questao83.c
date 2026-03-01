/*
Implemente um programa em C para cadastrar funcionários de uma empresa utilizando enum e union.

Cada funcionário possui um cargo específico e um tipo de benefício associado a esse cargo. Como apenas um benefício será válido por funcionário, utilize uma union para armazenar esses dados.

Estruturas obrigatórias
Crie o seguinte enum:

enum Cargo {
    GERENTE = 1,
    ENGENHEIRO,
    ESTAGIARIO
};
Crie uma union chamada Beneficio com os campos:
float bonus → para gerente
int horasExtras → para engenheiro
float bolsaAuxilio → para estagiário

Depois, crie uma struct Funcionario contendo:
char nome[50]
enum Cargo cargo
union Beneficio beneficio

O programa deve:
Cadastrar exatamente 2 funcionários.
Para cada funcionário, ler:
Nome
Cargo (1–Gerente, 2–Engenheiro, 3–Estagiário)
O benefício correspondente ao cargo
Após o cadastro, exibir os dados de todos os funcionários.
*/

#include <stdio.h>

typedef enum {
    GERENTE = 1,
    ENGENHEIRO = 2,
    ESTAGIARIO 
} Cargo;

typedef union {
    float bonus;
    float horasExtras; 
    float bolsaAuxilio; 
} Beneficio;

typedef struct {
    char nome[50];
    Cargo cargo;
    Beneficio beneficio;
} Funcionario;

int main() {
    Funcionario funcionario[2];
    
    for(int i =0;i<2;i++) {
        scanf(" %[^\n]", &funcionario[i].nome);
        scanf("%d", &funcionario[i].cargo);
        
        if(funcionario[i].cargo == GERENTE) {
            scanf("%f", &funcionario[i].beneficio.bonus);
        }
        else if(funcionario[i].cargo == ENGENHEIRO) {
            scanf("%f", &funcionario[i].beneficio.horasExtras);
        }
        else {
            scanf("%f", &funcionario[i].beneficio.bolsaAuxilio);
        }
    }
        
        for(int i =0;i<2;i++) {
        printf("Funcionario %d\nNome: %s\n", (i+1), funcionario[i].nome);
        scanf(" %[^\n]", &funcionario[i].nome);
        scanf("%d", &funcionario[i].cargo);
        
        if(funcionario[i].cargo == GERENTE) {
            printf("Cargo: Gerente\nBeneficio: %.2f\n\n", funcionario[i].beneficio.bonus);
        }
        else if(funcionario[i].cargo == ENGENHEIRO) {
            printf("Cargo: Engenheiro\nBeneficio: %.0f\n\n", funcionario[i].beneficio.horasExtras);
        }
        else {
            printf("Cargo: Estagiario\nBeneficio: %.2f\n\n", funcionario[i].beneficio.bolsaAuxilio);
        }
    }
    
    return 0;
}
