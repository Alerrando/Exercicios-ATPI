#include <stdio.h>

int main()
{
	float nota1, nota2, nota3,nota4, media;
	int resposta;
	
	do {
	
	printf("Insira a primeira nota: \n");
	scanf("%f", &nota1);
	
	printf("Insira a segunda nota: \n");
	scanf("%f", &nota2);
	
	printf("Insira a terceira nota: \n");
	scanf("%f", &nota3);
	
	printf("Insira a quarta nota: \n");
	scanf("%f", &nota4);
	
	printf("Voce esta \n");
	media = (nota1+nota2+nota3+nota4)/4;
	
	if (media >= 7)
	printf("Aprovado\n");
	
	if(media < 7)
	printf("Reprovado\n");
	
	printf("Digite 1 pra continua ou 2 pra finalizar\n");
	scanf("%d", &resposta);
	
	}while (resposta=1);
	
	return 0;
	
}
