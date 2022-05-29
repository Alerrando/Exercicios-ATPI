#include <stdio.h>
#define TF 3

void LeNotas (float vetN1[TF], float vetN2[TF], float mediaA[TF])
{
	int i;
	
	for(i=0; i<TF; i++)
	{
		printf("Aluno %d\n", i+1);
		printf("Digite a primeira nota:");
		scanf("%f", &vetN1[i]);
		printf("Digite a segunda nota:");
		scanf("%f", &vetN2[i]);
		printf("\n");
		
		mediaA[i] = (vetN1[i] + vetN2[i])/2;
	}
	
}

void calc (float vetN1[TF], float vetN2[TF], float &mediaG, float mediaA[TF], float &somaN, int &mediaM, int &AlunoA, int &AlunoR)
{
	int i;
	
	for(i=0; i<TF; i++)
		somaN = somaN + (vetN1[i] + vetN2[i]);
	mediaG = somaN/TF;
	
	for(i=0; i<TF; i++)
		if(mediaA[i] < mediaG)
			mediaM++;
	
	for(i=0; i<TF; i++)
	{
		if(mediaA[i] >= 7.0)
			AlunoA++;
		
		if(mediaA[i] < 7.0)
			AlunoR++;
	}
}

void Exibir(float &mediaG, int &mediaM, int &AlunoA, int &AlunoR)
{
	printf("A media da turma foi %.2f\n", mediaG);
	
	printf("A quantidade de alunos que obteve a media inferior a media da turma eh: %d\n", mediaM);
	
	printf("A quantidade de alunos aprovados eh: %d\n", AlunoA);
	printf("A quantidade de alunos reprovados eh: %d\n", AlunoR);

}

void exc (void)
{
	float vetN1[TF], vetN2[TF], mediaA[TF], mediaG, somaN=0;
	int AlunoA=0, AlunoR=0, mediaM=0;
	
	LeNotas(vetN1, vetN2, mediaA);
	calc(vetN1,vetN2,mediaG,mediaA,somaN,mediaM,AlunoA,AlunoR);
	Exibir(mediaG, mediaM, AlunoA, AlunoR);
}

int main()
{
	exc();
}
