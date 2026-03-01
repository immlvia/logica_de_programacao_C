/*
Implemente um programa em C para cadastrar produtos utilizando struct e union.
Cada produto deve possuir um código que pode ser numérico ou alfanumérico, mas apenas um deles será armazenado por vez. Para isso, utilize uma union.
Crie uma struct Produto com os seguintes campos:
char nome[50]
float preco
Uma union chamada codigo, contendo:
int codigoNumerico
char codigoAlfanumerico[20]

Além disso, utilize um campo auxiliar (por exemplo, um int ou enum) para indicar qual tipo de código foi armazenado, garantindo que o dado seja exibido corretamente.
*/

#include <stdio.h>

typedef union {
    int codigoNumerico;
    char codigoAlfanumerico[20];
} Codigo;

typedef struct {
    char nome[50];
    float preco;
    Codigo opcao;
    int aux;
} Produto;

int main() {
    Produto produto[3];
    
    for(int i =0;i<3;i++) {
        scanf(" %[^\n]", &produto[i].nome);
        scanf("%f", &produto[i].preco);
        scanf("%d", &produto[i].aux);
        
        if(produto[i].aux == 1) {
            scanf("%d", &produto[i].opcao.codigoNumerico);
        }
        else {
            scanf("%s", &produto[i].opcao.codigoAlfanumerico);
        }
    }
    
    for (int i=0;i<3;i++) {
        printf("Produto %d\nNome: %s\nPreco: %.2f\n", (i+1), produto[i].nome, produto[i].preco);
        
        if(produto[i].aux == 1) {
            printf("Codigo: %d\n\n", produto[i].opcao.codigoNumerico);
        }
        else {
            printf("Codigo: %s\n\n", produto[i].opcao.codigoAlfanumerico);
        }
        
    }
    
    
}




