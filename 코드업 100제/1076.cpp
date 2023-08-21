#include <stdio.h>

int main (void) 
{
    char n = 'a';
    char m;

    scanf("%c", &m);

    do
    {
        printf("%c\n", n);
        n++;
    } 
    while (n <= m);

    return 0;
}