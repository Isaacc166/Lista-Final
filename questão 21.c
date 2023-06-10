int N1;
    int N2;
    int N3;
    
    printf("\nDigite o N1: ");
    scanf("%i", &N1);
    
    printf("\nDigite o N2: ");
    scanf("%i", &N2);
    
    printf("\nDigite o N3: ");
    scanf("%i", &N3);
    
    
    if( N1 < (N2+N3) && N2 < (N1+N3) && N3 < (N1+N2) )
    {
        printf("\n\nÉ um triângulo...");
        
        if (N1==N2 && N1==N3 && N2==N3)
        {
            printf("\n\nEsse é um triângulo equilátero...");
        }
        else if (N1 != N2 && N1 != N3 && N2 != N3)
        {
            printf("\n\nEsse é um triângulo escaleno...");
        }
        else
        {
            printf("\n\nEsse é um triângulo isósceles...");
        }
    }
    else
    {
       printf("\n\nIsso não é um triângulo...");
    }
