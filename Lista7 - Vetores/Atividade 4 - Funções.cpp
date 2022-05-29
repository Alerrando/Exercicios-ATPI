#include <stdio.h>
#define TF 12

void Levetor(int vetT[TF])
{
	int i;
	
	for(i=0; i<TF; i++)
	{
		printf("Digite a temperatura do mes %d: ", i+1);
		scanf("%d", &vetT[i]);
	}
}


void Exibir(int vetT[TF])
{
	int i, maior=0, menor=9999999, posMa, posMe;
	
	for(i=0; i<TF; i++)
	{
		if(vetT[i] > maior)
		{
			maior = vetT[i];
			posMa = i+1;
		}
		
		if(vetT[i] < menor)
		{
			menor = vetT[i];
			posMe = i+1;
		}
	}
	
	printf("A maior temperatura eh %d, no mes %d\n", maior, posMa);
	printf("A menor temperatura eh %d, no mes %d\n", menor, posMe);
}

void exc(void)
{
	int vetT[TF], i, maior, menor, posMa, posMe;
	
	Levetor(vetT);
	Exibir(vetT);
}

int main()
{
	exc();
}
