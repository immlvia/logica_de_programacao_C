/*
Dado um array de N inteiros fornecidos pelo usuário, leia os valores L, R e X e conte quantas vezes o valor X aparece entre as posições L e R (inclusive). 
Para isso, crie uma função int contar(int v[], int L, int R, int X);
*/

#include <stdio.h>

int contar(int v[], int L, int R, int X){
    int cont = 0;
    for (int i = L - 1; i<=R - 1; i++) {
        if (v[i] == X) {
            cont++;
        }
    }
    return cont;
}

int main() {
    
    int n, l, r, x;
    scanf("%d", &n);
    
    int v[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    
    scanf("%d %d %d", &l, &r, &x);
    printf("%d\n", contar(v, l, r, x));
    return 0;
}
