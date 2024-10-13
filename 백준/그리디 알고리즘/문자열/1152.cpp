#include <iostream>
#include <stdio.h>
#include <string>

int main()
{
    std::string s;
    int a = 1;

    getline(std::cin, s);

    for(int i=0; i<s.length(); ++i)
    {
        if(s[i] == ' ')
        {
            ++a;
        }
    }

    if(s[0] == ' ')
    {
        --a;
    }

    if(s[s.length()-1] == ' ')
    {
        --a;
    }
    printf("%d", a);

    return 0;
}