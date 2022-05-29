#include <stdio.h>
#define TF 5

int main()
{
	int vet[TF], num, pos, i, elem, TL=0, posicao, aux, j;
	
	printf("Digite o numero: \n");
	scanf("%d", &num);
	
	while(num>0 && TL<TF-1)
	{
		vet[TL] = num;
		TL++;
		
		
		if(TL<TF-1)
		{
			printf("Digite o numero: \n");
			scanf("%d", &num);
		}
	}
	printf("Digite a posição: \n");
	scanf("%d", &posicao);
	
	printf("Digite o numero do elemento: \n");
	scanf("%d", &elem);
	
	for(j=TL; j<TF;j++)
	{
		aux = vet[posicao];
		vet[posicao] = elem;
		vet[j] = aux;
			
	}
	
	for(i=0; i<TF; i++)
		printf("%d ", vet[i]);
	
}
