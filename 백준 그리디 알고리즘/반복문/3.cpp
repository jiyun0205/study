#include <stdio.h>

int main()
{
    int a, n;
    a = 0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        a += i;
    }

    printf("%d\n", a);

    return 0;
}