#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, peso, maior=0, menor=99999, boi_maior, boi_menor;
	
	
	printf("Digite o peso do boi\n");
	scanf("%d",&peso);
	
	while(peso>0)
	{
		printf("Digite o numero de identificação do boi\n");
		scanf("%d", &num);
		
		if(peso > maior)
		{
			maior = peso;
			boi_maior=num;
		}
		
		if(peso < menor)
		{
			menor = peso;
			boi_menor=num;
		}
		printf("Digite o peso do boi\n");
		scanf("%d",&peso);
	
		
	
	}
	printf("O boi mais pesado tem o peso de %d\n", maior);
	printf("E seu numero de identificação é : %d\n", boi_maior);
	
	printf("O boi mias leve tem o peso de %d\n", menor);
	printf("E seu numero de identificação é : %d\n", boi_menor);
	
	
	
}
