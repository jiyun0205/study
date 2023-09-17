#include <stdio.h>

int main()
{
    int total, num, a, b;
    int sum = 0;
    
    scanf("%d", &total);
    scanf("%d", &num);

    for(int i=0; i<num; i++)
    {
        scanf("%d %d", &a, &b);
        sum += (a*b);
    }

    if(sum == total)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}