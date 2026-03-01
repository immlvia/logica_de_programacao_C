// Crie um função chamada “potencia” que receba dois numeros inteiros base e expoente, respectivamente, e retorne o valor da base elevado ao expoente (faça sem utilizar pow() da biblioteca). 

#include <stdio.h>

int potencia(int a, int b) {
    if (b==0) {
        return 1;
    }
    
    int resultado = 1;
    for (int i = 0; i < b; i++) {
        resultado *= a;
        
    }
    return resultado;
}

int main() {
    
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    
    int resultado = potencia(n1, n2);
    printf("%d", resultado);
    
    return 0;
}
