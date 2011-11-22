#include <stdio.h>
#include <stdlib.h>

int main(int args, char** argv) 
{
    int a = 1; 
    int b = 1; 
    int c = 1;
    int n = 0; 
    for(a = 1; a <= 500; a++) 
    {
        for(b = 1; b <= 500; b++) 
        {
            for(c = 1; c <= 500; c++)
            {
                if (a*a + b*b == c*c) 
                {
                    if(a+b+c == 1000) 
                    {
                        printf("Finished: %d\n", a*b*c);
                    }
                }
            }
        }
    }
}