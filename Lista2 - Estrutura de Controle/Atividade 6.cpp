#include <stdio.h>

int main()

{
	float altura, peso;
	char homem, mulher;
	
	printf("Insira seu genero: ");
	scanf("%c %c", &homem, &mulher);
	fflush(stdin);
	
	printf("Insira sua altura: ");
	scanf("%f", &altura);
	
	if (mulher){
		peso = (62.1*altura)-447;
	    printf("Seu peso e: %f");
	}
	
	if (homem){
		peso = (72.7*altura)-58;
	    printf("Seu peso e: %f", peso);
	}
}
