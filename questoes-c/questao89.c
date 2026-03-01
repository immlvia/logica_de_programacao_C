/*
Implemente um programa que permita cadastrar vários alunos em um arquivo texto chamado alunos.txt, armazenando matrícula, nome e nota.
O programa também deve permitir listar todos os alunos cadastrados lendo os dados do arquivo. Os registros devem ser gravados de forma sequencial no final do arquivo.

Dica: utilize fprintf, fscanf, fopen com modo "a" ou "r" e estruturas de repetição para criar um menu. Além disso, utilize struct para "modelar" as varáveis que definem o aluno.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char nome[100];
    float nota;
} Aluno;

int main() {
    FILE *arq;
    int opcao;
    Aluno a;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Listar todos os alunos\n");
        printf("3 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
        case 1:
            arq = fopen("alunos.txt", "a");
            
            if(arq == NULL) {
                printf("Erro ao abrir arquivo\n");
                exit(1);
            }

            printf("\n--- CADASTRO DE ALUNO ---\n");
            printf("Matricula: ");
            scanf("%d", &a.matricula);
            
            printf("Nome: ");
            scanf(" %[^\n]", a.nome);
            
            printf("Nota: ");
            scanf("%f", &a.nota);

            fprintf(arq, "%d %s %.2f\n", a.matricula, a.nome, a.nota);
            
            fclose(arq);
            
            printf("Aluno cadastrado com sucesso!\n");
            break;

        case 2:
            arq = fopen("alunos.txt", "r");
            
            if(arq == NULL) {
                printf("Nenhum aluno cadastrado ainda.\n");
                break;
            }

            printf("\n--- LISTA DE ALUNOS CADASTRADOS ---\n");
            printf("Matricula\tNome\t\tNota\n");
            printf("----------------------------------------\n");
            
            while(fscanf(arq, "%d %[^\n] %f\n", &a.matricula, a.nome, &a.nota) != EOF) {
                printf("%d\t\t%s\t\t%.2f\n", a.matricula, a.nome, a.nota);
            }
            
            fclose(arq);
            break;

        case 3:
            printf("Encerrando o programa\n");
            break;

        default:
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while(opcao != 3);

    return 0;
}
