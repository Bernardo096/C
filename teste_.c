#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    int auxiliar;
    int numero,troca,minimo=0,maximo=100;

    srand(time(NULL));
    auxiliar=rand()%100;
    auxiliar+=1;

    printf("\njogo de advinhacao descubra o numero que estou pensando de %d a %d ",minimo,maximo);
    do
    {
        printf("\nDigite: ");
        scanf("%d",&numero);
        if(numero > maximo || numero < minimo)

            printf("\nValor invalido, Digite um numero valido!");


        if(numero > auxiliar && numero < maximo)

            maximo = numero;

         else if(numero < auxiliar && numero > minimo )

            minimo = numero;

          printf("\nO numero e maior que %d e menor que %d",minimo,maximo);

    }
        while(auxiliar!=numero);
        printf("\nAcertou %d",auxiliar);
}
