#include <stdio.h>

int main()
{
	float nota1, nota2, nota3, media;
	printf ("Insira a primeira nota: ");
	scanf("%f",&nota1);
	
	printf ("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Digite a ultima nota: ");
	scanf ("%f", &nota3);
	
	printf("Vamos calcular sua media\n");
	media = nota1+nota2+nota3/3;
	if (media>7){
	printf("Aprovado");
	}else if (media<7){
		printf("Reprovado");
	}
}
