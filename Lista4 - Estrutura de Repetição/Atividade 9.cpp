#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int numC;
	char codC;
	float preco_kwh,quant_kwhM, totalP, maior=0, menor=99999, maiorC, menorC, totalC, media, quantR, 
	quantC, quantI, quantTR, quantTC, quantTI, numeMaior, numeMenor;
	
	printf("Informe o numero do consumidor\n");
	scanf("%d", &numC);
	
	while(numC>0)
	{
		printf("Qual o pre�o do Kwh Consumido\n");
		scanf("%f", &preco_kwh);
	
		printf("Quanto KWh voc� consumiu durante o m�s?\n");
		scanf("%f", &quant_kwhM);
	
		printf("Informe seu codigo de consumidor: R = residencial\nC = Comercial\nI = Industrial\n");
		fflush(stdin);
		scanf("%c", &codC);
		
		if(codC == 'R' || codC == 'r')		
		{
			totalP = preco_kwh*12;
			quantR = quant_kwhM>quant_kwhM;
			printf("A quantidade que voc� ira ter que pagar � %.2f\n", totalP);
			quantTR = quantTR+quant_kwhM;
		}
				
		
		if(codC == 'C' || codC == 'c')
		{
			totalP = preco_kwh*12;
			quantC= quant_kwhM;
			printf("A quantidade que voc� ira ter que pagar � %.2f\n", totalP);
			quantTC = quantTC+quant_kwhM;
		}
		
				
		if(codC == 'I' || codC == 'i')
		{
			totalP = preco_kwh*12;
			quantI = quant_kwhM;
			printf("A quantidade que voc� ira ter que pagar � %.2f\n", totalP);
			quantTI = quantTI+quant_kwhM;
		}
		
		
		printf("--------------------------------------------------------------------------------\n");
		printf("Informe o numero do consumidor\n");
		scanf("%d", &numC);
	}
	
	
		if(quantR > quantC && quantR > quantI)
		{
			maior = quantR;
			printf("O maior consumidor � o Residencial, com a quantidade de %.2f consumo\n", maior);
		}
		
		if(quantR < quantC && quantR < quantI)
		{
			menor = quantR;
			printf("O menor consumidor � o Residencial, com a quantidade de %.2f consumo\n", menor);
		}
		//--------------------------------------------------------------------------------
		else
		
		if(quantC > quantR && quantC > quantI)
		{
			maior = quantC;
			printf("O maior consumidor � o Comercial, com a quantidade de %.2f consumo\n", maior);
		}
		
		if(quantC < quantR && quantC < quantI)
		{
			menor = quantC;
			printf("O menor consumidor � o Comercial, com a quantidade de %.2f consumo\n", menor);
		}
		//--------------------------------------------------------------------------------
		else
		
		if(quantI > quantR && quantI > quantC)
		{
			maior = quantI;
			printf("O maior consumidor � o Industrial, com a quantidade de %.2f consumo\n", maior);
		}
		if (quantI < quantR && quantI < quantC)
		{
			menor = quantI;
			printf("O menor consumidor � o Industrial, com a quantidade de %.2f consumo\n", menor);
		}
		
	printf("O total de consumo dos consumidores residenciais � de %.2f\n", quantTR);
	printf("O total de consumo dos consumidores comerciais � de %.2f\n", quantTC);
	printf("O total de consumo dos consumidores industriais � de %.2f\n", quantTI);
	printf("--------------------------------------------------------------------------------\n");
	media = (quantTR+quantTC+quantTI)/3;
	printf("A media geral de consumo � de %.2f\n", media);
}
