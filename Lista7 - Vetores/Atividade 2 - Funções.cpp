#include <stdio.h>
#define TF 6

void Levetor(int vet1[TF])
{
	int i;
	
	for(i=0; i<TF; i++)
	{
		printf("Digite o numero %d do vetor: ", i+1);
		scanf("%d", &vet1[i]);
	}
}

void ParEImpar(int vet1[TF])
{
	int i, contP=0, contI=0;
	
	for(i=0; i<TF; i++)
	{
		if(vet1[i] %2 == 0)
			contP++;
		else
			contI++;
	}
	
	printf("A quantidade de numeros Par eh: %d\n", contP);
	printf("A quantidade de numeros Impar eh: %d\n", contI);
}

void exc(void)
{
	int vet1[TF], contP=0, contI=0, i;
	
	Levetor(vet1);
	ParEImpar(vet1);
}

int main()
{
	exc();
}
