#include <iostream>
#include <algorithm>

int main()
{
    int n, arr_size;
    int *array;

    scanf("%d", &arr_size);
    array = new int[arr_size];

    for(int i=0; i<arr_size; i++)
    {
        scanf("%d ", &array[i]);
    }

    scanf("%d", &n);

    std::cout << std::count(array, array + arr_size, n);

    delete[] array;

    return 0;
}