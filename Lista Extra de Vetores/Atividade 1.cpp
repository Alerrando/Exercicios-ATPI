#include <stdio.h>
#define TH 11

int main()
{
	int vet[TH], i, j, resto, dig1, vet2[TH*2], soma, dig2;
	
	for(i=0; i<TH; i++)
	{
		printf("Insira os 11 numeros dos seu cpf: ");
		scanf("%d", &vet[i]);
	}
	//Calculo do primerio digido verificador
	soma=0;
	for(i=0, j=10; i<TH-2; i++, j--)
	{
		soma = soma+vet[i]*j;
	}
	
	resto =	soma%11;
	dig1 = 11-resto;
	
	if(dig1 == 11 || dig1 == 10)
		dig1=0;
	
	if(dig1 == vet[9])//Primerio digito ok
	{
		//Calculo do segundo digito verificador
		soma=0;
		for(i=0, j=11; i<TH-1; i++, j--)
		{
			soma = soma+vet[i]*j;
		}
		resto=soma%11;
		dig2=11-resto;
		
		if(dig2 == 10 || dig2 == 11)
			dig2=0;
		
		if(dig2 == vet[10])
			printf("O CPF esta correto");
	
		else
			printf("CPF incorreto");
	}
	else
		printf("CPF incorreto");
}
