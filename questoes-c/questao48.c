// Crie um programa em C que leia N números inteiros e verifique se eles formam uma sequência aritmética (a diferença entre elementos consecutivos é constante). 
// Se formar, imprima “Sequência aritmética”. Caso contrário, imprima “Não é sequência aritmética”.

#include <stdio.h>

int main() {
    int n, num, soma = 0, verifica; 
    scanf("%d", &n);
    int A[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        A[i] = num;
    }
    
    verifica = A[1] - A[0]; 
    for (int i = 0; i < n-1; i++) {
        if((A[i+1] - A[i]) == verifica) {
            soma++;
        } 
    }
    
    if (soma == (n-1)) {
        printf("Sequência aritmética\n");
    }
    
    else {
        printf("Não é sequência aritmética");
    }
    
    return 0;
}    

