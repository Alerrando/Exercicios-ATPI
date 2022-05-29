#include <Stdio.h>
#include <math.h>

int main()
{
	int angulo;

	printf("Insira quanto de angulo: ");
	scanf("%d", &angulo);
	
	while(angulo >=-360)
	{	
		if(angulo >0 && angulo <90 )
		{
			printf("1ºQuadrante\n");
		}
		else
		
		if(angulo >=90 && angulo <180)
		{
			printf("2ºQuadrante\n");
		}
		else
		
		if(angulo >=180 && angulo <270)
		{
			printf("3ºQuadrante\n");
		}
		else
		
		if(angulo >=270 && angulo <360)
		{
			printf("4ºQuadrante\n");
		}
		else
		
		if(angulo <0 && angulo <=90)
		{
			printf("1ºQuadrante\n");
		}
		else
		
		if(angulo >-90 && angulo<-180)
		{
			printf("2ºQuadrante");
		}
		else
		
		if(angulo >=-180 && angulo <-270)
		{
			printf("3ºQuadrante\n");
		}
		else
		
		if(angulo >=-270 && angulo <-360)
		{
			printf("4ºQuadrante\n");
	}
	printf("Insira quanto de angulo: ");
	scanf("%d", &angulo);
}
}
