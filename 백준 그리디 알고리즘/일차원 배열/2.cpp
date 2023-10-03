#include <iostream>
#include <algorithm>

int main()
{
    int n, arr_size;
    int *array;

    scanf("%d %d", &arr_size, &n);
    array = new int[arr_size];

    for(int i=0; i<arr_size; ++i)
    {
        scanf("%d", &array[i]);
    }

    for(int i=0; i<arr_size; ++i)
    {
        if(array[i] < n)
        {
            printf("%d ", array[i]);
        }
    }
    
    delete[] array;

    return 0;
}