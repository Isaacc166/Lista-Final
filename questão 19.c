#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    
    if (idade < 16 )
    {
        printf("\nNão eleitor...");
    }
    else if (idade >= 18 && idade <= 65)
    {
        printf("\nEleitor obrigatório");
    }
    else if (idade >= 16 && idade <= 18)
    {
        printf("\nEleitor facultativo...");
    }
    else if (idade > 65)
    {
        printf("\nEleitor facultativo...");
    }


    return 0;
}
