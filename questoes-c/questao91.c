/*
Desenvolva um sistema de cadastro em arquivo binário que permita inserir registros de alunos, listar registros ativos e remover registros sem apagá-los fisicamente do arquivo, 
apenas marcando-os como removidos. Ao inserir novos registros, o programa deve reaproveitar posições anteriormente removidas.

Dica: utilize um campo indicador de status no struct, além de fseek, fread, fwrite e controle de posições no arquivo. Você pode aproveitar o que foi desenvolvido no exercício anterior.
*/

#include <stdio.h>
#include <stdlib.h>

#define ATIVO 1
#define REMOVIDO 0

typedef struct {
    int id;
    char nome[100];
    float nota;
    int status;
} Aluno;

int main() {
    FILE *arq;
    int opcao, pos;
    Aluno a;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Cadastrar novo aluno\n");
        printf("2 - Listar alunos ativos\n");
        printf("3 - Remover aluno\n");
        printf("4 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
        case 1: {
            int pos_livre = -1;
            
            arq = fopen("alunos.dat", "rb+");
            
            if(arq != NULL) {
                pos = 0;
                while(fread(&a, sizeof(Aluno), 1, arq) == 1) {
                    if(a.status == REMOVIDO) {
                        pos_livre = pos;
                        break;
                    }
                    pos++;
                }
            }
            
            if(pos_livre == -1) {
                if(arq != NULL) fclose(arq);
                arq = fopen("alunos.dat", "ab");
            } else {
                fseek(arq, pos_livre * sizeof(Aluno), SEEK_SET);
            }
            
            if(arq == NULL) {
                arq = fopen("alunos.dat", "wb");
                if(arq == NULL) {
                    printf("Erro ao criar arquivo\n");
                    exit(1);
                }
            }

            printf("\n--- CADASTRO DE ALUNO ---\n");
            printf("ID: ");
            scanf("%d", &a.id);
            printf("Nome: ");
            scanf(" %[^\n]", a.nome);
            printf("Nota: ");
            scanf("%f", &a.nota);
            
            a.status = ATIVO;
            fwrite(&a, sizeof(Aluno), 1, arq);
            
            fclose(arq);
            
            if(pos_livre == -1)
                printf("Aluno cadastrado no final!\n");
            else
                printf("Aluno cadastrado reaproveitando posicao %d!\n", pos_livre);
            break;
        }

        case 2: {
            arq = fopen("alunos.dat", "rb");
            
            if(arq == NULL) {
                printf("Nenhum aluno cadastrado ainda.\n");
                break;
            }

            printf("\n--- ALUNOS ATIVOS ---\n");
            printf("Posicao\tID\tNome\t\tNota\n");
            printf("----------------------------------------\n");
            
            pos = 0;
            int encontrou = 0;
            
            while(fread(&a, sizeof(Aluno), 1, arq) == 1) {
                if(a.status == ATIVO) {
                    printf("%d\t%d\t%s\t\t%.2f\n", pos, a.id, a.nome, a.nota);
                    encontrou = 1;
                }
                pos++;
            }
            
            if(!encontrou) printf("Nenhum aluno ativo encontrado.\n");
            fclose(arq);
            break;
        }

        case 3: {
            arq = fopen("alunos.dat", "rb+");
            
            if(arq == NULL) {
                printf("Arquivo nao encontrado.\n");
                break;
            }

            printf("\n--- REMOVER ALUNO ---\n");
            printf("Posicao do aluno: ");
            scanf("%d", &pos);

            fseek(arq, pos * sizeof(Aluno), SEEK_SET);

            if(fread(&a, sizeof(Aluno), 1, arq) == 1) {
                if(a.status == ATIVO) {
                    printf("Aluno: %s (ID: %d, Nota: %.2f)\n", a.nome, a.id, a.nota);
                    printf("Confirmar remocao? (1-Sim / 0-Nao): ");
                    int conf;
                    scanf("%d", &conf);
                    
                    if(conf) {
                        a.status = REMOVIDO;
                        fseek(arq, pos * sizeof(Aluno), SEEK_SET);
                        fwrite(&a, sizeof(Aluno), 1, arq);
                        printf("Aluno removido!\n");
                    } else printf("Cancelado.\n");
                } else printf("Aluno ja removido.\n");
            } else printf("Posicao invalida.\n");

            fclose(arq);
            break;
        }

        case 4:
            printf("Encerrando...\n");
            break;

        default:
            printf("Opcao invalida!\n");
        }

    } while(opcao != 4);

    return 0;
}
