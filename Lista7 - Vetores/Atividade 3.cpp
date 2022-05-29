#include <stdio.h>
#include <locale.h> //para usar acentua��o em portugu�s
#include <math.h> // utilizar a fun��o de raiz quadrada (sqrt)
#define TH 10
//Conven��o verifica = 1 --> O numero � primo
//          verifica = 0 --> O numero n�o � primo
main()
{
    setlocale(LC_ALL, "Portuguese");
    int n[TH];
    int d,i,limite;
    int verifica; // bandeira indicativa de verifica��o de numero primo.


    verifica=1;
    
    printf("Digite um n�mero inteiro:\n");
    scanf("%d", &n[TH]);

    for(i=0; i<TH ;i++)
    {
        if (n[i] > 1) { //s� verifica se o n�mero for maior que 1
            d = 2;
            verifica = 1;
            limite = sqrt(n[i]); // determina o limite de busca de dividendos at� a raiz quadrada do n�mero analisado
            while(verifica && d <= limite) //la�o de verifica��o
             {
               //se o n�mero for divis�vel por d, este n�o � primo
                if (n[i] % d  == 0){ 
                    //define como n�o primo
                    verifica = 0;
                }
                //incrementa o n�mero para testar
                d++;
             } 
            // imprime se primo
            if (verifica) // � o mesmo que verifica == 1
                printf("O n�mero %d, na posi��o: n[%d] � primo.\n", n[i],i);
        }
    }
    return 0;   
}
