#include <stdio.h>

int main() {
    int contador = 1;
    float nota1, nota2, nota3, nota4, media, mediaTurma = 0.0;

    while (contador <= 5) {
        printf("Aluno %d:\n", contador);
        printf("Digite a primeira nota (peso 3): ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota (peso 2): ");
        scanf("%f", &nota2);

        printf("Digite a terceira nota (peso 1): ");
        scanf("%f", &nota3);

        printf("Digite a quarta nota (peso 1): ");
        scanf("%f", &nota4);

        media = (nota1 * 3 + nota2 * 2 + nota3 + nota4) / 7;
        mediaTurma += media;

        printf("Média: %.2f\n", media);

        if (media >= 7.0) {
            printf("Situação: Aprovado\n");
        } else if (media >= 4.0) {
            printf("Situação: Recuperação (%.2f pontos para aprovação)\n", 10.0 - media);
        } else {
            printf("Situação: Reprovado\n");
        }

        printf("\n");
        contador++;
    }

    mediaTurma /= 5;
    printf("Média da turma: %.2f\n", mediaTurma);

    return 0;
}
