#include <stdio.h>

int main ()
{
    int id;
    float altura,media, media2,alturaA, alturaA2;

    printf("Digite a sua idade\n");
    scanf("%d",&id);


    while(id>0)
    {
        printf("Digite a sua altura\n");
        scanf("%f",&altura);


        if(id > 50)
        {
            alturaA= alturaA+altura;
            media = alturaA/2;
        }
		if(id >=30 && id <= 40)
		{
			alturaA2 = alturaA2+altura;
			media2 = alturaA2/2;
		}


        printf("Digite a sua idade\n");
        scanf("%d",&id);



    }

    printf("A media eh %.2f\n",media);
	printf("A media eh de %.2f\n", media2);
}

