#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite o dia do aniversário: ");
    scanf("%d", &dia);

    printf("Digite o mês do aniversário: ");
    scanf("%d", &mes);

    printf("Digite o ano do aniversário: ");
    scanf("%d", &ano);

    if (ano == 2023) {
        if (mes >= 1 && mes <= 12) {
            if (dia >= 1 && dia <= 31) {
                printf("Data de aniversário válida.\n");
            } else {
                printf("Dia inválido.\n");
            }
        } else {
            printf("Mês inválido.\n");
        }
    } else {
        printf("Ano inválido.\n");
    }

    return 0;
}
