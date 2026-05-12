#include <stdio.h>

int main() {
    char palavra[100];
    int i = 0;
    scanf("%s", palavra);
    while (palavra[i] != '\0') {
        i++;
    }
    printf("%d\n", i);
    return 0;
}
