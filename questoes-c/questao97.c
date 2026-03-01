/*
Crie um sistema de votação utilizando:
enum Candidato {
    ALICE = 1,
    BRUNO = 2,
    CARLA = 3
};

O programa deve:
- Ler votos (números inteiros) até que seja digitado 0.
- Cada voto deve corresponder ao número de um candidato.
- Caso seja digitado um número inválido, o voto deve ser ignorado.
- A contagem dos votos deve ser feita utilizando ponteiros.
- Ao final, o programa deve exibir:
Total de votos válidos
Percentual de votos de cada candidato
Vencedor

Caso haja empate entre dois ou mais candidatos, imprimir:

Total de votos válidos
Percentual de votos de cada candidato
Empate


Observações:
- O percentual deve ser exibido com duas casas decimais.
- Se não houver votos válidos, todos os percentuais devem ser 0.00.
*/

#include <stdio.h>

typedef enum {
    ALICE = 1,
    BRUNO,
    CARLA
} Candidato;

int main() {
    int votos;
    scanf("%d", &votos);
    
    int total_votos = 0;
    int votos_alice = 0;
    int votos_bruno = 0;
    int votos_carla = 0;
    
    int *p_alice = &votos_alice;
    int *p_bruno = &votos_bruno;
    int *p_carla = &votos_carla;
    int *p_total = &total_votos;

    while(votos != 0) {
        
        if (votos == ALICE) {
            (*p_alice)++;
            (*p_total)++;
        }
        else if (votos == BRUNO) {
            (*p_bruno)++;
            (*p_total)++;
        }
        else if (votos == CARLA) {
            (*p_carla)++;
            (*p_total)++;
        }
        scanf("%d", &votos);
    }
    
    float perc_alice = 0.0, perc_bruno = 0.0, perc_carla = 0.0;

    if (total_votos > 0) {
        perc_alice = (*p_alice * 100.0) / total_votos;
        perc_bruno = (*p_bruno * 100.0) / total_votos;
        perc_carla = (*p_carla * 100.0) / total_votos;
    }

    printf("Total de votos: %d\n", total_votos);
    printf("ALICE: %.2f%%\n", perc_alice);
    printf("BRUNO: %.2f%%\n", perc_bruno);
    printf("CARLA: %.2f%%\n", perc_carla);

    if (total_votos == 0 ||
        (*p_alice == *p_bruno && *p_alice == *p_carla) ||
        (*p_alice == *p_bruno && *p_alice > *p_carla) ||
        (*p_alice == *p_carla && *p_alice > *p_bruno) ||
        (*p_bruno == *p_carla && *p_bruno > *p_alice)) {

        printf("Empate\n");
    }
    else {
        if (*p_alice > *p_bruno && *p_alice > *p_carla) {
            printf("Vencedor: ALICE\n");
        }
        else if (*p_bruno > *p_alice && *p_bruno > *p_carla) {
            printf("Vencedor: BRUNO\n");
        }
        else {
            printf("Vencedor: CARLA\n");
        }
    }

    return 0;
}
