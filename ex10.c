#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, tam, palindromo = 1;
    scanf("%s", palavra);
    tam = strlen(palavra);
    for (i = 0; i < tam / 2; i++) {
        if (palavra[i] != palavra[tam - 1 - i]) {
            palindromo = 0;
            break;
        }
    }
    if (palindromo) printf("Sim\n");
    else printf("Nao\n");
    return 0;
}
