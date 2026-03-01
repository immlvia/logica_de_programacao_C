/*
Um servidor registra o número de acessos recebidos em cada hora do dia. O administrador quer detectar um possível ataque analisando picos.

Um pico é quando:

acessos[i] > acessos[i-1] e acessos[i] > acessos[i+1].

Escreva um programa que:

Leia N e os valores do array.
Conte quantos picos existem.
Imprima a quantidade de picos.
Obs.: não considere o primeiro e último elemento como picos.
*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int acessos[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &acessos[i]);
    }
    
    int picos = 0;
    
    for (int i = 1; i < N - 1; i++) {
        if (acessos[i] > acessos[i - 1] && acessos[i] > acessos[i + 1]) {
            picos++;
        }
    }
    
    printf("%d\n", picos);
    return 0;
}
