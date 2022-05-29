#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int lab, numM, RA, tempo, quant_alunos, maior=0;
	char sexo;
	
	printf("Qual o numero do Laboratório: \n");
	scanf("%d", &lab);

	while(lab >0)
	{
		printf("Números dos Micros:\n");
		scanf("%d", &numM);
		
		while(numM > 0)
		{
			printf("Insira seu R.A\n");
			scanf("%d", &RA);
			
			printf("Qual seu Sexo: F: Feminino, M: Masculino\n");
			fflush(stdin);
			scanf("%c", &sexo);
			
			printf("Quanto tempo você fico no Laboratório:\n");
			scanf("%d", &tempo);
			printf("--------------------------------------------------------------------------------\n");
			
			printf("Números dos Micros:\n");
			scanf("%d", &numM);
			
			quant_alunos++;
		}
		
		printf("Qual o numero do Laboratório: \n");
		scanf("%d", &lab);
		
		
	}
	
	
}
