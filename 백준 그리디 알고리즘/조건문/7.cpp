#include <stdio.h>
#include <iostream>

int main()
{
    int a, b, c;
    scanf("%d %d %d" , &a, &b, &c);

    int num = 0;
    int money = 0;

    if(a==b && b==c)
    {
        money = 10000 + (a*1000);
    }

    else if(a==b || b==c || a==c)
    {
        if(a==b) money = 1000 + (a*100);
        else money =1000 + (c*100);
    }

    else
    {
        int max = ((a > b) && (a > c)) ? a : ((b > a) && (b > c)) ? b : c;
        money = max*100;
    }
    
    printf("%d", money);

    return 0;
}