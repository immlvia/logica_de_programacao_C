/*
Escreva um programa em C que copie todo o conteúdo de um arquivo texto chamado origem.txt para outro arquivo chamado destino.txt.
O programa deve criar os arquivos caso não existam e realizar a cópia caractere por caractere até o final do arquivo. Dica: utilize fopen, fgetc, fputc, e fclose.
*/

#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    
    scanf("%s %d", nome, &idade);
    
    FILE *arquivoOrigem, *arquivoDestino;
    char caractere;

    arquivoOrigem = fopen("origem.txt", "w");
    if (arquivoOrigem == NULL) {
        printf("Erro ao abrir o arquivo de origem.\n");
        return 1;
    }
    
    
    fprintf(arquivoOrigem, "%s %d\n", nome, idade);
    scanf("%s %d", nome, &idade);
    fprintf(arquivoOrigem, "%s %d\n", nome, idade);
    fclose(arquivoOrigem);
    
    arquivoOrigem = fopen("origem.txt", "r");
    if (arquivoOrigem == NULL) {
        printf("Erro ao abrir o arquivo de origem.\n");
        return 1;
    }
    
    fprintf(arquivoOrigem, "%s %d\n", nome, idade);
    
    arquivoDestino = fopen("destino.txt", "w");
    if (arquivoDestino == NULL) {
        printf("Erro ao abrir o arquivo de destino.\n");
        fclose(arquivoOrigem);
        return 1;
    }

    while ((caractere = fgetc(arquivoOrigem)) != EOF) {
        fputc(caractere, arquivoDestino);
    }

    fclose(arquivoOrigem);
    fclose(arquivoDestino);

    printf("Arquivo copiado com sucesso!\n");

    return 0;
}
