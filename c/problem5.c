#include <stdio.h>
#include <stdlib.h>

int main(int args, char** argv) {
    int maximum = 1;
    int x = 0;
    int done = 0;
    while(done != 1) 
    {
        for(x = 2; x <= 20; x++) 
        {
            if(maximum % x != 0) 
            {
                maximum++;
                break;
            }
            if (x == 20) {
                done = 1;
            }
        }
    }
    printf("%d\a\n", maximum);
}    
