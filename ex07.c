#include <stdio.h>

int main() {
    int vetor[10], x, encontrado = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < 10; i++) {
        if (vetor[i] == x) {
            encontrado = 1;
            break;
        }
    }
    if (encontrado) printf("Sim\n");
    else printf("Nao\n");
    return 0;
}
