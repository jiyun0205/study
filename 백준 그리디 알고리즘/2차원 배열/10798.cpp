#include <iostream>
#include <string>

int main() 
{
    std::string arr[5];

    for(int i=0; i<5; ++i)
    {
       std::cin >> arr[i];
    }

	for (int j=0; j<15; ++j) 
    {
		for (int i=0; i<5; ++i) 
        {
			if(j < arr[i].size())
            {
                std::cout << arr[i][j];
            }
		}
	}
    
    return 0;
}