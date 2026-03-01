// Crie uma função que receba um valor e informe se ele é positivo ou não. OBS: Considere que o 0 é um número neutro.

#include <stdio.h>

void pos_neg(int a) {
    if (a > 0) {
        printf("Positivo\n");
    } else if (a < 0) {
        printf("Negativo\n");
    } else {
        printf("Neutro\n");
    }
    
}

int main() {
    
    int n;
    scanf("%d", &n);
    pos_neg(n);
    
    return 0;
}
