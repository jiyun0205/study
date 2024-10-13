#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long n = 0;
    std::cin >> n;

    std::cout << ((n-1)*n)/2 << "\n" << 2 << std::endl;
    return 0;
}