#include <stdio.h>
#include <math.h>

int main()
{
   
   float n1;
   float n2;
   float soma;
   float x;
   float y;
   float z;
   float d;
   
    printf("Digite o n1: ");
    scanf("%f", &n1);
    
    printf("Digite o n2: ");
    scanf("%f", &n2);
    
    soma= n1+n2;
    x= n1*n2*n2;
    y= n1*n1;
    z= sqrt(n1*n1+n2*n2);
    d= sin(n1-n2);
    
    printf("\n\nSoma: %f ",soma);
    printf("\n\nO produto do primeiro número pelo quadrado do segundo: %f", x);
    printf("\n\nO quadrado do primeiro número: %f", y);
    printf("\n\nA raiz quadrada da soma dos quadrados: %f", z);
    printf("\n\nO seno da diferença do primeiro número pelo segundo: %f", d);



    return 0;
}
