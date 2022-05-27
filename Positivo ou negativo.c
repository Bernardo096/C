//Número par e positivo/impar e negativo
//Autor:Bernardo Carlos
//06/09/2021
//Versão 1.0

#include <stdio.h>

int main (void)
{
    int n1;
    printf("Digite o valor de n1: \n");
    scanf("%d",&n1);
{
    if(n1%2==0 && n1>0)
        printf("Este numero e par e positivo");
        else
    if(n1%2==1 && n1>0 )
        printf("Este numero e impar e positivo");
        else
    if(n1%2==0 && n1<0 )
        printf("Este numero e par e negativo");
        else
        printf("Este numero e impar e negativo");
}
 return(0);
}
