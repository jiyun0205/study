#include <iostream>
#include <vector>

int main() 
{
    int n, k;
    std::vector <int> factor;
    
    scanf("%d %d", &n, &k);
    
    for(int i=1; i<=n; ++i)
    {
        if(n%i == 0)
        {
            factor.push_back(i);
        }
    }

    std::cout << factor[k-1] << std::endl;

    return 0;
}