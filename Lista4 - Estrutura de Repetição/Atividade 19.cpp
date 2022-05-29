#include <stdio.h>

int main()
{
	int homens;
	char sexo;
	float altura, alturaM, alturaH, alturaMG, alturaHG, media, maior=0, menor=99999;
	double total, total2, contador, contador2, i;
	
	printf("Digite sua altura\n");
	scanf("%f", &altura);
	
	for(i = 0;i <=4; i++)
	{
		printf("Qual seu sexo\n");
		fflush(stdin);
		scanf("%c", &sexo);
		
		if(sexo == 'M' || sexo == 'm')
		{
			contador++;
			alturaMG = altura; 
			alturaM = altura+alturaM;
		}
		
		
		if(sexo == 'H' || sexo == 'h')
		{
			fflush(stdin);
			contador2++;
			alturaHG = altura;
			alturaH = altura+alturaH;
		}

		
		printf("Digite sua altura\n");
		scanf("%f", &altura);
		
	}
	printf("Qual seu sexo\n");
	fflush(stdin);
	scanf("%c", &sexo);
	
	if(alturaHG > alturaMG)
	{
		maior = alturaHG;
		menor= alturaMG;
	}
	if(alturaHG < alturaMG)
	{
		maior = alturaMG;
		menor = alturaHG;
	}
	media = alturaM/2;
	
	printf("A media eh de %.2f\n", media);
	
	printf("A maior altura eh %.2f\n",maior);
    printf("A menor altura eh %.2f\n",menor);
    
    total = (contador/i)*100;
    total2 = (contador2/i)*100;
    
    printf("A porcentagem de homens foi de: %.2lf%%\nA de mulheres foi de %.2lf%%\ne a diferença deles foi de: %.2lf%%\n", total, total2, total-total2);
	
}
