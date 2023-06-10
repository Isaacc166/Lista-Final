#include <stdio.h>

int main() {
    char tipoCarro;
    float distancia, consumoEstimado;

    printf("Digite o tipo de carro (A, B ou C): ");
    scanf(" %c", &tipoCarro);

    printf("Digite a distância rodada em quilômetros: ");
    scanf("%f", &distancia);

    switch (tipoCarro) {
        case 'A':
        case 'a':
            consumoEstimado = distancia / 8.0;
            break;
        case 'B':
        case 'b':
            consumoEstimado = distancia / 9.0;
            break;
        case 'C':
        case 'c':
            consumoEstimado = distancia / 12.0;
            break;
        default:
            printf("Tipo de carro inválido.\n");
            return 1; // Sai do programa com código de erro
    }

    printf("O consumo estimado é de %.2f litros.\n", consumoEstimado);

    return 0;
}
