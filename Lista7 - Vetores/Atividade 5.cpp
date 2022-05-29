#include <stdio.h>
#define TH 10

int main()
{
	int quantV[TH],i=0 , totalP=0;
	float precoV[TH], valorToV;
	
	for(i=0; i<TH; i++)
	{
		printf("Vendedor %d\n", i+1);
	
		printf("Digite quantas peças voce vendeu: \n");
		scanf("%d", &quantV[i]);
	
		printf("Digite o valor das pecas: \n");
		scanf("%f", &precoV[i]);
	}
	
	for(i=0; i<TH; i++)
	{
		totalP = totalP + quantV[i];
		valorToV = quantV[i]*precoV[i];
		
		printf("O %d vendedor, vendeu o total de %.2f\n", i+1, valorToV);
	}
	printf("O total de pecar vendidas por todos os vemdedores foi %d\n", totalP);
}
