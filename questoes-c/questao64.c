// Dado uma frase e uma palavra, conte quantas vezes a palavra aparece como substring.

#include <stdio.h>
#include <string.h>

int main() {
    char frase[1000];
    char palavra[1000];

    fgets(frase, 1000, stdin);
    fgets(palavra, 1000, stdin);

    frase[strcspn(frase, "\n")] = '\0';
    palavra[strcspn(palavra, "\n")] = '\0';

    int cont = 0;
    int tam_palavra = strlen(palavra);
    int tam_frase = strlen(frase);

    for (int i = 0; i <= tam_frase - tam_palavra; i++) {
        if (strncmp(&frase[i], palavra, tam_palavra) == 0) {
            cont++;
        }
    }

    printf("%d\n", cont);

    return 0;
}
