// Leia 5 números float em um array. Usando ponteiros, calcule a média desses números e exiba o resultado com 2 casas decimais.

#include <stdio.h>

int main() {
    
    float array[5], soma = 0;
    float *p;
    for (int i = 0; i < 5; i++) {
        scanf("%f", &array[i]);
    }
    
    p = array; 
    
    for (int i = 0; i < 5; i++) {
        soma += *(p + i);
    }
    
    float media = soma/5.0;
    
    printf("Media = %.2f\n", media);
    
    return 0;
}
