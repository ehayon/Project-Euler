#include <stdio.h>
#include <stdlib.h>

int main(int args, char** argv)
{
    int sum1 = 0;
    int sum2 = 0;
    int x = 1;
    while(x <= 100)
    {
        sum1 += x*x;
        sum2 += x;
        x++;
    }
    sum2 *= sum2;
    printf("Difference of the sums: %d\a\n", sum2-sum1);
    return 0;
    
}