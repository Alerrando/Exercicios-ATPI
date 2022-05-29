#include <stdio.h>
#define TF 5

int main()
{
	int vet[TF], vet2[TF], vet3[TF], TLI=0, i, pos;
	
	for(i=0; i<TF-1; i++)
	{
		printf("Digite o numero %d do vetor 1: \n", i+1);
		scanf("%d", &vet[i]);
	}
	
	for(i=0; i<TF-1; i++)
	{
		printf("Digite o numero %d do vetor 2: \n", i+1);
		scanf("%d", &vet2[i]);
	}
	
	for(i=0; i<TF-1; i++)
	{
		pos=0;
		while(pos<TF-1 && vet[i]!=vet2[pos])
			pos++;
		
		if(pos<TF-1)
		{
			pos=0;
			while(pos<TLI && vet[i]!= vet3[pos])
				pos++;
				
			if(pos==TLI)
			{
				vet3[TLI] = vet[i];
				TLI++;
			}
		}
	}
	printf("\nResultado da Intersecao: \n");
	for(i=0; i<TLI; i++)
		printf("%d ", vet3[i]);
}

