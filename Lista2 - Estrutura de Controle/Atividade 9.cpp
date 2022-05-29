#include <stdio.h>

int main()
{
	int num1, num2, resto1, resto2, result;
	float result2;
	
	printf("insira o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Insira o segundo numero: ");
	scanf("%d", &num2);
	
	resto1 = num1%2;
	resto2 = num2%2;
	
	if(resto1 == 0 && resto2==0){
		printf("Os dois numeros sao pares\n");
		result = num1+num2;
		printf("As soma deles e: %\n", result);
	}
	if(resto1 == 1 && resto2 == 1){
		printf("Os numeros sao impares\n");
		result = num1-num2;
		printf("A subtração deles e: %d\n", result);
	}
	if(resto1 == 0 && resto2 == 1){
		printf("O primeiro numero e par e o segundo e impar\n");
		result = num1*num2;
		printf("A multiplação deles e: %d\n", result);
	}
	if(resto1 == 1 && resto2 == 0){
		printf("O primeiro numero e impar e o segundo e par\n");
		result2 = num1/num2;
		printf("A divisao deles e: %.2f\n", result2);
	}
	
}
