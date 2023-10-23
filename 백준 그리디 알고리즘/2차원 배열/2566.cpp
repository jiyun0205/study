#include <iostream>
#include <algorithm>

int main() 
{
    int arr[9][9] = {0};

    int rowIndex = 0;
    int colIndex = 0;

    for(int i=0; i<9; ++i)
    {
        for(int j=0; j<9; ++j)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int max = *(std::max_element(&arr[0][0], &arr[8][8]));

    for(int i=0; i<9; ++i)
    {
        for(int j=0; j<9; ++j)
        {
            if(arr[i][j] == max)
            {
                rowIndex = i+1;
                colIndex = j+1;
            }
        }
    }

    printf("%d\n", max);
    printf("%d %d", rowIndex, colIndex);

    return 0;
}