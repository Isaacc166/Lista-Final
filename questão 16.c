 #include <stdio.h>
#include <math.h>

int main()
{
    float num;
    float raiz;
    float quadrado;
    
    printf("Digite um número: ");
    scanf("%f", &num);

    if (num > 0)
    {
     raiz = sqrt(num);
     printf("Raiz: %f ", raiz);
    }
    else
    {
        quadrado = num*num;
        printf("Quadrado: %f", quadrado);
    }
    
    return 0;
}
