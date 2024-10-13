#include <iostream>

int main() 
{
    int num, sum = 0;
    int x, y;
    int arr[100][100] = {0};

    scanf("%d", &num);

    while(num--)
    {
        scanf("%d %d", &x, &y);

        for(int i=y; i<y+10; ++i)
        {
            for(int j=x; j<x+10; ++j)
            {
                if(!arr[i][j])
                {
                    arr[i][j] = 1;
                    ++sum;
                }
            }
        }
    }
    printf("%d", sum);
    return 0;
}