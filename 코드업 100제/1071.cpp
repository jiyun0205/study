#include <stdio.h>

int main (void) 
{
    int a;
    
reload:
    scanf("%d", &a);
    
    if(a!=0)
    {
        printf("%d\n", a);
        goto reload;
    }

    return 0;
}