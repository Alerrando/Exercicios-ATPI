#include <stdio.h>

int main()
{
   float nota1, nota2, nota3, media;
   
   printf("Insira sua nota do laboratorio:\n");
   scanf("%f", &nota1);
   
   printf("Insira sua nota da Av. Semestral:\n");
   scanf("%f", &nota2);
   
   printf("Insira usa nota do Exame Final:\n");
   scanf("%f", &nota3);
   
   media = (nota1*2+nota2*3+nota3*5)/10;
   
   printf ("sua nota e: %.2f\n", media);
   
   if(media < 5.0)
   printf("E");
   
   if(media > 5.1 && media <= 6.0)
   printf("D");
   
   if(media > 6.1 && media <= 7.0)
   printf("C");
   
   if(media > 7.1 && media <= 8.0)
   printf("B");
   
   if(media > 8.1 && media >= 10.0)
   printf("A");
}
