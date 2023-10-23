#include <iostream>
#include <algorithm>

int main()
{
    int n, m;
    int *array;
    double sum = 0;

    scanf("%d", &n);

    array = new int[n];

    for(int i=0; i<n; ++i)
    {
        scanf("%d", &array[i]);
    }

    int max = *(std::max_element(array, array + n));

    for(int i=0; i<n; ++i)
    {
        double arr = array[i]/ static_cast<double>(max) * 100.0;
        sum += arr;
    }

    double average = sum/n;
    printf("%f", average);

    delete[] array;

    return 0;
}