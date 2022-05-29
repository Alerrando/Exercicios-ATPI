#include <stdio.h>
#include <locale.h> //para usar acentuação em português
#include <math.h> // utilizar a função de raiz quadrada (sqrt)
#define TH 10
//Convenção verifica = 1 --> O numero é primo
//          verifica = 0 --> O numero não é primo
main()
{
    setlocale(LC_ALL, "Portuguese");
    int n[TH];
    int d,i,limite;
    int verifica; // bandeira indicativa de verificação de numero primo.


    verifica=1;
    
    printf("Digite um número inteiro:\n");
    scanf("%d", &n[TH]);

    for(i=0; i<TH ;i++)
    {
        if (n[i] > 1) { //só verifica se o número for maior que 1
            d = 2;
            verifica = 1;
            limite = sqrt(n[i]); // determina o limite de busca de dividendos até a raiz quadrada do número analisado
            while(verifica && d <= limite) //laço de verificação
             {
               //se o número for divisível por d, este não é primo
                if (n[i] % d  == 0){ 
                    //define como não primo
                    verifica = 0;
                }
                //incrementa o número para testar
                d++;
             } 
            // imprime se primo
            if (verifica) // é o mesmo que verifica == 1
                printf("O número %d, na posição: n[%d] é primo.\n", n[i],i);
        }
    }
    return 0;   
}
