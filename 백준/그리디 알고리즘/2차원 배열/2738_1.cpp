#include <iostream>
#include <vector>

int main() 
{
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> arr1(n, std::vector<int>(m));
    std::vector<std::vector<int>> arr2(n, std::vector<int>(m));

    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < m; ++j) 
        {
            std::cin >> arr1[i][j];
        }
    }

    for (int i = 0; i < n; ++i)
     {
        for (int j = 0; j < m; ++j) 
        {
            std::cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < m; ++j) 
        {
            std::cout << arr1[i][j] + arr2[i][j] << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}