#include <iostream>
#include <unordered_set>

int main() 
{
    int n;
    int arr[10] = {0};

    for(int i=0; i<10; ++i)
    {
        scanf("%d", &n);
        arr[i] = n%42;
    }

    std::unordered_set<int> uniqueElements(arr, arr + 10);

    int count = uniqueElements.size();

    printf("%d", count);
 
    return 0;
}