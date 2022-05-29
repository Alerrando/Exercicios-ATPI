#include <stdio.h>
#define TH 10

int main()
{
	int i;
	float nota1[TH], nota2[TH], media[TH], mediaG;
	
	for(i=0; i<TH;i++)
	{
		printf("Aluno %d\n", i+1);
		printf("Coloca a sua nota da primeira prova: \n");
		scanf("%f", &nota1[i]);
		
		printf("Coloca a sua nota da segunda prova: \n");
		scanf("%f", &nota2[i]);
	}
	
	for(i=0; i<TH;i++)
	{
		media[i] = (nota1[i]+nota2[i])/2;
		
		
		
		if(media[i] >=7)
		{
			printf("O aluno %d, teve uma media de %.2f, e esta aprovado\n", i+1, media[i]);
		}
		if(media[i] <7)
		{
			printf("O aluno %d, teve uma media de %.2f, e esta reprovado\n", i+1, media[i]);
		}
		
		mediaG = (media[i] + media[i])/2;
		
		if(media[i] < mediaG)
		{
			printf("O aluno %d, teve uma media menor que a media da sala\n", i+1);
		}
		
		if(media[i] > mediaG)
		{
			printf("O aluno %d, teve uma media maior que a media da sala\n", i+1);
		}
	}
		
}
