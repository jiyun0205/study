#include <stdio.h>
#include <math.h>

int main (void) 
{
    int a;
    int sum = 0;
    int i =1;
    scanf("%d", &a);

    while(sum < a)
    {
        sum += i;
        i++;
    }
    printf("%d", sum);

    return 0;
}