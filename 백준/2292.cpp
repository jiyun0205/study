#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    int n;
    int count = 0;

    std::cin >> n;
  
    if(n==1) count = 1;

    for(int i=2; i<=n; ++count)
    {
        i += count*6;
    }

    std::cout << count << std::endl;

    return 0;
}