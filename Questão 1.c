#include <stdio.h>

int main()
{
    float r;
    float c;
    float d;  
    float A;
    
    
    printf("Digite um valor de raio: ");
    scanf("%f", &r);
    
    d= 2*r;
    c= 2*3.14*r;
    A= 3.14*r*r;
    
    printf("\nDiametro: %f", d);
    printf("\nComprimento: %f", c);
    printf("\nÁrea: %f", A);
    
    return 0;
}

