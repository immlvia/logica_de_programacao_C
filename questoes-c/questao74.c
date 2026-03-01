/*
Modele uma estrutura chamada Tempo, contendo horas, minutos e segundos. Implemente uma função que receba um valor inteiro representando o total de segundos e 
retorne uma estrutura Tempo devidamente preenchida com a conversão correspondente.
Requisitos:

Estrutura: Criar a struct Tempo (Inteiros para horas, minutos e segundos).

Função de Conversão: Receber um inteiro (segundos) e retornar uma struct Tempo.

Fluxo de Controle: O programa deve ler o valor total de segundos e exibir o resultado formatado.

Saída: Exibir o tempo no formato Xh Ymin Zs.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    int horas, minutos, segundos;
} Tempo;

Tempo conversao(int total_segundos) {
    Tempo t;
    
    t.horas = total_segundos/3600;
    total_segundos %= 3600;
    t.minutos = total_segundos/60;
    t.segundos = total_segundos%60;
    
    return t;
}

int main() {
    int entrada;
    scanf("%d", &entrada);
    
    Tempo t = conversao(entrada);
    printf("%dh %dmin %ds", t.horas, t.minutos, t.segundos);
}
