/* Os professores de Educação Física estão organizando uma seletiva para montar a equipe de natação.
Para isso, eles convocaram os 7 melhores tempos da última competição e marcaram o tempo de cada um dos nadadores, na prova dos 25 metros, estilo livre. 
Construa um programa em C que leia o tempo (em segundos) de cada atleta e, em seguida, gere o seguinte relatório: 
a) melhor tempo, b) pior tempo, c) tempo médio dos nadadores, d) quantidade de atletas com o tempo entre 12s e 15s.

Dica: utilizar o operador && (E) para responder o item d). */

#include <stdio.h>

int main(){
    
    float tempo, melhor_tempo, pior_tempo, tempo_medio, soma = 0, cont=7;
    int quantidade=0;
    scanf("%f", &tempo);
    melhor_tempo=pior_tempo=tempo;
    
    
    while (cont!=0){
        if (tempo<pior_tempo){
            pior_tempo=tempo;
        }
        
        else if (tempo>melhor_tempo){
            melhor_tempo=tempo;
        }
        if (tempo>= 12 && tempo<=15){
            quantidade+= 1;
        }
        
        soma+=tempo;
        scanf("%f", &tempo);
        cont--;
        
    }
    tempo_medio=soma/7.0;
    
    printf("Melhor tempo: %.2f segundos", pior_tempo);
    printf("\nPior tempo: %.2f segundos", melhor_tempo);
    printf("\nTempo medio: %.2f segundos", tempo_medio);
    printf("\nQuantidade de atletas entre 12s e 15s: %d", quantidade);
    
    return 0;
    
}
