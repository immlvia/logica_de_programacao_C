/*
Considere um sistema de multas:
Enum TipoMulta:
0 – LEVE (R$100)
1 – MEDIA (R$300)
2 – GRAVE (R$500)
3 – GRAVISSIMA (R$1000)

Struct Motorista:
- nome (string 40)
- pontos (int)
- multa (TipoMulta)

Regras:
LEVE → +3 pontos
MEDIA → +4 pontos
GRAVE → +5 pontos
GRAVISSIMA → +7 pontos

Tarefa:
- Leia os dados do motorista (nome, pontos atuais e tipo da multa).
- Crie uma função que receba ponteiro para Motorista e:
- Atualize a quantidade de pontos.
- Determine o valor da multa.
- Imprima:

Motorista: X
Pontos: Y
Valor da Multa: Z
*/

#include <stdio.h>

typedef enum {
    LEVE = 0,
    MEDIA,
    GRAVE,
    GRAVISSIMA
} TipoMulta;

typedef struct {
    char nome[40];
    int pontos;
    TipoMulta multa;
} Motorista;

void atualizaPontos (Motorista *m){
    if(m->multa==LEVE){
        m->pontos+=3;
    }
    else if(m->multa==MEDIA){
        m->pontos+=4;
    }
    else if(m->multa==GRAVE){
        m->pontos+=5;
    }
    else{
        m->pontos+=7;
    }
}

int main () {
    
    Motorista motorista1;
    Motorista *pMotorista;
    pMotorista = &motorista1;
    
    scanf(" %[^\n]", motorista1.nome);
    scanf("%d", &motorista1.pontos);
    
    int op;
    scanf("%d", &op);
    
    motorista1.multa = (TipoMulta)op;
    
    atualizaPontos(pMotorista);
    
    printf("Motorista: %s\n", motorista1.nome);
    printf("Pontos: %d\n", motorista1.pontos);
    
    if(motorista1.multa == LEVE){
        printf("Valor da Multa: 100");
    }
    else if(motorista1.multa == MEDIA){
        printf("Valor da Multa: 300");
    }
    else if(motorista1.multa == GRAVE){
        printf("Valor da Multa: 500");
    }
    else{
        printf("Valor da Multa: 1000");
    }
    
    return 0;
}


