#include <stdio.h>

int main()
{
	int nota1, nota2, nota3, mediaA;
	
	printf("Inseri a primeira nota: ");
	scanf("%d", &nota1);
	
	printf("Inseri a segunda nota: ");
	scanf("%d", &nota2);
	
	printf("Inseri a terceira nota: ");
	scanf("%d", &nota3);
	
	mediaA = (nota1+nota2+nota3)/3;
	
	if (mediaA <=5)
	 printf("Reprovado");
	
	if(mediaA >5 && mediaA <=7)
	  printf("Exame");
	
	if(mediaA >7 && mediaA == 10)
	  printf("Aprovado");
}
