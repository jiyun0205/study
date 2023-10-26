#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() 
{
    int n, k;
    std::vector <int> factor;
    
    scanf("%d %d", &n, &k);

    if (n <= 0 || n > 10000 || k <= 0 || k > n) return 1;
    

    int root = sqrt(n);

    if(pow(root,2) == n)
    {
        factor.push_back(1);
        factor.push_back(sqrt(n));
        factor.push_back(n);
    }

    else
    {
        for (int i=1; i<=n; ++i)
        {
            if(n%i == 0)
            {
                factor.push_back(n/i);
            }

            else factor.push_back(0);
        }

        std::reverse(factor.begin(), factor.end());  
    }

    factor.erase(std::unique(factor.begin(), factor.end()), factor.end());
    std::cout << factor[k-1] << std::endl;

    return 0;
}

