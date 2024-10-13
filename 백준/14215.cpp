#include <iostream>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int arr[3];

    std::cin >> arr[0] >> arr[1] >> arr[2];
    std::sort(arr, arr+3);

    if(arr[0]+arr[1] > arr[2])
    {
        std::cout << arr[0]+arr[1]+arr[2] << std::endl;
    }
    else
    {
        std::cout << (arr[0]+arr[1])*2-1 << std::endl;
    }
    
    return 0;
}