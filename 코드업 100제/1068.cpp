#include <stdio.h>

int main (void) 
{
    int a, b, c;

    scanf("%d", &a);

    if(0 <= a && a < 40)
    {
        printf("D\n");
    }

    else if(a<70)
    {
        printf("C\n");
    }

    else if(a<90)
    {
        printf("B\n");
    }

    else if(a<=100)
    {
        printf("A\n");
    }
   
    return 0;
}