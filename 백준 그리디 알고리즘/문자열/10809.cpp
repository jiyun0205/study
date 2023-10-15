#include <iostream>
#include <cstring>

int main()
{
    char a[100];
    int n[26], index;
    memset(n, -1, sizeof(n));

    scanf("%s", a);

    for(int i=0; i<strlen(a); ++i)
    {
        index = a[i] - 'a';

        if(n[index] == -1)
        {
            n[index] = i;
        }
        else continue;
    }

    for(int i=0; i<26; ++i)
    {
        printf("%d ", n[i]);
    }

    return 0;
}