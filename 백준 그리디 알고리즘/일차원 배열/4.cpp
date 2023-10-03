#include <iostream>
#include <algorithm>

int main()
{
    int n, array[9];
  
    for(int i=0; i<9; ++i)
    {
        scanf("%d", &array[i]);
    }

    int max = *(std::max_element(std::begin(array), std::end(array)));
    std::cout << max << std::endl;

    auto it = std::find(std::begin(array), std::end(array), max);

    int index = std::distance(array, it);
    std::cout << index+1 << std::endl;
    
    return 0;
} 