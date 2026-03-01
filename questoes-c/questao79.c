/*
Faça um programa em C para armazenar os dados de um aluno universitário e suas disciplinas.

Estruturas
Crie uma struct chamada Disciplina com:
char nome[40]
float nota

Depois, crie uma struct chamada Universitario contendo:
char nome[50]
int periodo
struct Disciplina disciplinas[3]

Regras de Aprovação
Alunos do 1º ao 3º período são aprovados com média maior ou igual a 6.0.
Alunos do 4º período ou superior são aprovados com média maior ou igual a 7.0.
  
Programa
No main:
Leia o nome do aluno.
Leia o período.
Leia os dados das 3 disciplinas (nome e nota).
Calcule a média das notas.

Exiba:

Nome do aluno
Período
Média (com duas casas decimais)
Situação (Aprovado ou Reprovado)

*/

#include <stdio.h>

typedef struct {
    char nome[40];
    float nota;
} Disciplina;

typedef struct {
    char nome[50];
    int periodo;
    Disciplina disciplinas[3];
} Universitario;

int main() {
    Universitario aluno;
    scanf("%s", aluno.nome);
    scanf("%d", &aluno.periodo);
    
    float soma = 0;
    for (int i = 0; i < 3; i++) {
        scanf("%s %f", aluno.disciplinas[i].nome, &aluno.disciplinas[i].nota);
        soma+= aluno.disciplinas[i].nota;
    }
    
    float media = soma/3.0;
    
    printf("Aluno: %s\n", aluno.nome);
    printf("Periodo: %d\n", aluno.periodo);
    printf("Media: %.2f\n", media);
    if (aluno.periodo<=3) {
        if(media >= 6) {
            printf("Situacao: Aprovado\n");
        }
        else {
            printf("Situacao: Reprovado\n");
        }
    }
    
    if(aluno.periodo>4) {
        if(media>=7) {
            printf("Situacao: Aprovado\n");
        }
        else {
            printf("Situacao: Reprovado\n");
        }
    } 
    
    return 0;
}
