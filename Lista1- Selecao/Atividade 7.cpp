#include <stdio.h>

int main ()
{
	float nota1, nota2, nota3, nota4, nota5, nota6, media, media2;
	
	printf("Aluno 1, insira a primeira nota aqui:");
	scanf("%f", &nota1);
	
	printf("Aluno 2, insira a primeira nota aqui: ");
	scanf("%f", &nota4);
	
	printf("Aluno 1, insira a segunda nota:");
	scanf("%f", &nota2);
	
	printf("Aluno 2, Insira a segunda nota:");
	scanf("%f", &nota5);
	
	printf("Aluno 1, Insira a terceira nota: ");
	scanf("%f", &nota3);
	
	printf("Aluno 2, Insira a terceira nota: ");
	scanf("%f", &nota6);
	
    printf("Vamos calcular sua media\n");
	media = nota1+nota2+nota3/3;
	
	printf("Vamos calcular sua media\n");
	media2 = nota1+nota2+nota3/3;
	
	if (media>7){
	printf("Aprovado\n");
	}else if (media<7){
		printf("Reprovado\n");
    }
	
	if (media2>7){
	printf("Aprovado");
	}else if (media2<7){
		printf("Reprovado");
    }
}
	

