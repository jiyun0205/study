#include <iostream>
#include <vector>

void check(int a, std::vector<int>& arr)
{
    int i=2;

    while(i<=a)
    {
        if(a%i == 0)
        {
            arr.push_back(i);
            a /= i;
        }
        else
        {
            ++i;
        }
    }
}


int main()
{
    int N;
    scanf("%d", &N);
    std::vector<int> arr;

    check(N, arr);

    for (auto e : arr)
    {
        std::cout << e << std::endl;
    }
    return 0;
}