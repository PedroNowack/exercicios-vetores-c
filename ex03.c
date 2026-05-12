#include <stdio.h>

int main() {
    int vetor[10], soma = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    printf("%d\n", soma);
    return 0;
}
