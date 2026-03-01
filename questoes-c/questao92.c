/*
Escreva um programa que leia dois arquivos texto chamados arq1.txt e arq2.txt e gere um terceiro arquivo resultado.txt contendo o conteúdo dos dois arquivos intercalado linha a linha. 
Caso um arquivo tenha mais linhas que o outro, as linhas restantes devem ser copiadas normalmente ao final.

Dica: utilize fgets, fputs, feof e leitura simultânea de dois arquivos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arq1, *arq2, *resultado;
    char linha[500];
    char conteudo[1000];

    printf("--- CRIANDO ARQUIVO 1 (arq1.txt) ---\n");
    printf("Digite o conteudo (digite 'fim' em uma linha para encerrar):\n");
    
    arq1 = fopen("arq1.txt", "w");
    if(arq1 == NULL) {
        printf("Erro ao criar arq1.txt\n");
        return 1;
    }
    
    while(1) {
        fgets(conteudo, sizeof(conteudo), stdin);
        if(strncmp(conteudo, "fim", 3) == 0 && conteudo[3] == '\n') {
            break;
        }
        fputs(conteudo, arq1);
    }
    fclose(arq1);
    
    printf("\n--- CRIANDO ARQUIVO 2 (arq2.txt) ---\n");
    printf("Digite o conteudo (digite 'fim' em uma linha para encerrar):\n");
    
    arq2 = fopen("arq2.txt", "w");
    if(arq2 == NULL) {
        printf("Erro ao criar arq2.txt\n");
        return 1;
    }
    
    while(1) {
        fgets(conteudo, sizeof(conteudo), stdin);
        if(strncmp(conteudo, "fim", 3) == 0 && conteudo[3] == '\n') {
            break;
        }
        fputs(conteudo, arq2);
    }
    fclose(arq2);
    
    arq1 = fopen("arq1.txt", "r");
    arq2 = fopen("arq2.txt", "r");
    resultado = fopen("resultado.txt", "w");
    
    while(1) {
        if(fgets(linha, sizeof(linha), arq1) != NULL) {
            fputs(linha, resultado);
        }
        
        if(fgets(linha, sizeof(linha), arq2) != NULL) {
            fputs(linha, resultado);
        }
        
        if(feof(arq1) && feof(arq2)) {
            break;
        }
    }
    
    fclose(arq1);
    fclose(arq2);
    fclose(resultado);
    
    printf("\nArquivos intercalados com sucesso em resultado.txt\n");
    
    return 0;
}
