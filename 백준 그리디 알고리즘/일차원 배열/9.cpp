#include <iostream>
#include <algorithm>

int main()
{
    int n, m, a, b;
    int *array;

    scanf("%d %d", &n, &m);
    array = new int[n+1];

    for(int i=1; i<=n; ++i)
    {
        array[i] = i;
    }

    for(int i=0; i<m; ++i)
    {
        scanf("%d %d", &a, &b);
        std::reverse(array+a, array+b+1);
    }
 
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",array[i]);
    }

    delete[] array;

    return 0;
}