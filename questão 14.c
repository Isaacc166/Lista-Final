#include <stdio.h>

int main()
{
    
    int num;
    
    printf("Digete um número inteiro: ");
    scanf("%i", &num);
    
    if(num % 2 == 0 )
    {
        printf("Esse número é par...");
    }
    else
    {
        printf("Esse número é ímpar...");

    }

    return 0;
}
