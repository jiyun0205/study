#include <stdio.h>

int main (void) 
{
    int a;
    scanf("%X", &a);
    for(int i=1; i<=a; i++)
    {
        if(i==3 || i==6 || i==9)
        {
            printf("X ");
        }
        else printf("%d ", i);
    }
    return 0;
}