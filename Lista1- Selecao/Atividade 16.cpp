#include <stdio.h>
#include <math.h>

int main()
{
	float P, i, M, lucro_bruto, IOF, lucro_liquido, lucro_percentual;
	int n;
	
	printf("Valor da aplicacao: ");
	scanf("%f", &P);
	printf("Taxa de juros constante: ");
	scanf("%f", &i);
	printf("Quantidade de meses: ");
	scanf("%d", &n);
	
	M = P + pow(1+i/100, n);
	lucro_bruto = M - P;
	IOF = lucro_bruto*8/100;
	lucro_liquido = lucro_bruto - IOF;
	lucro_percentual = lucro_liquido*100/P;
	
	printf("Montanha - %.2f\n", M);
	printf("Lucro bruto = %.2f\n", lucro_bruto);
	printf("IOf = %.2f\n", IOF);
	printf("Lucro liquido = %.2f\n", lucro_liquido);
	printf("Lucro porcentual = %.2f\n", lucro_percentual);
	
	
	
	
	
	
}
