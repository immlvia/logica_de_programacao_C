// Dada uma string, remova todos os espaços e retorne a string compactada.

// Crie a função: void removerEspacos(char s[]);

#include <stdio.h>

void removerEspacos(char s[]) {
    int i = 0, j = 0;
    
    while (s[i] != '\0') {
        if (s[i] != ' ') {
            s[j] = s[i];
            j++;
        }
        i++;
    }
    s[j] = '\0';
    
}

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    removerEspacos(s);
    printf("%s\n", s);
    
    return 0;
}
