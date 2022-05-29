#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int elevadMF,andar, total, maior=0, menor=9999999;
	char periodo;
	float contador, contador2, contador3, contadorM, contadorV, contadorN;
	
	printf("Qual andar você quer ir\n");
	scanf("%d", &andar);
	
	printf("Qual elevador você quer utilizar: 1, 2 ou 3\n");
	scanf("%d", &elevadMF);
	
	while(elevadMF >0)
	{
		printf("Qual o período que você vai utilizar o elevador\nDigite M para matutino\nV para vespertino\nN para Noturno\n");
		fflush(stdin);
		scanf("%c", &periodo);
		
		if(elevadMF == 1)
		{
			contador++;
				if(periodo == 'M' || periodo == 'm')
				{
					contadorM++;
				}
				
				if(periodo == 'V' || periodo == 'v')
				{
					contadorV++;
				}
				
				if(periodo == 'N' || periodo == 'n')
				{
					contadorN++;
				}
		}
		if(elevadMF == 2)
		{
			contador2++;
			
				if(periodo == 'M' || periodo == 'm')
				{
					contadorM++;
				}
				
				if(periodo == 'V' || periodo == 'v')
				{
					contadorV++;
				}
				
				if(periodo == 'N' || periodo == 'n')
				{
					contadorN++;
				}
		}
		if(elevadMF == 3)
		{
			contador3++;
			
			if(periodo == 'M' || periodo == 'm')
				{
					contadorM++;
				}
				
				if(periodo == 'V' || periodo == 'v')
				{
					contadorV++;
				}
				
				if(periodo == 'N' || periodo == 'n')
				{
					contadorN++;
				}
		}
	printf("--------------------------------------------------------------------------------\n");
	printf("Qual andar você quer ir\n");
	scanf("%d", &andar);
	
	printf("Qual elevador você quer utilizar: 1, 2 ou 3\n");
	scanf("%d", &elevadMF);
	
	if(andar > maior)
		maior = andar;
	
	if(andar < menor)
		menor = andar;
	
	}
	printf("O maior andar é: %d\n", maior);
	printf("O menor andar é: %d\n", menor);
	printf("--------------------------------------------------------------------------------\n");
	printf("Quantidade de pessoas que utilizou o elevador 1 foi %.2f\n", contador);
	printf("Quantidade de pessoas que utilizou o elevador 2 foi %.2f\n", contador2);
	printf("Quantidade de pessoas que utilizou o elevador 3 foi %.2f\n", contador3);
	printf("--------------------------------------------------------------------------------\n");
	printf("Quantidade de pessoas que utilizou o elevador no periodo Matutino foi de %.2f\n", contadorM);
	printf("Quantidade de pessoas que utilizou o elevador no periodo Vespertino foi de %.2f\n", contadorV);
	printf("Quantidade de pessoas que utilizou o elevador no periodo Noturno foi de %.2f\n", contadorN);
	printf("--------------------------------------------------------------------------------\n");
	
	if(contador > contador2 && contador > contador3)
	{
		printf("O elevador mais frequentado é o elevador 1");
	}
	else
	
	if(contador2 > contador && contador2 > contador3)
	{
		printf("O elevador mais frequentado é o elevador 2");
	}
	else
		printf("O elevador mais frequentado é o elevador 3");
}
