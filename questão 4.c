#include <stdio.h>

int main()
{
    int num;
    for(num=1; num<=100; num++)
    {
        if(num%2 == 1)
        {
            printf("%i", num);
        }
    }

    return 0;
}
