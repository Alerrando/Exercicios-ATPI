#include <stdio.h>
#define TF 10

int main()
{
	int vet[TF], TL=0, num, i, elem, pos;
	
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
	//Leitura do elem para inserir ordenadamente
	printf("Digite um elemento para inserir: ");
	scanf("%d", &elem);
	
	//Busca a melhor posição para inseriri o elem
	pos=0;
	
	while(pos<TL && elem>vet[pos])
	{
		pos++;
	}
	
	//Remanejamento
	for(i=TL; i>pos; i--)
		vet[i] = vet[i-1];
		
	//Insere o elem
	vet[pos] = elem;
	TL++;
	
	//Exiba o resultado
	for(i=0; i<TL; i++)
		printf("%d ", vet[i]);
}
