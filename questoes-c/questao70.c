/*
Um sistema precisa calcular automaticamente o desempenho de um estudante a partir de duas notas.
Modele uma estrutura adequada para representar o aluno e desenvolva um programa que:
receba nome e notas
calcule a média (com arredondamento para duas casas decimais)
informe o resultado final (Aprovado para média ≥ 7; caso contrário, Reprovado)
Apresente todas as informações ao final da execução.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[51];
    float nota1;
    float nota2;
    float media;
} Aluno;

int main() {
    Aluno a1;
    fgets(a1.nome, sizeof(a1.nome), stdin);
    scanf("%f %f", &a1.nota1, &a1.nota2);
    
    a1.media = (a1.nota1 + a1.nota2) / 2.0;
    printf("Aluno(a): %s", a1.nome);
    printf("Media: %.2f\n", a1.media);
    if (a1.media >= 7) {
        printf("Situação: Aprovado\n");
    }
    else {
        printf("Situação: Reprovado\n");
    }
    return 0;
}
