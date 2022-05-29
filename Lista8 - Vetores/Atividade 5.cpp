#include <stdio.h>
#define TF 5

int main()
{
	int vet[TF], num, i, x, TL=0, posicao, pos;
	
	printf("Digite um numero: \n");
	scanf("%d", &num);
	
	while(num>0 && TL<TF-1)
	{
		vet[TL] = num;
		TL++;
		
		if(TL<TF-1)
		{
			printf("Digite um numero: \n");
			scanf("%d", &num);
		}
	}
	printf("Digite o vetor que você quer pegar remanejar: \n");
	scanf("%d", &num);
	
	pos=0;
	while(pos<TL && num!=vet[pos])
		pos++;
	
	for(i=pos; i<TL-1; i++)
		vet[i] = vet[i+1];
	
	for(i=0; i<TL-1; i++)
		printf("%d ", vet[i]);
	
}
