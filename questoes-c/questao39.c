// Escreva um programa em C que leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente.
// A leitura deve ser encerrada ao ser fornecido valores iguais para X e Y.

#include <stdio.h>

int main() {
    int x, y;
    
    while(x!=y) {
        scanf("%d %d", &x, &y);
        
        if (x>y) {
            printf("Decrescente\n");
        } else if (x<y) {
            printf("Crescente\n");
        }
    }
    scanf("%d %d", &x, &y);
    
    return 0;
}
