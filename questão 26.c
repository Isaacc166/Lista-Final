#include <stdio.h>

int main() {
    int lado, i = 1, j;

    printf("Digite o tamanho do lado do quadrado (1 a 20): ");
    scanf("%d", &lado);

    if (lado >= 1 && lado <= 20) {
        while (i <= lado) {
            j = 1;
            while (j <= lado) {
                printf("* ");
                j++;
            }
            printf("\n");
            i++;
        }
    } else {
        printf("Tamanho do lado inválido.\n");
    }

    return 0;
}
