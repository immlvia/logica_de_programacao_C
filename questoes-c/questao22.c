// Crie uma função que receba dois números inteiros e retorne a soma deles.

#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    
    printf("%d", soma(n1, n2));
    
    return 0;
}
