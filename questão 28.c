include <stdio.h>

int main() {
    int idade, contador = 1;
    float peso, media1_10 = 0.0, media11_20 = 0.0, media21_30 = 0.0, mediaMaior30 = 0.0;
    int qtd1_10 = 0, qtd11_20 = 0, qtd21_30 = 0, qtdMaior30 = 0;

    while (contador <= 15) {
        printf("Digite a idade da pessoa %d: ", contador);
        scanf("%d", &idade);

        printf("Digite o peso da pessoa %d: ", contador);
        scanf("%f", &peso);

        if (idade >= 1 && idade <= 10) {
            media1_10 += peso;
            qtd1_10++;
        } else if (idade >= 11 && idade <= 20) {
            media11_20 += peso;
            qtd11_20++;
        } else if (idade >= 21 && idade <= 30) {
            media21_30 += peso;
            qtd21_30++;
        } else {
            mediaMaior30 += peso;
            qtdMaior30++;
        }

        contador++;
    }

    if (qtd1_10 > 0) {
        media1_10 /= qtd1_10;
        printf("Média de peso das pessoas de 1 a 10 anos: %.2f\n", media1_10);
    } else {
        printf("Não há pessoas de 1 a 10 anos.\n");
    }

    if (qtd11_20 > 0) {
        media11_20 /= qtd11_20;
        printf("Média de peso das pessoas de 11 a 20 anos: %.2f\n", media11_20);
    } else {
        printf("Não há pessoas de 11 a 20 anos.\n");
    }

    if (qtd21_30 > 0) {
        media21_30 /= qtd21_30;
        printf("Média de peso das pessoas de 21 a 30 anos: %.2f\n", media21_30);
    } else {
        printf("Não há pessoas de 21 a 30 anos.\n");
    }

    if (qtdMaior30 > 0) {
        mediaMaior30 /= qtdMaior30;
        printf("Média de peso das pessoas com mais de 30 anos: %.2f\n", mediaMaior30);
    } else {
        printf("Não há pessoas com mais de 30 anos.\n");
    }

    printf("Quantidade de pessoas de 1 a 10 anos: %d\n", qtd1_10);
    printf("Quantidade de pessoas de 11 a 20 anos: %d\n", qtd11_20);
    printf("Quantidade de pessoas de 21 a 30 anos: %d\n", qtd21_30);
    printf("Quantidade de pessoas com mais de 30 anos: %d\n", qtdMaior30);

    return 0;
}
