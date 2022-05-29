#include <stdio.h>
#define TF 10

int main()
{
	int vet[TF], TL=0, num, i, pos;
	
	printf("Digite um numero: \n");
	scanf("%d", &num);
	
	while(num>0 && TL<TF-1)
	{
		
		//Busca a melhor posição para inseriri o num
		pos=0;
	
		while(pos<TL && num>vet[pos])
		{
		pos++;
		}
		
		//Remanejamento
		for(i=TL; i>pos; i--)
		vet[i] = vet[i-1];
		
				
		//Insere o num
		vet[pos] = num;
		TL++;
		
		
		if(TL<TF-1)
		{
			printf("Digite um numero: \n");
			scanf("%d", &num);
		}
	}

	//Exiba o resultado
	for(i=0; i<TL; i++)
		printf("%d ", vet[i]);
}
