#include <stdio.h>

int main (void) 
{
    int n, a;
    scanf("%d", &n);

reload:
    if(n-- != 0) 
    {
        scanf("%d", &a);
        printf("%d\n", a);
        goto reload;
    }

    return 0;
}