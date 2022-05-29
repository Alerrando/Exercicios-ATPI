#include <stdio.h>

int main()
{
	int idade, mes, dias;
	float horas, minutos;
	
	printf("Insira a idade: ");
	scanf ("%d", &idade);
	
	mes= idade*12;
	printf("%d\n", mes);
	
	dias = idade*364;
	printf("%d\n", dias);
	
	horas = idade*8760;
	printf("%2.f\n", horas);
	
	minutos = idade*525600;
	printf("%2.f\n", minutos);
	
	
}
