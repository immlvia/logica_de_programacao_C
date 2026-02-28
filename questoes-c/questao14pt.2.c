// Agora escreva o programa em C para decodificar o número codificado.

#include <stdio.h>

int main(){
    
    int numero, num1, num2, num3, num4, decodificado;
    
    scanf("%d", &numero);
    
    num1 = (numero/1000);
    num2 = (numero/100) % 10;
    num3 = (numero/10) % 10;
    num4 = numero % 10;
    
    int temp1 = num3, temp2 = num4, temp3 = num1, temp4 = num2;
    
    num1 = (temp1 + 3) % 10;
    num2 = (temp2 + 3) % 10;
    num3 = (temp3 + 3) % 10;
    num4 = (temp4 + 3) % 10;
    
    decodificado = (num1 * 1000) + (num2*100) + (num3*10) + (num4);
    printf("%04d\n", decodificado);
    
    return 0;
}
