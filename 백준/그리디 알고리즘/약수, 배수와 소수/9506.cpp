#include <iostream>
#include <vector>

int main() 
{
    std::vector <int> factor;

    while(1)
    {
        int n, sum = 0;
        
        scanf("%d", &n);
        
        if(n == -1) break;

        for(int i=1; i<n; ++i)
        {
            if(n%i == 0)
            {
                factor.push_back(i);
                sum += i;
            }
        }

        if(n == sum)
        {
            std::cout << n << " = ";
            for(size_t i=0; i<factor.size(); ++i)
            {
                std::cout << factor[i];
                if (i < factor.size() - 1)
                {
                    std::cout << " + ";
                }
            }
            std::cout << std::endl;
        }

        else
        {
            std::cout << n << " is NOT perfect." << std::endl;
        }

        factor.clear();
        
    }

    return 0;
}