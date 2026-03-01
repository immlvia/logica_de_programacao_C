//Implemente uma função void troca(int *a, int *b) que troque os valores de duas variáveis inteiras usando ponteiros.
//No main, leia dois números, chame a função e mostre os valores trocados.

#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x, y, *p1, *p2;
    scanf("%d %d", &x, &y);
    
    p1 = &x;
    p2 = &y;
    
    printf("Antes da troca: x = %d, y = %d\n", *p1, *p2);
    troca(p1, p2);
    printf("Depois da troca: x = %d, y = %d", *p1, *p2);
    
    return 0;
}
