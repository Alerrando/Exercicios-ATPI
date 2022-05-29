#include <stdio.h>

int main()
{
	int vet[5], i;
	
	for(i = 0; i<5; i++)
	{
		printf("Digite o %do, numero:\n", i+1);
		scanf("%d", &vet[i]);
	}
	
	for(i=0; i<5; i++)
		if(i<4)
			printf("%d, ", vet[i]);
		else
			printf("%d", vet[i]);
}



