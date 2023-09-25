#include <stdio.h>
#include <math.h>

int main (void) 
{
    long long int a,r, n;
   
    scanf("%ld %ld %ld", &a, &r, &n);

    for(int i=1; i< n; i++)
    {
        a*= r;
    // printf("%d\n", a);
    }

    printf("%lld", a);

    return 0;
}