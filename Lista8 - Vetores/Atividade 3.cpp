#include<stdio.h>
#define TF 10

int main()
{
	int vet1[TF],vet2[TF],i,e=0,d=TF;
	
	for(i=0; i<TF; i++)
	{
		printf("Digite um numero:\n");
		scanf("%d",&vet1[i]);
	}
	
	for(i=0; i<TF; i++)
	{
		if(vet1[i]>0)
		{
			vet2[d]=vet1[i];
			d--;
		}
		else
		{
			vet2[e]=vet1[i];
			e++;
		}
	}
	
	for(i=0; i<TF; i++)
	{
		printf("%d ",vet2[i]);
	}
}
