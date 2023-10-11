#include <iostream>

int main()
{
    std::string input;
    int n;
    std::cin >> input >> n;
    std::cout << input[n-1] << std::endl;

    return 0;
}