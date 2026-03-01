/*
Escreva um programa em C que leia um array de N números inteiros e transforme cada elemento de acordo com a seguinte regra:

Se o número for par, divida por 2.
Se o número for ímpar, multiplique por 3 e some 1.

Depois, exiba o array transformado.
*/

#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            arr [i] = arr[i] / 2;
        } else {
            arr[i] = (arr[i] * 3) + 1;
        }
    }
    
    printf("Array transformado:\n");
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}    
