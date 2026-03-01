/*
Uma empresa de monitoramento ambiental utiliza sensores capazes de medir temperatura, umidade ou pressão atmosférica. Para otimizar o uso de memória do microcontrolador, cada sensor deve armazenar apenas um tipo de dado por vez.
Implemente um programa em C que registre os sensores e exiba suas leituras de forma organizada.

Crie um enum chamado TipoSensor com os valores:
1 → TEMPERATURA  
2 → UMIDADE  
3 → PRESSAO
Crie uma union para armazenar a leitura do sensor:
float temperatura
float umidade
float pressao

Depois, crie uma struct Sensor contendo:
TipoSensor tipo
union com o valor da leitura

Entrada
A primeira linha contém um inteiro N (1 ≤ N ≤ 100), representando o número de sensores.
Cada uma das próximas N linhas contém:
tipo valor
Onde:
1 → Temperatura (em °C)
2 → Umidade (em %)
3 → Pressão (em hPa)

Use exatamente as seguintes unidades:
C para temperatura
% para umidade
hPa para pressão
*/

#include <stdio.h>

typedef enum {
    TEMPERATURA = 1,
    UMIDADE = 2,
    PRESSAO
} TipoSensor;

typedef union {
    float temperatura;
    float umidade;
    float pressao;
} Leitura;

typedef struct {
    TipoSensor tipo;
    Leitura leitura;
} Sensor;

int main() {
    int n; // numeros de sensores
    scanf("%d", &n);
    Sensor sensores[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &sensores[i].tipo);
        
        if (sensores[i].tipo == TEMPERATURA){
            scanf("%f", &sensores[i].leitura.temperatura);
        }
        else if (sensores[i].tipo == UMIDADE) {
            scanf("%f", &sensores[i].leitura.umidade);
        } 
        else if (sensores[i].tipo == PRESSAO) {
            scanf("%f", &sensores[i].leitura.pressao);
        }
    }
        for (int i = 0; i < n; i++) {
            printf("Sensor %d: ",i + 1);
            
            if (sensores[i].tipo == TEMPERATURA){
            printf("Temperatura = %.2f C\n", sensores[i].leitura.temperatura);
        }
        else if (sensores[i].tipo == UMIDADE) {
            printf("Umidade = %.2f %%\n", sensores[i].leitura.umidade);
        } 
        else {
            printf("Pressao = %.2f hPa\n", sensores[i].leitura.pressao);
        }
        
    }
        
    return 0;
}

