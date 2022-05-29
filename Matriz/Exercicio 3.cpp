#include <stdio.h>
#include <locale.h>
#define TFC 5
#define TF 5

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int matVen[TF][TFC], soma, somaS, somaT, c, l;
	
	for(c=0; c<TFC; c++)
	{
		printf("Vendedor %d\n", c+1);
		for(l=0; l<TF-1; l++)
		{
			printf("Quantas vendas na semana %d você vendeu: \n", l+1);
			scanf("%d", &matVen[l][c]);
		}
		printf("---------------------------------------------------------\n");
	}
	
	for(c=0; c<TFC; c++)
	{
		soma=0;
		for(l=0; l<TF-1; l++)
			soma = soma+matVen[l][c];
		
		printf("A quantidade de vendas do vendedor %d no mês é %d\n", c+1, soma);
	}
	
	for(l=0; l<TF-1; l++)
	{
		somaS=0;
		for(c=0; c<TFC; c++)
			somaS = somaS+matVen[l][c];
		
		printf("A quantidade total de vendas na semana %d é %d\n", l+1, somaS);
	}
	
	for(c=0; c<TFC; c++)
	{
		for(l=0; l<TF-1; l++)
			somaT = somaT+matVen[l][c];
	}
	printf("A quantidade total de vendas mês é %d\n", somaT);
}

