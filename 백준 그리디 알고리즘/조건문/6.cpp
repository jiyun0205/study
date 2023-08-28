#include <stdio.h>

int main()
{
    int A, B, C;
    int count = 0;
    scanf("%d %d\n%d", &A, &B, &C);

    B += C;

    if(B > 59)
    {
        count = B/60;
        A += count;
        B -= (60*count);
    }

    if(A > 23)
    {
        A -= (A/24)*24;
    }

    printf("%d %d", A, B);
    
    return 0;
}