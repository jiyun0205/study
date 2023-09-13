#include <stdio.h>
#include <math.h>

int main (void) 
{
    int w,h,b;
    scanf("%d %d %d", &w,&h, &b); 
    printf("%.2f MB", (unsigned)(w*h*b)/(pow(2,20)*8));

    return 0;
}