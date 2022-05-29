#include <stdio.h>
#define TF 5

int main()
{
	int numVoo[TF], lugaresDisp[TF], i, identidade, voo, pos;
	
	for(i=0; i<TF; i++)
	{
		printf("Numero do Voo: \n");
		scanf("%d", &numVoo[i]);
		
		printf("Lugares Disponiveis: \n");
		scanf("%d", &lugaresDisp[i]);
	}
	
	printf("Identidade do Cliente: \n");
	scanf("%d", &identidade);
	
	while(identidade !=99999)
	{
		printf("Voo desejado: \n");
		scanf("%d", &voo);
		
		pos=0;
		while(pos<TF && voo!=numVoo[pos])
			pos++;
			
		if(pos<TF)
		{
			if(lugaresDisp[pos]>0)
			{
				lugaresDisp[pos]--;
				printf("Numero do voo %d\n", voo);
				printf("Lugar reservado para o cliente %d\n", identidade);
			}
			else
			{
				printf("Nao ha lugares resstantes no voo");
			}
		}
		else
			printf("Voo nao encontrado");
		
		printf("Identidade do cliente: \n");
		scanf("%d", &identidade);
		
	}
}
