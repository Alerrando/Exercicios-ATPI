#include <Stdio.h>

int main()
{
	int codigo;
	
	printf("Insira seu codigo: ");
	scanf("%d", &codigo);
	
	if (codigo == 1)
	printf("Sul");
	
	if (codigo == 2)
	printf("Norte");
	
	if(codigo == 3)
	printf("Leste");
	
	if(codigo == 4)
	printf("Oeste");
	
	if (codigo >= 5 && codigo <=6)
	printf("Nordeste");
	
	if (codigo >=7 && codigo <=9)
	printf("Sudeste");
	
	if(codigo >=10 && codigo <= 20)
	printf("Centro-Oeste");
	
	if(codigo >=21 && codigo <= 30)
	printf("Noroeste");
	return 0;
}
