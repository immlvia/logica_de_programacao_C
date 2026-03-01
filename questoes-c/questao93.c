/*
Um cofre digital registra tentativas de acesso.

Crie uma struct chamada Tentativa contendo:

- usuario (string 30)
- senhaDigitada (int)
- senhaCorreta (int)
- acessoLiberado (int → 0 ou 1)

Regras:
Se senhaDigitada for igual a senhaCorreta, acessoLiberado = 1.

Caso contrário, acessoLiberado = 0.

Tarefa:
- Leia os dados de uma tentativa.
- Crie uma função verificarAcesso() que receba ponteiro para Tentativa e determine se o acesso foi liberado.
*/

#include <stdio.h>

typedef struct {
    char usuario[30];
    int senha_digitada;
    int senha_correta;
    int acesso_liberado;
} Tentativa;

void verificarAcesso(Tentativa *t) {
    if(t->senha_digitada == t->senha_correta) {
        t->acesso_liberado = 1;
    }
    else {
        t->acesso_liberado = 0;
    }
}

int main () {
    
    Tentativa tentativa1;
    Tentativa *pTentativa;
    pTentativa = &tentativa1;
    
    scanf(" %[^\n]", tentativa1.usuario);
    scanf("%d", &tentativa1.senha_digitada);
    scanf("%d", &tentativa1.senha_correta);
    
    verificarAcesso(pTentativa);
    
    printf("Usuario: %s\n", tentativa1.usuario);
    
    if (tentativa1.acesso_liberado == 0) {
        printf("Acesso: NEGADO");
    }
    else {
        printf("Acesso: LIBERADO");
    }
    return 0;
}
