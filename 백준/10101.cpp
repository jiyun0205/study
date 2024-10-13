#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a, b, c;
    std::cin >> a >> b >> c;

    int sum = a + b + c;
    
    if( a == 60 && b == 60 && c == 60)
    {
        std::cout << "Equilateral";
    }

    else if (sum == 180)
    {
        if (a==b || a==c || b==c) std::cout << "Isosceles";
        else std::cout << "Scalene";
    }

    else std::cout << "Error";
   

    return 0;
}