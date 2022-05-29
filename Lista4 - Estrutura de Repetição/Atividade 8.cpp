#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float votBP, votNP, votN, votB, vot, cand1, cand2, cand3, cand4;
	
	printf("1=Para votar no canditado 1\n2=Para votar no candidato 2\n3=Para votar no candidato 3\n4=Para votar no candidato 4\n5=Voto Nulo\n6=Voto Branco\n0=Finaliza a votação\n");
	scanf("%f", &vot);
	
	while(vot>0 && vot <=6)
	{
		
		if(vot == 1)
		{
			fflush(stdin);
			cand1++;
		}
		
		if(vot == 2)
		{
			fflush(stdin);
			cand2++;
		}
		
		if(vot == 3)
		{
			fflush(stdin);
			cand3++;
		}
		
		if(vot == 4)
		{
			fflush(stdin);
			cand4++;
		}
		
		if(vot == 5)
		{
			fflush(stdin);
			votN++;
		}
		
		if(vot == 6)
		{
			fflush(stdin);
			votB++;
		}
		
	printf("1=Para votar no canditado 1\n2=Para votar no candidato 2\n3=Para votar no candidato 3\n4=Para votar no candidato 4\n5=Voto Nulo\n6=Voto Branco\n0=Finaliza a votação\n");
	scanf("%f", &vot);
	
	}
	printf("A quantidade de votos do candidato 1 é: %.2f\n", cand1);
	printf("A quantidade de votos do candidato 2 é: %.2f\n", cand2);
	printf("A quantidade de votos do candidato 3 é: %.2f\n", cand3);
	printf("A quantidade de votos do candidato 4 é: %.2f\n", cand4);

	printf("A quantidade de votos brancos foi de %.0f%%\n", votB);
	printf("A quantidade de votos nulos foi de %.0f%%\n", votN);
	
	votBP = (votB-vot)/100*100;
	votNP = (votN-vot)/100*100;
	printf("Porcentual de votos brancoss é %.0f%%\n", votBP);
	printf("Porcentual de votos nulos é %.0f%%\n", votNP);
}
