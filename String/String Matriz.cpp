#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *matriz[2][2]; // se você quer uma matriz de strings deve usar o tipo char * como o tipo da matriz.
    char string1[] = "Minha string";
    
    matriz[0][0] = string1;
    
    printf("%s", matriz[0][0]);
    return 0;
}
