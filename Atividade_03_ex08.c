//Nome em letra maiúscula
//Autor:Bernardo Carlos Oliveira Silva
//18/10/2021
//VErsão 01


#include <stdio.h>
#include <string.h>
char tudocaixa_alta(char string[80])
{int x;
     for (x = 0; x < strlen(string);x++)
        {
            if (string[x]>=97 && string [x] <=122)
                string[x] = string [x] -32;
        }
    return(string);
}
int main(void)
{   int x;
    char nome [80],caixa_alta;
        printf("Digite seu nome: ");
        gets(nome);
        caixa_alta=tudocaixa_alta(nome);

        printf("\nEste e seu nome em maiusculo:  %s ",nome);
    return(0);
}





















