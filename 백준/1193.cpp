#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    int n;
    int i = 1; // 입력 n이 몇 번째 대각선에 있나 구하기

    std::cin >> n;

    while(n>i)
    {
        n -= i;
        ++i;
    } // 줄 찾았으면 분수 찾기

    if (i%2 == 1)
    {
        std::cout << i+1-n << "/" << n << std::endl;
    }
    else
    {
        std::cout << n << "/" << i+1-n << std::endl;
    }

    return 0;
}