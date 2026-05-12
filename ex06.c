#include <stdio.h>

int main() {
    int vetor[10], pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] > 0) pos++;
        else if (vetor[i] < 0) neg++;
        else zero++;
    }
    printf("%d %d %d\n", pos, neg, zero);
    return 0;
}
