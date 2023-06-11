#include <stdio.h>

int main()
{
    int num;
    int i;
    
    printf("Digite um num: ");
    scanf("%i", &num);
    
    for (i=0; i <= 10; i++)
    {
        printf("\t\n%i * %i = %i", num, i, num*i);
    }

    return 0;
}
