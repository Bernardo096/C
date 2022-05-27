//Senha e código
//01/11/2021
//Bernardo Carlos Oliveira SIlva
//versao 1.0

#include <stdio.h>

int main (void)
{ int codg=12345,senha=9999,cont=1;
    printf("---LOGIN---\n");
    printf("Digite o codigo de login: \n");
    scanf("%d",&codg);
    printf("Digite a senha de usuario: \n");
    scanf("%d",&senha);

    for(cont=1;senha!=9999 && codg!=1234;cont++)
    {
            system("cls");
            printf("\n Valores invalidos!!\n\n");
            printf("---LOGIN---\n");
            printf("Digite o codigo de login: \n");
            scanf("%d",&codg);
            printf("Digite a senha de usuario: \n");
            scanf("%d",&senha);

        if(senha==9999 && codg==12345)
            printf("\nAcesso permitido!!");


    }
}

