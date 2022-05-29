#include <stdio.h>
#include <locale.h>
#define TF 5

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int vet[TF], i, cont=0, cont2=0;
	
	for (i = 0; i<5; i++)
	{
		printf("Digite um número inteiro:\n");
		scanf("%d", &vet[i]);
		
		
		if(vet[i] %2==0)
			cont++;
		else
			cont2++;
	}
	
	printf("A quantidade de numero par é %d\n", cont);
	printf("A quantidade de número impar é %d\n", cont2);
	
	
}
