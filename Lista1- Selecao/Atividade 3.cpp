#include <stdio.h>
#include <math.h>

int main()
{
	int num1, num2, quo, resto;

	
	printf("Insira o numerador e o demoniador: \n");
	scanf("%d %d", &num1, &num2);
	
	//quo = num1 / num2;
	
	//resto = num1 - quo*num2;
	
	resto = num1 % num2;
	
	printf("o resto e %d\n", resto);
	
	
	
}
