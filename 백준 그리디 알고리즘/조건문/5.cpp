#include <stdio.h>

int main()
{
    int H, M;
    scanf("%d %d", &H, &M);

    int new_M = M - 45;

    if(new_M < 0)
    {
        H -=1;

        if(H < 0)
        {
            H = 23;
        }

        new_M = 60 + new_M;
    }

    printf("%d %d", H, new_M);
    
    return 0;
}