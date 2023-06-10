#include <stdio.h>

int main() {
    int decimal;

    printf("Digite um número decimal: ");
    scanf("%d", &decimal);

    printf("O número %d em hexadecimal é: %X\n", decimal, decimal);
    printf("O número %d em octal é: %o\n", decimal, decimal);

    return 0;
}

