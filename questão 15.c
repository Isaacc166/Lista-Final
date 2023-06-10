#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    
    if (idade >= 10 && idade <= 14)
    {
        printf("\nVocê se encontra na categoria infantil");
    }
    else if (idade >= 15 && idade <= 17)
    {
        printf("\nVocê se encontra na categoria juvenil");
    }
    else
    {
        printf("\nVocê se encontra na categoria adulto");
    }


    return 0;
}


