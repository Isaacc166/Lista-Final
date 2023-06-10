#include <stdio.h>

int main()
{
    float V1;
    float V2;
    float V3;
    float pv;
    float sv;
    float tv;

    printf("\nDigite o V1: ");
    scanf("%f", &V1);
    
      printf("\nDigite o V2: ");
    scanf("%f", &V2);
    
      printf("\nDigite o V3: ");
    scanf("%f", &V3);
    
    if(V1 >= V2 && V1 >= V3)
    
    {
        tv=V1;
    }
    
    else if(V2 >= V1 && V2 >= V3)
    {
        tv=V2;
    }
    else
    {
        tv =V3;
    }
    
    if(V1 <= V2 && V1 <= V3)
    
    {
        pv=V1;
    }
    
    else if(V2 <= V1 && V2 <= V3)
    {
        pv=V2;
    }
    
    else
    
    {
        pv = V3;
    }
    if((V1 >= V2 && V1 <= V3) || V1 <= V2 && V1 >= V3)
    {
        sv = V1;
    }
    else if ((V2 >= V1 && V2 <= V3) || V2 <= V1 && V2 >= V3)
    {
        sv = V2;
    }
    else
    {
        sv = V3;
    }


printf("%f %f %f", pv, sv, tv);

    return 0;
}
