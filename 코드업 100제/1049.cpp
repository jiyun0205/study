#include <stdio.h>

int main (void) 
{
    int a, b;

    scanf("%d %d", &a, &b);
   
    if (a>b) printf("1");
    if (a<=b) printf("0");

    return 0;
}