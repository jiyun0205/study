#include <stdio.h>

int main (void) 
{
    int sum =0;
    int a;
    int b;
    scanf("%d", &a);

    for(int i=0; sum<a; i++)
    {
        sum += i;
        b = i;
    }
    printf("%d", b);

    return 0;
}