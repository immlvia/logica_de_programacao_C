/*
Desenvolva um programa que leia um arquivo texto chamado texto.txt e informe a quantidade de linhas, palavras e caracteres presentes no arquivo. 
Considere palavra como qualquer sequência de caracteres separada por espaços, tabulações ou quebras de linha.
A leitura deve ser feita de forma sequencial, sem carregar todo o arquivo na memória.

Dica: utilize fgetc, isspace, EOF e controle de estado para identificar palavras.
*/

#include <stdio.h>
#include <ctype.h>

#define DENTRO 1
#define FORA   0

int main() {
    FILE *arquivo;
    int c;
    int linhas = 0, palavras = 0, caracteres = 0;
    int estado = FORA;

    arquivo = fopen("texto.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo\n");
        return 1;
    }

    while ((c = getchar()) != '0' && c != EOF) {
        fputc(c, arquivo);
    }

    fclose(arquivo);

    arquivo = fopen("texto.txt", "r");
    if (arquivo == NULL) {
        return 1;
    }

    while ((c = fgetc(arquivo)) != EOF) {
        caracteres++;

        if (c == '\n') {
            linhas++;
        }
        
        if (c == ' ' || c == '\n' || c == '\t') {
            estado = FORA;
        } else if (estado == FORA) {
            estado = DENTRO;
            palavras++;
        }
    }

    fclose(arquivo);
    
    printf("Linhas: %d\n", linhas);
    printf("Palavras: %d\n", palavras);
    printf("Caracteres (inclui espacos): %d\n", caracteres);
    
    return 0;
}
