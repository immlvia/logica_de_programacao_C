/*
Um jogo possui personagens com estados.

Enum Estado:
0 – NORMAL
1 – ENVENENADO
2 – QUEIMANDO
3 – CONGELADO

Struct Personagem:
- nome (string 30)
- vida (int)
- estado (Estado)
Regras:
Crie uma função que receba ponteiro para personagem e:
ENVENENADO → perde 10 de vida
QUEIMANDO → perde 20 de vida
CONGELADO → não perde vida
NORMAL → não altera

IMPORTANTE:
Após aplicar o dano, a vida do personagem NÃO pode ficar negativa.
Caso o valor fique menor que 0, deve ser ajustado para 0.

Entrada:
Nome, vida e estado.
Saída:
Nome: X
Vida Final: Y
Estado: DESCRICAO

*/

#include <stdio.h>

typedef enum {
    NORMAL = 0,
    ENVENENADO,
    QUEIMANDO,
    CONGELADO
} Estado;

typedef struct {
    char nome[30];
    int vida;
    Estado estado;
} Personagem;

void dano(Personagem *p) {
    if (p->estado == ENVENENADO) {
        p->vida -= 10;
        if (p->vida < 0) {
            p->vida = 0;
        }
    }
    
    else if (p->estado == QUEIMANDO) {
        p->vida -= 20;
        if (p->vida < 0) {
            p->vida = 0;
        }
    }
    
}

int main () {
    
    Personagem personagem1;
    Personagem *pPersonagem;
    pPersonagem = &personagem1;
    
    scanf(" %[^\n]", personagem1.nome);
    scanf("%d", &personagem1.vida);
    
    int op;
    scanf("%d", &op);
    
    personagem1.estado = (Estado)op;
    
    dano(pPersonagem);
    
    printf("Nome: %s\n", personagem1.nome);
    printf("Vida Final: %d\n", personagem1.vida);
    
    if (personagem1.estado == NORMAL) {
        printf("Estado: NORMAL");
    }
    else if (personagem1.estado == ENVENENADO) {
        printf("Estado: ENVENENADO");
    }
    else if (personagem1.estado == QUEIMANDO) {
        printf("Estado: QUEIMANDO");
    }
    else {
        printf("Estado: CONGELADO");
    }
    
    return 0;
}
