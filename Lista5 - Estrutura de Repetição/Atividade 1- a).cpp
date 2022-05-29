#include <stdio.h>

int main()
{
	float S=0;
	int N, D;
	for (N=1; N<=10; N++, D++)
		S = S + (float) N/(N*N);
	
	printf("S = %.2f\n", S);
	
	
	
}
