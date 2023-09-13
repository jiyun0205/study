#include <stdio.h>
#include <math.h>

int main (void) 
{
    int h,b,c,s;
    scanf("%d %d %d %d", &h, &b, &c, &s);

    // h*b*c*s bit
    // 1 bit = 8Byte
    // 1MB = 1024 KB = 2^20 Byte = 2^20 * 8 bit
    
    printf("%.1f MB", (unsigned)(h*b*c*s)/(pow(2,20)*8));

    return 0;
}