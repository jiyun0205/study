#include <stdio.h>
#include <iostream>

int main()
{
    int n;
    std::cin.tie(0);
    std::ios_base::sync_with_stdio(false);

    std::cin >> n;

    for(int i=1; i<=n; ++i)
    {
        for(int j=i+1; j<=n; ++j)
        {
            std::cout << " ";
        }

        for(int k=1; k<=i; ++k)
        {
            std::cout << "*";
        }
        
        std::cout<< "\n";
    }

    return 0;
}