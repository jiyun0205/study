#include <iostream>
#include <cmath>

int main()
{
    int n; // n 번째
    std::cin >> n;  
  
    int p = pow(2,n)+1;
    std::cout << (int)pow(p,2);

    return 0;
}