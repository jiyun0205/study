#include <iostream>
#include <stdio.h>
#include <cstring>

int main()
{
    int a, b;
    char arr[20];

    scanf("%d", &a);

    for(int i=0; i<a; ++i)
    {
        scanf("%d %s", &b, &arr);

        for(int j=0; j<strlen(arr); ++j)
        {
            for(int k=0; k<b; ++k)
            {
                printf("%c", arr[j]);
            }
        }
         printf("\n");
    }
    
    return 0;
}