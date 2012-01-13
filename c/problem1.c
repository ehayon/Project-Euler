#include <stdio.h>
#include <stdlib.h>

int main(int args, char* argc)
{
	printf("Sum: %d\n", solution(999));
}

int solution(int k)
{	
	int sum = 0;
	if(k == 0) return 0;
	if(k % 3 == 0 || k % 5 == 0)
	{
		sum += k;
	}
	return sum + solution(k-1);

}