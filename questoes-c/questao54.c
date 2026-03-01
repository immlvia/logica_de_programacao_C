// Crie um programa que leia um array com 5 elementos, após isso, crie um ponteiro que aponte para o primeiro elemento e usando apenas o ponteiro e aritmética de ponteiros 
// (sem v[i]), calcule a soma de todos os elementos. Após isso, imprima o resultado da soma.

#include <stdio.h>

int main() {
    
   int numeros[5], soma = 0;
   
   for (int i = 0; i < 5; i++) {
       scanf("%d", &numeros[i]);
   }
   
   int *p = numeros;
   
   for (int i = 0; i < 5; i++) {
       soma += *(p+i);
   }
   
   printf("Soma = %d", soma);

    
    return 0;
}
