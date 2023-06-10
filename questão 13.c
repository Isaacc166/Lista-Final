#include <stdio.h>

int main()
{
    int idade;
    
    printf("Idade: ");
    scanf("%i", & idade);
    
    if (idade >= 18 && idade <= 67)
    {
        printf("Você pode doar sangue");
    }
    else
    {
        printf("Você não pode doar sangue");
    }
    
    return 0;

}
