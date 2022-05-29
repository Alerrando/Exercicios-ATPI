#include <stdio.h>
#define TF 7

int main()
{
	int vetor1[TF], vetor2[TF], vetor3[TF*2], TL1=0, TL2=0, TL3=0, i=0, j=0, num, pos, TL=0;
	
	//Leitura do vetor1 de forma ordenada usando TL1
	printf("Digite um numero do Vetor1: \n");
	scanf("%d", &num);
	
	while(num>0 && TL1<TF)
	{
		//busca da melhor posição
		pos=0;
		while(pos<TL1 && num>vetor1[pos])
			pos++;
			
		//remanejamento
		for(i=TL; i>pos; i--)
		vetor1[i] = vetor1[i-1];
		
		//insere o num
		vetor1[TL1] = num;
		TL1++;
		
		if(TL1<TF)
		{
			printf("Digite um numero do Vetor1: \n");
			scanf("%d", &num);
		}
	}
	
	//Leitura do vetor2 de forma ordenada usando TL2
	printf("Digite um numero do Vetor2: \n");
	scanf("%d", &num);
	
	while(num>0 && TL2<TF)
	{
		//busca da melhor posição
		pos=0;
		while(pos<TL2 && num>vetor2[pos])
			pos++;
			
		//remanejamento
		for(i=TL; i>pos; i--)
		vetor2[i] = vetor2[i-1];
		
		//insere o num
		vetor2[TL2] = num;
		TL2++;
		
		if(TL2<TF)
		{
			printf("Digite um numero do Vetor2: \n");
			scanf("%d", &num);
		}
	}
	
	//Merge do vetor1 com o vetor2 no vetor3
	i=j=0;
	while(i<TL1 && j<TL2)
	{
		if(vetor1[i] < vetor2[j])
		{
			vetor3[TL3] = vetor1[i];
			i++;
			TL3++;
		}
		else
		{
			vetor3[TL3] = vetor2[j];
			j++;
			TL3++;
		}
	}
	while(i<TL1)
	{
		vetor3[TL3] = vetor1[i];
		i++;
		TL3++;
	}
	while(j<TL2)
	{
		vetor3[TL3] = vetor2[j];
		j++;
		TL3++;
	}
	//Exibir o resultado
	for(i=0; i<TL3; i++)
		printf("%d ", vetor3[i]);
}
