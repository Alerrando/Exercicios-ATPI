#include <stdio.h>
#define TF 5

void LeVetores (int vet1[TF], int TL)
{
	int i, num, elem;
	TL=0;
	
	printf("Digite o %d numero no vetor 1: ", TL+1);
	scanf("%d", &num);
	
	while(num>0 && TL<TF-1)
	{
		vet1[TL] = num;
		TL++;
		
		if(TL<TF-1)
		{
			printf("Digite o %d numero no vetor 1: ", TL+1);
			scanf("%d", &num);
		}
	}
	
	printf("Digite o elemento: ");
	scanf("%d", &elem);
}

void enviar (int vet1[TF], int &elem, int &TL)
{
	int i, pos=0;
	
	while(pos<TL && elem>vet1[pos])
		pos++;
	
	
	for(i=TL; i>pos; i--)
		vet1[i] = vet1[i-1];
	
	vet1[pos] = elem;
	pos++;
}

void Imprimir (int vet1[TF], int &TL)
{
	int i;
	
	for(i=0; i<TL; i++)
		printf("%d ", vet1[i]);
		
}


void exc ()
{
	int vet1[TF], elem, i, TL;
	
	LeVetores ( vet1, TL);
	enviar (vet1, elem, TL);
	Imprimir (vet1, TL);
}


main ()
{
	exc();
	
}
