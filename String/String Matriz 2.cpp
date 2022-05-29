#include <stdio.h>
#include <string.h>

int main()
{
    char mat[200][100];
    strcpy(mat[0], "paulo");
    //como ele não usou uma string para o nome pablo, ele teve que usar o strcpy para a matriz armazenar o nome Paulo
    printf("%s", mat[0]);
}
