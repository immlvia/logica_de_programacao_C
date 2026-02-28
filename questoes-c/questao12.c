// Construa um programa em C que receba o preço de 5 medicamentos de uma drogaria. O programa deve informar o preço do medicamento mais barato, bem como a média aritmética dos preços informados.

#include <stdio.h>

int main(){
    
    float medicamentos, soma = 0, media, cont = 5, menor;
    scanf("%f", &medicamentos);
    menor=medicamentos;
    
    while (cont!=0){
        if (medicamentos<menor){
            menor = medicamentos;
        }
        
        cont--;
        soma+=medicamentos;
        scanf("%f", &medicamentos);
        
    }
    
    media = soma/5.0;
    
    printf("Preco do medicamento mais barato: R$%.2f", menor);
    printf("\nMedia dos precos: R$%.2f", media);
    
    return 0;
    
}
