#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];

    printf("Digite um nome: ");
    scanf("%s", nome);

    printf("As 4 primeiras letras do nome %s sao: ", nome);

    int tamanho = strlen(nome);
    int i;
    for (i = 0; i < 4 && i < tamanho; i++) {
        printf("%c", nome[i]);
    }
    printf("\n");

    return 0;
}

