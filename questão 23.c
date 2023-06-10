#include <stdio.h>

int main() {
    int mes;

    printf("Digite o número do mês (1 a 12): ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("O mês possui 31 dias.\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("O mês possui 30 dias.\n");
            break;
        case 2:
            printf("O mês possui 28 ou 29 dias.\n");
            break;
        default:
            printf("Mês inválido.\n");
            break;
    }

    return 0;
}
