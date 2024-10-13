#include <iostream>
#include <cstring>
#include <stdio.h>

int main()
{
    std::string s;

    while(1)
    {
        getline(std::cin, s);

        if(s == "" ) break;
        std::cout << s << std::endl;
    }

    return 0;
}