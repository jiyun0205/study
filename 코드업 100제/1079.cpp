#include <stdio.h>

int main (void) 
{
    char a = 'a';

    while(a != 'q')
    {
        scanf("%c ", &a);
        printf("%c\n", a);
    }
    return 0;
}