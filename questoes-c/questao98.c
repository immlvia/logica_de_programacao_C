/*
Leia dois arrays A e B de mesmo tamanho N. Utilizando somente ponteiros, gere um terceiro array C, onde:

C[i] = A[i] + B[i]
Restrições:

Não usar indexação [ ] dentro do processamento (apenas aritmética de ponteiros).
Entradas: 
N
N inteiros do array A
N inteiros do array B
Saída:

Array C resultante
*/

#include <stdio.h>

int main() {
    int N = 0;

    scanf("%d", &N);

    int A[N], B[N], C[N];

    int *pA = A;
    int *pB = B;
    int *pC = C;

    for (int i = 0; i < N; i++) {
        scanf("%d", pA);
        pA++;
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", pB);
        pB++;
    }

    pA = A;
    pB = B;
    pC = C;

    for (int i = 0; i < N; i++) {
        *pC = *pA + *pB;
        pA++;
        pB++;
        pC++;
    }

    pC = C;
    for (int i = 0; i < N; i++) {
        printf("%d ", *pC);
        pC++;
    }
    return 0;
}
