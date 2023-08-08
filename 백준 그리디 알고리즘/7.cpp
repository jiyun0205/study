#include <string>
#include <cctype>  // islower
#include <iostream>

int main()
{
    std::string id[2] = {"joonas", "backjoon"};
    char input[50];

    std::cin >> input;

    std::string str(input);
    std::string exist = "??!";

    for (int i = 0; i < str.size(); i++)
    {
        if (std::islower(input[i]))
        {
            std::cout << str + exist << std::endl;
            break;
        }
    }
    return 0;
}