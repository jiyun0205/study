#include <iostream>
#include <algorithm>

int main()
{
    int N; // 수
    int B; // 진법
    std::string result;
    std::cin >> N >> B;

    while (N != 0)
    {
        int remainder = N%B;
        if (remainder >= 10)
        {
            result += remainder - 10 + 'A';
        }
        else
        {
            result += remainder + '0';
        }
        N /= B;
    }

    std::reverse(result.begin(), result.end());
    std::cout << result << std::endl;
    return 0;
}