/*
Crie uma struct chamada Data com:
int dia
int mes
int ano
Depois, crie uma struct chamada Pessoa contendo:
char nome[50]
int idade
struct Data nascimento
Leia os dados de uma pessoa, incluindo sua data de nascimento, e exiba no formato:
*/

#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[50];
    int idade;
    Data nascimento;
} Pessoa;

int main() {
    Pessoa pessoa;
    scanf("%s %d", pessoa.nome, &pessoa.idade);
    scanf("%d %d %d", &pessoa.nascimento.dia, &pessoa.nascimento.mes,
    &pessoa.nascimento.ano);
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Nascimento: %02d/%02d/%d\n", pessoa.nascimento.dia, pessoa.nascimento.mes,
    pessoa.nascimento.ano);
    return 0;
}
