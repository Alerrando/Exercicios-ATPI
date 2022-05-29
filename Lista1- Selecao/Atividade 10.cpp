#include <stdio.h>

int main ()
{
	float salario, imposto, salario_reajustado;


	printf("Insira seu salario: ");
	scanf("%f", &salario);
	
    imposto = salario*5/100;
	printf("%f\n", imposto);
	
	salario_reajustado = salario+imposto;
	printf("%f\n", salario_reajustado);
	
}
