#include <iostream>

int main()
{
    std::string input;
    int n;

    std::cin >> n;

    while(n--)
    {
        std::cin >> input;
        std::cout << input[0]  << input[input.length()-1] << std::endl;
    }

    return 0;
}

