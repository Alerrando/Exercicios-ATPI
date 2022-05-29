#include <stdio.h>

int main()
{
	int q=120, quant;
	float i,R,L, lucroMax=0, preco;
	for(i=5; i>=1; i-=0.5)
	{
		R = q *i;
		L = R - 200;
		printf("Ingresso R$%.2f || Quantidade: %d || Receita gerada: R$%.2f || Lucro: R$%.2f\n", i, quant, R, L);
		
		if(L>lucroMax)
		{
			lucroMax=L;
			quant=q;
			preco=i;
		}
		q = q + 26;
	}
	printf("Lucro Maximo %.2f, Quantidade %d, Preco %.2f\n", lucroMax, quant, preco);
}
