#include <stdio.h>

int main()
{
    int num;
    for(num=1; num<=100; num++)
    {
        if(num%2 == 0)
        {
            printf("%i", num);
        }
    }

    return 0;
}
