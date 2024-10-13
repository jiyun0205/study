#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, x, y;
    std::vector <int> x_i;
    std::vector <int> y_i;

    std::cin >> n;

    for (int i=0; i<n; ++i)
    {
        std::cin >> x;
        std::cin >> y;
        x_i.push_back(x);
        y_i.push_back(y);
    }

    int x_max = *max_element(x_i.begin(), x_i.end());
    int x_min = *min_element(x_i.begin(), x_i.end());
    int y_min = *min_element(y_i.begin(), y_i.end());
    int y_max = *max_element(y_i.begin(), y_i.end());

    std::cout << (x_max-x_min)*(y_max-y_min);

    return 0;
}