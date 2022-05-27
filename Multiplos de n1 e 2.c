//Multiplos n1 e n2
//Autor:Bernardo Carlos
//Versão 1.0
//06/09/2021

#include <stdio.h>

int main (void)
{
    int n1,n2;
    printf("Digite o valor de N1:");
    scanf("%d",&n1);
    printf("Digite o valor de N2:");
    scanf("%d",&n2);

{
    if(n1%n2==0)
        printf("\n N1 e multiplo de N2");
        else
    if(n2%n1==0)
        printf("\n N2 e multiplo de N1");
        else
        printf("\n Os numeros nao sao multiplos");

}
return(0);
}
