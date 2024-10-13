#include <iostream>
#include <string>
#include <cmath>

int main() 
{
    std::string N;
    int B;
    int result = 0;
    std::cin >> N >> B;

    int len = N.length();
   
    for(int i=0; i<len; i++)
    {
        if( N[i]>='0' && N[i]<='9')
        {
            result += (N[i]-'0')*std::pow(B, len-1-i);
        }
        else
        {
            result += (N[i]-'A'+10)*std::pow(B, len-1-i);
        }
    }
    std::cout << result << std::endl;

    return 0;
}