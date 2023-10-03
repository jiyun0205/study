#include <iostream>
#include <algorithm>

int main()
{
    int n, arr_size;
    int *array;

    scanf("%d", &arr_size, &n);
    array = new int[arr_size];

    for(int i=0; i<arr_size; ++i)
    {
        scanf("%d", &array[i]);
    }

    std::pair<int*, int*> minmax = std::minmax_element(array, array + arr_size);
    std::cout << *(minmax.first) << std::endl;
    std::cout << *(minmax.second) << std::endl;

    delete[] array;

    return 0;
} 