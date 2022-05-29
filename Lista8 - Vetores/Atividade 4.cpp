#include <stdio.h>
#define TF 5

int main()
{
	int vet1[TF], vet2[TF], vUniao[TF*2], TLI=0, TLU=0, vIntersecao[TF],i, pos;
	
	//leitura do vet1
	for(i=0; i<TF; i++)
	{
		printf("Digite o %d numero do vetor1: \n", i+1);
		scanf("%d", &vet1[i]);
	}
	
	//leitura do vet2
	for(i=0; i<TF; i++)
	{
		printf("Digite o %d numero do vetor2: \n", i+1);
		scanf("%d", &vet2[i]);
	}
	
	//Uniao
	for(i=0; i<TF; i++)
	{
		pos=0;
		while(pos<TLU && vet1[i]!=vUniao[pos])
			pos++;
		
		
		if(pos==TLU)
		{
			vUniao[TLU] = vet1[i];
			TLU++;
		}
	}
	
	for(i=0; i<TF; i++)
	{
		pos=0;
		while(pos<TLU && vet2[i]!=vUniao[pos])
			pos++;
				
		if(pos==TLU)
		{
			vUniao[TLU] = vet2[i];
			TLU++;
		}
	}
	
	//Interseção
	for(i=0; i<TF; i++)
	{   //Buscando o vet1[i] no vet2
		pos=0;
		while(pos<TF && vet1[i]!= vet2[pos])
			pos++;
		
		if(pos<TF) //encontrou o vet1[i] no vet2
		{	//buscando o vet1[i] no vIntersecao
			pos=0;
			while(pos<TLI && vet1[i] != vIntersecao[pos])
				pos++;
			
			
			if(pos == TLI) //se não encontrar o vet[i] no Vintersecao
			{
				vIntersecao[TLI] =  vet1[i];
				TLI++;
			}
		}
	}
	
	//Exibe os vetores resultados
	printf("Resultado da União: \n");
	for(i=0; i<TLU; i++)
		printf("%d, ", vUniao[i]);
		
	printf("\nResultado da Intersecao: \n");
	for(i=0; i<TLI; i++)
		printf("%d ", vIntersecao[i]);
	
}
