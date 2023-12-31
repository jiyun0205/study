#include <iostream>

int main() 
{
    int n, m;
    scanf("%d %d", &n, &m);

    int** arr1 = new int*[n];
    int** arr2 = new int*[n];

    for(int i=0; i<n; ++i)
    {
        arr1[i] = new int[m];
        arr2[i] = new int[m];  
    }

    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            printf("%d ", arr1[i][j]+ arr2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; ++i) 
	{
		delete[] arr1[i];
		delete[] arr2[i];
	}

	delete[] arr1;
	delete[] arr2;

    return 0;
}
