#include <iostream>

int main()
{
    int n;
    int sum = 0;
    
    std::cin >> n;
    char *arr = new char[n];

    std::cin >> arr;

    for(int i=0; i<n; ++i)
    {
        sum += arr[i] - '0';
    }

    std::cout << sum  << std::endl;
    delete[] arr;
    
    return 0;
}