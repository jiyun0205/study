#include <stdio.h>

int main (void) 
{
    int n = 2;

    while(n != 0)
    {
        scanf("%d", &n);
        if(n != 0)
        {
            printf("%d\n", n);
        }
    }

    return 0;
}