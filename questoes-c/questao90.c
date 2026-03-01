/*
Crie um programa que armazene registros de alunos em um arquivo binário chamado alunos.dat usando uma estrutura contendo id, nome e nota. 
O programa deve permitir cadastrar novos alunos, listar todos os registros armazenados e acessar diretamente um aluno pela posição do registro no arquivo, sem percorrer todo o arquivo.

Dica: utilize struct, fwrite, fread, fseek, sizeof e acesso direto a posições do arquivo.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char nome[100];
    float nota;
} Aluno;

int main() {
    FILE *arq;
    int opcao, pos;
    Aluno a;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Cadastrar novo aluno\n");
        printf("2 - Listar todos os alunos\n");
        printf("3 - Consultar aluno por posicao\n");
        printf("4 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
        case 1:
            arq = fopen("alunos.dat", "ab");
            
            if(arq == NULL) {
                printf("Erro ao abrir arquivo\n");
                exit(1);
            }

            printf("\n--- CADASTRO DE ALUNO ---\n");
            printf("ID: ");
            scanf("%d", &a.id);
            
            printf("Nome: ");
            scanf(" %[^\n]", a.nome);
            
            printf("Nota: ");
            scanf("%f", &a.nota);

            fwrite(&a, sizeof(Aluno), 1, arq);
            
            fclose(arq);
            
            printf("Aluno cadastrado com sucesso!\n");
            break;

        case 2:
            arq = fopen("alunos.dat", "rb");
            
            if(arq == NULL) {
                printf("Nenhum aluno cadastrado ainda.\n");
                break;
            }

            printf("\n--- LISTA DE TODOS OS ALUNOS ---\n");
            printf("Posicao\tID\tNome\t\tNota\n");
            printf("----------------------------------------\n");
            
            pos = 0;
            while(fread(&a, sizeof(Aluno), 1, arq) == 1) {
                printf("%d\t%d\t%s\t\t%.2f\n", pos, a.id, a.nome, a.nota);
                pos++;
            }
            
            fclose(arq);
            break;

        case 3:
            arq = fopen("alunos.dat", "rb");
            
            if(arq == NULL) {
                printf("Arquivo nao encontrado.\n");
                break;
            }

            printf("\n--- CONSULTA POR POSICAO ---\n");
            printf("Digite a posicao do aluno: ");
            scanf("%d", &pos);

            fseek(arq, pos * sizeof(Aluno), SEEK_SET);

            if(fread(&a, sizeof(Aluno), 1, arq) == 1) {
                printf("\nAluno encontrado:\n");
                printf("ID: %d\n", a.id);
                printf("Nome: %s\n", a.nome);
                printf("Nota: %.2f\n", a.nota);
            } else {
                printf("Nenhum aluno cadastrado nessa posicao.\n");
            }

            fclose(arq);
            break;

        case 4:
            printf("Encerrando o programa...\n");
            break;

        default:
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while(opcao != 4);

    return 0;
}
