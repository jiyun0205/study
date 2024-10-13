#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int a, b, v;
   
    std::cin >> a >> b >> v;

    if ((v-b) % (a-b) == 0)
    {
        std::cout << (v-b)/(a-b) << std::endl;;
    }
    else
    {
        std::cout << (v-b)/(a-b)+1 << std::endl;;
    }

    return 0;
}