#include <stdio.h>
#define TFM 6
#define TFV 6

int main()
{
	int matDist[TFM][TFM], vetCid[TFV], nLinha, qCid, l, c, i, dist, maior=0, menor=99999, linha_ma, linha_me;
	
	for(l=0; l<TFM; l++)
		for(c=l+1; c<TFM; c++)
		{
			printf("Distancia da cid. %d p/ %d \n", l+1, c+1);
			scanf("%d", &matDist[l][c]);
			matDist[c][l] = matDist[l][c];
		}
	
	printf("Numero de linha: \n");
	scanf("%d", &nLinha);
	
	while(nLinha!=9999)
	{
		printf("Numero de cidades percorridas: \n");
		scanf("%d", &qCid);
		
		for(i=0; i<qCid; i++)
		{
			printf("Codigo da Cidade: \n");
			scanf("%d", &vetCid[i]);
		}
		dist=0;
		for(i=0; i<qCid; i++)
		{
			l=vetCid[i];
			c=vetCid[i+1];
			dist = dist + matDist[l][c];
		}
		printf("Distancia da cidade %d p/ %d = %d\n", vetCid[0], vetCid[qCid-1], dist);
		
		if(dist>maior)
		{
			maior=dist;
			linha_ma=nLinha;
			
		}
		
		if(dist<menor)
		{
			menor=dist;
			linha_me=nLinha;
			
		}
		printf("Numero de linha: \n");
		scanf("%d", &nLinha);
	}
	
	printf("A linha %d tem a maior distancia: \n", linha_ma);
	printf("A linha %d tem a menor distancia: \n", linha_me);

}
