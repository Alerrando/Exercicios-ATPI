#include <stdio.h>
#define TF 9

void Levetor(int vet[TF])
{
	int i;
	
	for(i=0; i<TF; i++)
	{
		printf("Digite o numero %d do vetor: ", i+1);
		scanf("%d", &vet[i]);
	}
}

void Calculo(int vet[TF])
{
	int i;
	
	for(i=0; i<vet[i] / 2; i++)
	{
		if(vet[i] % i ==0)
		{
			printf("O numero %d na posicao %d eh primo", vet[i], i);
		}
	}
}

void exc(void)
{
	int vet[TF], i;
	
	Levetor(vet);
	Calculo(vet);
}

int main()
{
	exc();
}
