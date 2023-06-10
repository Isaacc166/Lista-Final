#include <stdio.h>

int main() {
    float valorHoraAula, salarioBruto, descontoINSS, salarioLiquido;
    int numeroAulas;

    printf("Digite o valor da hora-aula: ");
    scanf("%f", &valorHoraAula);

    printf("Digite o número de aulas dadas: ");
    scanf("%d", &numeroAulas);

    printf("Digite a porcentagem de desconto do INSS: ");
    scanf("%f", &descontoINSS);

    salarioBruto = valorHoraAula * numeroAulas;
    salarioLiquido = salarioBruto - (salarioBruto * (descontoINSS / 100));

    printf("O salário líquido do professor é: %.2f\n", salarioLiquido);

    return 0;
}
