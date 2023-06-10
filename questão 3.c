#include <stdio.h>

int main() {
    float metros, decimetros, centimetros, milimetros;

    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    decimetros = metros * 10;
    centimetros = metros * 100;
    milimetros = metros * 1000;

    printf("O valor %.2f metros equivale a:\n", metros);
    printf("%.2f decímetros\n", decimetros);
    printf("%.2f centímetros\n", centimetros);
    printf("%.2f milímetros\n", milimetros);

    return 0;
}
