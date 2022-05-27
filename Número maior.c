//Comparar Valores
//Autor:Bernardo Carlos
//Versão 1.0
//06/09/2021

#include <stdio.h>
#include<conio.h>

int main (void)
{
    int a,b,c;
    printf("Digite o valor 'a':\n");
    scanf("%d",&a);
    printf("Digite o valor 'b':\n");
    scanf("%d",&b);
    printf("Digite o valor 'c':\n");
    scanf("%d",&c);
{

    if(a>b&&a>c)
        printf("\n O maior valor e a:%d",a);
        else
    if(b>a&&b>c)
        printf("\n O maior valor e b:%d",b);
        else
    if(c>b&&c>a)
        printf("\n O maior valor e c:%d ",c);
        else
        printf("Não existe um valor maior \n");

}
return(0);
}
