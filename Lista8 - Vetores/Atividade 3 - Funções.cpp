#include <stdio.h>
#define TF 10

void Levetor(int vet1[TF])
{
	int i;
	
	for(i=0; i<TF; i++)
	{
		printf("Digite o %d do vetor 1: ", i+1);
		scanf("%d", &vet1[i]);
	}
}

void exibir(int vet1[TF], int vet2[TF])
{
	int i, d=TF, e=0;
	
	for(i=0; i<TF; i++)
	{
		if(vet1 > 0)
		{
			vet2[d] = vet1[i];
			d--;
		}
		else
		{
			vet2[e] = vet1[i];
			e++;
		}
	}
	
	for(i=0; i<TF; i++)
		printf("%d ", vet2[i]);
}

exc(void)
{
	int vet1[TF], vet2[TF], i, d;
	
	Levetor(vet1);
	exibir(vet1, vet2);
}

int main()
{
	exc();
}
