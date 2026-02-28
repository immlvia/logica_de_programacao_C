/* 
Impondo privacidade com criptografia. O crescimento explosivo das comunicações pela Internet e do
armazenamento de dados nos computadores conectados à Internet aumentou muito a preocupação com a privacidade.
O campo da criptografia trata da codificação de dados para torná-los difíceis (ou impossíveis, com os esquemas mais avançados) de serem lidos por usuários não autorizados. 
Nesse exercício, você investigará um esquema simples de codificação e decodificação de dados.
Uma empresa que queira enviar dados pela Internet lhe pediu que escrevesse um programa que os codificasse para que pudessem ser transmitidos com mais segurança. 
Todos os dados são transmitidos como inteiros de quatro dígitos. Sua aplicação deverá ler um inteiro de quatro dígitos informado pelo usuário e codificá-lo da seguinte forma: 
substitua cada dígito pelo resultado da soma de 7 ao dígito e calcular o módulo depois de dividir o novo valor por 10. 
Depois, troque o primeiro dígito pelo terceiro e troque o segundo dígito pelo quarto. A seguir, imprima o inteiro codificado. 
Escreva outra aplicação que receba um inteiro de quatro dígitos codificado e o decodifique (invertendo o esquema de codificação) para formar o número original. 
[Projeto de leitura opcional: pesquise ‘criptografia de chave pública’ em geral e o esquema de chave pública PGP (Pretty Good Privacy) específico. 
Você também poderá querer investigar o esquema RSA, que é bastante usado em aplicações de peso industrial.]
*/

#include <stdio.h>

int main(){
    
    int numero, num1, num2, num3, num4, codificado;
    
    scanf("%d", &numero);
    
    num1 = (numero/1000);
    num2 = (numero/100) % 10;
    num3 = (numero/10) % 10;
    num4 = numero % 10;
    
    num1 = (num1 + 7) % 10;
    num2 = (num2 + 7) % 10;
    num3 = (num3 + 7) % 10;
    num4 = (num4 + 7) % 10;
    
    codificado = (num3 * 1000) + (num4*100) + (num1*10) + (num2);
    printf("%04d\n", codificado);
    
    return 0;
}
