// Faça uma função chamada “maiorElemento” que receba 5 números inteiros e retorne o maior elemento.

#include <stdio.h>

int maiorElemento(int a, int b, int c, int d, int e) {
    int maior = a;
    
    if (b > maior) {
        maior = b;
    }
    
    if (c > maior) {
        maior = c;
    }
    
    if (d > maior) {
        maior = d;
    }
    
    if (e > maior) {
        maior = e;
    }
    return maior;
}

int main() {
    
    int n1, n2, n3, n4, n5;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    int maior = maiorElemento(n1, n2, n3, n4, n5);
    printf("%d\n", maior);
    
    return 0;
}
