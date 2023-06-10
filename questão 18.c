#include <stdio.h>

int main()
{
    float vv1;
    float vv2;
    float valor;
    
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    
    if (valor < 20)
    {
        vv1 = (45*valor)/100 + valor;
        
       printf("Valor de venda: %f", vv1);
    }
    else
    {
        vv2 = (30*valor)/100 + valor;
        
       printf("Valor de venda: %f", vv2);

    }

    return 0;
}
