#include <iostream>
#include <string>

int main() 
{
    std::string letters[] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

    std::string input;
    std::cin >> input;

    int result = 0;
    for (char ch : input) 
    {
        for (int i = 0; i < sizeof(letters) / sizeof(letters[0]); ++i) 
        {
            if (letters[i].find(ch) != std::string::npos)  // 찾지 못하면 std::string::npos 반환(-1)
            {
                result += i + 3;
                break;
            }
        }
    }

    std::cout << result << std::endl;

    return 0;
}