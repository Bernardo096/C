#include <stdio.h>
#include <string.h>
void tudocaixa_alta(char string[80], char cxalta[80])
{int x;
     for (x = 0; x < strlen(string);x++)
        {
            if (string[x]>=97 && string [x] <=122)
                cxalta[x] = string [x] -32;
            else
                cxalta[x]=string[x];
        }
    cxalta[x]=0;
    return(cxalta);
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
