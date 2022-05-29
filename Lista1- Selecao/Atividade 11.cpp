#include <stdio.h>

int main ()
{
	float salario, novo_salario, salario_reajustado;


	printf("Insira seu salario: ");
	scanf("%f", &salario);
	
	novo_salario = salario*25/100;
	salario_reajustado = salario-novo_salario;
	
    printf("Seu novo salario e: %f\n", novo_salario);
    
    printf("Seu antigo salario e: %2.f\n", salario_reajustado);
	
}
