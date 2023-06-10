#include <stdio.h>

int main() {
    float preco, novoPreco;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    novoPreco = preco - (preco * 0.09);

    printf("O novo preço com desconto de 9%% é: %.2f\n", novoPreco);

    return 0;
}
