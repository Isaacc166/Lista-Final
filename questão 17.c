#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%i", &num);

    if (num % 10 == 0 && num % 5 == 0 && num % 2 == 0 )
    {
     printf("Ele é divísivel por 10, por 5 e por 2");
    }
    else if ( num % 5 == 0 && num % 2 == 0)
    {
       printf("Ele é divísivel por 5 e por 2");
    }
    else if (num % 2 == 0)
    {
        printf("Ele é divísivel por 2");
    }
    else if (num % 5 == 0)
    {
        printf("Ele é divísivel por 5");
    }
    else if (num % 10 == 0)
    {
        printf("Ele é divísivel por 10");
    }
    else
    {
        printf("Ele não é divísivel por 10, 5 e 2");
    }
    return 0;
}
