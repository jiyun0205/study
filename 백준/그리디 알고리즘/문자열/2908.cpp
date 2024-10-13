#include <iostream>
#include <algorithm>
#include <cstring>

int main()
{
    std::string a, b;
    std::cin >> a >> b;
    
    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());

    int n = std::atoi(a.c_str());
    int m = std::atoi(b.c_str());

    if(n>m) printf("%d", n);
    else printf("%d", m);
    return 0;
}