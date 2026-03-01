// Dada uma string de no máximo 100 caracteres, conte quantos dígitos numéricos ('0'–'9') ela possui. Use exclusivamente ponteiros para percorrer a string (sem usar str[i]).

#include <stdio.h>

int main() {
    char str[1000];
    int cont = 0;

    fgets(str, sizeof(str), stdin);

    char *p = str;

    while (*p != '\0') {
        if (*p >= '0' && *p <= '9') {
            cont++;
        }
        
        p++;
    }

    printf("%d\n", cont);

    return 0;
}
