/*
Uma universidade registra alunos de dois tipos:
Enum TipoAluno:
0 – GRADUACAO
1 – POS_GRADUACAO

Union InfoExtra:
- int semestre (se for GRADUACAO)
- char orientador[50] (se for POS_GRADUACAO)

Struct Aluno:
- nome (string 50)
- idade (int)
- tipo (TipoAluno)
- info (InfoExtra)

Tarefa:
- Leia um número inteiro N (quantidade de alunos).
- Para cada aluno:
    - Leia nome, idade e tipo.
    - Se for GRADUACAO (0) → leia semestre.
    - Se for POS_GRADUACAO (1) → leia orientador.
    - Ao final, imprima todos os dados corretamente formatados.


Formato de saída para cada aluno:
Nome: X
Idade: Y
Tipo: DESCRICAO
Semestre: Z

ou
Nome: X
Idade: Y
Tipo: DESCRICAO
Orientador: W

*/

#include <stdio.h>

typedef enum {
    GRADUACAO = 0,
    POS_GRADUACAO
} TipoAluno;

typedef union {
    int semestre;
    char orientador[50];
} InfoExtra;

typedef struct {
    char nome[50];
    int idade;
    TipoAluno tipo;
    InfoExtra info;
} Aluno;

int main () {
    
    int n;
    scanf("%d", &n);
    
    Aluno alunos[n];
    
    for (int i=0;i<n;i++){
        
        scanf(" %[^\n]", alunos[i].nome);
        scanf("%d", &alunos[i].idade);
        
        int op;
        scanf("%d", &op);
        
        alunos[i].tipo = (TipoAluno)op;
        
        if (alunos[i].tipo == GRADUACAO){
            scanf("%d", &alunos[i].info.semestre);
        }
        else{
            scanf(" %[^\n]", alunos[i].info.orientador);
        }
    }
    
    for (int i=0;i<n;i++){
        
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        
        if (alunos[i].tipo == GRADUACAO){
            printf("Tipo: GRADUACAO\n");
            printf("Semestre: %d\n", alunos[i].info.semestre);
        }
        else{
            printf("Tipo: POS_GRADUACAO\n");
            printf("Orientador: %s\n", alunos[i].info.orientador);
        }
    }
    
    return 0;
}

