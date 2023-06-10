#include <stdio.h>

int main()
{
    int num;
    int sucessor;
    int antecessor;
    
    printf("Digite um número: ");
    scanf("%i", &num);

    sucessor= num+1;
    antecessor = num-1;
    
    printf("\nSucessor: %i",sucessor );
    printf("\nAntecessor: %i", antecessor);
    return 0;
}
