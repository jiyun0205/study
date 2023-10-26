#include <iostream>

int main() 
{
    int arr[9][9] = {0};

    int rowIndex, colIndex;
    int max = -1;

    for(int i = 0; i < 9; ++i)
    {
        for(int j = 0; j < 9; ++j)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < 9; ++i)
    {
        for(int j = 0; j < 9; ++j)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
                rowIndex = i+1;
                colIndex = j+1;
            }
        }
    }

    printf("%d\n", max);
    printf("%d %d", rowIndex, colIndex);

    return 0;
}
