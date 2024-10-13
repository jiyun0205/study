#include <iostream>

int main() 
{
    int n,m;
    int count = 0;
    
    scanf("%d\n", &n);
    
    while(n--)
    {
        scanf("%d", &m);
        bool flag = false;

        if (m == 1) continue;

        for(int i=2; i<m; ++i)
        {
            if(m%i == 0)
            {
                flag = true;
            }
        }

        if (!flag)
		{
			++count;
		}
    }

    printf("%d", count);

    return 0;
}