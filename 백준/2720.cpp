#include <iostream>
#include <algorithm>

int main()
{
    int T, C; // T는 case 수, 100센트 = 1달러
    int arr[4] = {25, 10, 5, 1}; // q, d, n, p 센트
    
    std::cin >> T;
    
    while(T--)
    {
        std::cin >> C;

        for(int i=0; i<4; ++i)
        {
            std::cout << C/arr[i] << ' ';
            C %= arr[i];
        }
        std::cout << std::endl;
    }

    return 0;
}