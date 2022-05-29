#include <stdio.h>
#define TF 5
#define TFV 10

void LeVetores (int vet1[TF], int vet2[TF])
{
	int i;
	
	for(i=0; i<TF; i++)
	{
		printf("Digite o %d numero no vetor 1: ", i+1);
		scanf("%d", &vet1[i]);
	}
	printf("\n");
	
	for(i=0; i<TF; i++)
	{
		printf("Digite o %d numero no vetor 2: ", i+1);
		scanf("%d", &vet2[i]);
	}
}

void enviar (int vet1[TF], int vet2[TF], int vet3[TFV])
{
	int i;
	
	for(i=0; i<TF; i++)
	{
		if(vet1[i] < vet2[i])
			vet3[i] = vet1[i];
		else
			vet3[i] = vet2[i];
	}
}

void Imprimir (int vet3[TF*2])
{
	int i;
	
	for(i=0; i<TFV; i++)
		printf("%d ", vet3[i]);
		
}


void exc ()
{
	int vet1[TF], vet2[TF], vet3[TFV];
	
	LeVetores ( vet1, vet2);
	enviar (vet1, vet2, vet3);
	Imprimir (vet3);
}


main ()
{
	exc();
	
}
