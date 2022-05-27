//Valores entre 567 e 900 ou entre 1002 e 1043
// Autor:Bernardo Carlos
//15/09/2021
//Versão 1.0

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int valor;
    printf("Digite um valor entre 567 e 900 ou entre 1002 e 1043\n");
    scanf("%d",&valor);

    if(valor>=567 && valor<=900)
        printf("\nO valor digitado foi: %d , e esta entre 567 e 900\n",valor);
    else
        if(valor>=1002 && valor<=1043)
            printf("O valor digitado foi de: %d , e esta entre 1002 e 1043\n",valor);
    else
        printf("Valor inválido\n");

return(0);
}

