#include <stdio.h>

int main() {
    int n; 

    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &n);

    int matriz[n][n]; 


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                matriz[i][j] = 1; 
            } else {
                matriz[i][j] = 0;
            }
        }
    }


    printf("Matriz com diagonal principal 1:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}