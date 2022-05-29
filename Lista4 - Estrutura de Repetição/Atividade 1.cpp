#include <stdio.h>

int main()
{
	int soma=0, num1;
	
	printf("Insira o numero: \n");
	scanf("%d", &num1);
	
	for(num1 >=1; num1<=500; num1++)
	{
		if(num1 %2 == 1){
		soma = soma+num1;
}
	}
	
	printf("Soma = %d", soma);
	
}
