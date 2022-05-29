#include<stdio.h>
#define TF 10

int main()
{
	int vetor[TF], vetor2[TF], i=0, j=0, num, aux=0;
	
	for(i=0; i<TF; i++)
	{
		printf("Digite um numero:\n");
		scanf("%d",&vetor[i]);
	}
	for(i=0; i<TF-1 ;i++)
	{
		for(j=1+i; j<TF ;j++)
		{
			if(vetor[i] > vetor[j])
			{
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
	for(i=0; i<TF ;i++)
		printf("%d ",vetor[i]);
}
