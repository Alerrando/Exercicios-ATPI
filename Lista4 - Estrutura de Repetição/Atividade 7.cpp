#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, contador=0, contador2=0, ajust, ajust1;
	char resp, sexo;
	double por, por1,contS=0, contS2=0;
	
	for(i=0;i<6;i++)
	{
	printf("Você gostou do nosso produto?\n");
	fflush(stdin);
	scanf("%c", &resp);
	
	printf("Você é homem ou mulher: \n");
	fflush(stdin);
	scanf("%c", &sexo);
	
	if(resp == 'S' || resp == 's'){
		fflush(stdin);
		contador++;
	}
	if(resp == 'N' || resp == 'n'){
		fflush(stdin);
		contador2++;
	}
	if(sexo == 'M' || sexo == 'm'){
		fflush(stdin);
		contS++;
	}
	if(sexo == 'H' || sexo == 'h'){
		fflush(stdin);
		contS2++;
		
}

}
	printf("A quantidade de pessoas que falaram que %d gostaram do produto\n", contador);
	printf("A quantidade de pessoas que falaram que %d gostaram do produto\n", contador2);

	por = contS/i;
	ajust = por*100;
	
	por1 = contS2/i;
	ajust1 = por1*100;
	
	printf("A quantidade em porcentagem de mulheres é %d%%\n", ajust);
	printf("A quantidade em porcentagem de homens é %d%%\n", ajust1);
}
