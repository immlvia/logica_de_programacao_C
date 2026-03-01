/*
Considere a necessidade de armazenar informações sobre um livro. Para isso, utilize uma estrutura que reúna:
título (até 50 caracteres)
autor (até 50 caracteres)
número de páginas
Após definir essa estrutura, escreva um programa que leia os dados de um livro e os apresente na tela.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[51];
    char autor[51];
    int paginas;
} Livro;

int main() {
    Livro a1;
    fgets(a1.titulo, sizeof(a1.titulo), stdin);
    fgets(a1.autor, sizeof(a1.autor), stdin);
    scanf("%d", &a1.paginas);
    
    printf("--- DADOS DO LIVRO ---\n");
    printf("Titulo: %s", a1.titulo);
    printf("Autor: %s", a1.autor);
    printf("Paginas: %d\n", a1.paginas);
    
    return 0;
}
