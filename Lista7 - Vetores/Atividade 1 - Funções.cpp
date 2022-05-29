#include <stdio.h>
#define TF 5
#define TH 10

void Levetor(int vet1[TF], int vet2[TF])
{
	int i;
	
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
}

void Intercalacao(int vet1[TF], int vet2[TF], int vet3[TF])
{
	int i, cont;
	
	for(i=0, cont=0; i<TF; i++)
	{
		vet3[i*2] = vet1[i];
		
		
		vet3[i*2+1] = vet2[i];
		
	}
	
	for(i=0; i<TH; i++)
		printf("%d, ", vet3[i]);
}

void exc(void)
{
	int vet1[TF], vet2[TF], vet3[TF], i, cont=0;
	
	Levetor(vet1, vet2);
	Intercalacao(vet1, vet2, vet3);
}

int main()
{
	exc();
}

