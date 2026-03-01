/*
Faça um programa em C para controlar o atendimento de pacientes em um hospital.

Estruturas
Crie as seguintes estruturas:

struct DadosClinicos
float temperatura
int pressao

struct Paciente
char nome[40]
int prioridade

Valores possíveis para prioridade:

1 → emergência
2 → urgente
3 → não urgente

struct DadosClinicos dados

Programa
No main:
Declare um array para armazenar 5 pacientes.
Leia os dados de todos os pacientes.
Implemente a função:
struct Paciente* pacienteMaisGrave(struct Paciente *v, int n);

Essa função deve:
Receber um ponteiro para o array de pacientes.
Retornar um ponteiro para o paciente com maior prioridade, ou seja,
aquele com menor valor numérico de prioridade.
Em caso de empate na prioridade, retornar o paciente com maior
temperatura corporal.

Após a leitura:

Exiba os dados do paciente retornado pela função.
Entrada
Para cada paciente, leia uma linha no formato:
nome prioridade temperatura pressao

Considere que:

Os nomes não possuem espaços.
Os valores de prioridade serão sempre 1, 2 ou 3.
Todos os dados informados são válidos.
*/

#include <stdio.h>

typedef struct {
    float temperatura;
    int pressao;
} DadosClinicos;

typedef struct {
    char nome[40];
    int prioridade;
    DadosClinicos dados;
} Paciente;

Paciente* pacienteMaisGrave(Paciente *v, int n) {
    Paciente *maisGrave = &v[0];
    for (int i = 1; i < n; i++) {
        if (v[i].prioridade < maisGrave->prioridade) {
            maisGrave = &v[i];
        }
        else if (v[i].prioridade == maisGrave->prioridade) {
            if (v[i].dados.temperatura > maisGrave->dados.temperatura) {
                maisGrave = &v[i];
            }
        }
    }
    return maisGrave;
}

int main() {
    Paciente pacientes[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%s %d", pacientes[i].nome, &pacientes[i].prioridade);
        scanf("%f %d", &pacientes[i].dados.temperatura, &pacientes[i].dados.pressao);
    }
    
    Paciente *grave = pacienteMaisGrave(pacientes, 5);

    printf("Paciente mais grave:\n");
    printf("%s %d %.1f %d\n", grave->nome, grave->prioridade, grave->dados.temperatura, 
    grave->dados.pressao);

    return 0;
}
    
    



