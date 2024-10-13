#include <iostream>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int x,y,w,h;
    std::cin >> x >> y >> w >> h;
    std::pair<int,int> minmax = std::minmax({x,y,w-x,h-y});
    int min = minmax.first;
    std::cout << min;

    return 0;
}