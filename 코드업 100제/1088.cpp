#include <stdio.h>
#include <math.h>

int main (void) 
{
    int a;
   
    scanf("%d", &a);

    for(int i=1; i<=a; i++)
    {
        if(i%3 == 0)
        {
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}