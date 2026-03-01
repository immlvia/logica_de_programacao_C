/*
Fazer uma função que recebe como parâmetro um array de 5 posições contendo as notas de um aluno ao longo do ano e devolve a média do aluno. Se a média do aluno for maior ou igual à 7, 
deverá indicar que o aluno foi aprovado, caso contrário, deverá indicar que o aluno foi reprovado. A média do aluno deverá ser exibida com apenas duas casas decimais.
*/

#include <stdio.h>

float calcular_media(float nota[], int tamanho) {
    float soma = 0;
    
    for (int i = 0; i < tamanho; i++) {
        soma += nota[i];
    }
    
    float media = soma/5.0;
    return media;
}

int main() {

	float nota[5], media;
	int tamanho = 5;
	
	for (int i = 0; i < tamanho; i++) {
        scanf("%f", &nota[i]);
	}
	
	media = calcular_media(nota, tamanho);
    
    printf ("Media do aluno = %.2f\n", media, 5); 
        
    if (media >= 7.0) {
            printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
        }
    
	return 0;
}
