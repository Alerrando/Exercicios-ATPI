#include <stdio.h>
#define TF 5
#define TH 10

int main()
{
	int vet1[TF], vet2[TF], vet3[TH], i, cont;
	
	for(i=0; i<5; i++)
	{
		printf("Insira o %d numero do primeiro vetor:\n", i+1);
		scanf("%d", &vet1[i]);
	}
	
	for(i=0; i<5; i++)
	{
		printf("Insira o %d  numero do segundo vetor:\n", i+1);
		scanf("%d", &vet2[i]);
	}
	
	for(i=0, cont=0; i<TF; i++)
	{
		vet3[i*2] = vet1[i];
		
		
		vet3[i*2+1] = vet2[i];
		
	}
	
	for(i=0; i<TH; i++)
		printf("%d, ", vet3[i]);
}

